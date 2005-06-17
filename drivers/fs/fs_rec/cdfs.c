/*
 *  ReactOS kernel
 *  Copyright (C) 2002 ReactOS Team
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */
/* $Id$
 *
 * COPYRIGHT:        See COPYING in the top level directory
 * PROJECT:          ReactOS kernel
 * FILE:             services/fs/fs_rec/cdfs.c
 * PURPOSE:          Filesystem recognizer driver
 * PROGRAMMER:       Eric Kohl
 */

/* INCLUDES *****************************************************************/

#include <ntifs.h>
#include <ntdddisk.h>
#include <ntddcdrm.h>

#define NDEBUG
#include <debug.h>

#include "fs_rec.h"


#define CDFS_PVD_SECTOR   16

/* FUNCTIONS ****************************************************************/

static NTSTATUS
FsRecIsCdfsVolume(IN PDEVICE_OBJECT DeviceObject)
{
  DISK_GEOMETRY DiskGeometry;
  PUCHAR Buffer;
  NTSTATUS Status;
  ULONG Size;

  Size = sizeof(DISK_GEOMETRY);
  Status = FsRecDeviceIoControl(DeviceObject,
				IOCTL_CDROM_GET_DRIVE_GEOMETRY,
				NULL,
				0,
				&DiskGeometry,
				&Size);
  if (!NT_SUCCESS(Status))
    {
      DPRINT("FsRecDeviceIoControl() failed (Status %lx)\n", Status);
      return(Status);
    }

  DPRINT("BytesPerSector: %lu\n", DiskGeometry.BytesPerSector);
  Buffer = ExAllocatePool(NonPagedPool,
			  DiskGeometry.BytesPerSector);
  if (Buffer == NULL)
    {
      return(STATUS_INSUFFICIENT_RESOURCES);
    }

  Status = FsRecReadSectors(DeviceObject,
			    CDFS_PVD_SECTOR,
			    1,
			    DiskGeometry.BytesPerSector,
			    Buffer);
  if (!NT_SUCCESS(Status))
    {
      DPRINT("FsRecReadSectors() failed (Status %lx)\n", Status);
      ExFreePool(Buffer);
      return(Status);
    }

  Buffer[6] = 0;
  DPRINT("CD-identifier: [%.5s]\n", Buffer + 1);

  Status = (Buffer[0] == 1 &&
	    Buffer[1] == 'C' &&
	    Buffer[2] == 'D' &&
	    Buffer[3] == '0' &&
	    Buffer[4] == '0' &&
	    Buffer[5] == '1') ? STATUS_SUCCESS : STATUS_UNRECOGNIZED_VOLUME;

  ExFreePool(Buffer);

  return(Status);
}


NTSTATUS
FsRecCdfsFsControl(IN PDEVICE_OBJECT DeviceObject,
		   IN PIRP Irp)
{
  PIO_STACK_LOCATION Stack;
  static UNICODE_STRING RegistryPath =
    RTL_CONSTANT_STRING(L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\Cdfs");
  NTSTATUS Status;

  Stack = IoGetCurrentIrpStackLocation(Irp);

  switch (Stack->MinorFunction)
    {
      case IRP_MN_MOUNT_VOLUME:
	DPRINT("Cdfs: IRP_MN_MOUNT_VOLUME\n");
	Status = FsRecIsCdfsVolume(Stack->Parameters.MountVolume.DeviceObject);
	if (NT_SUCCESS(Status))
	  {
	    DPRINT("Identified CDFS volume\n");
	    Status = STATUS_FS_DRIVER_REQUIRED;
	  }
	break;

      case IRP_MN_LOAD_FILE_SYSTEM:
	DPRINT("Cdfs: IRP_MN_LOAD_FILE_SYSTEM\n");
	Status = ZwLoadDriver(&RegistryPath);
	if (!NT_SUCCESS(Status))
	  {
	    DPRINT("ZwLoadDriver failed (Status %x)\n", Status);
	  }
	else
	  {
	    IoUnregisterFileSystem(DeviceObject);
	  }
	break;

      default:
	DPRINT("Cdfs: Unknown minor function %lx\n", Stack->MinorFunction);
	Status = STATUS_INVALID_DEVICE_REQUEST;
	break;
    }
  return(Status);
}

/* EOF */
