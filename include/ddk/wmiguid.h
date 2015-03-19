/*
 * wmiguid.h
 *
 * WMI GUID definitions
 *
 * This file is part of the ReactOS DDK package.
 *
 * Contributors:
 *   Timo Kreuzer (timo.kreuzer@reactos.org)
 *
 * THIS SOFTWARE IS NOT COPYRIGHTED
 *
 * This source code is offered for use in the public domain. You may
 * use, modify or distribute it freely.
 *
 * This code is distributed in the hope that it will be useful but
 * WITHOUT ANY WARRANTY. ALL WARRANTIES, EXPRESS OR IMPLIED ARE HEREBY
 * DISCLAIMED. This includes but is not limited to warranties of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 */

#pragma once

#include <guiddef.h>

#define DATA_PROVIDER_INFO_GUID \
   {0x5494dfdc, 0xa98a, 0x11d1, 0xbf, 0x43, 0x00, 0xa0, 0xc9, 0x06, 0x29, 0x10}

#define SMBIOS_DATA_GUID \
   {0x8f680850, 0xa584, 0x11d1, 0xbf, 0x38, 0x00, 0xa0, 0xc9, 0x06, 0x29, 0x10}

#define INSTANCE_INFO_GUID \
    {0xc7bf35d0, 0xaadb, 0x11d1, 0xbf, 0x4a, 0x00, 0xa0, 0xc9, 0x6, 0x29, 0x10}

#define BINARY_MOF_GUID \
    {0x05901221, 0xD566, 0x11d1, 0xB2, 0xF0, 0x00, 0xA0, 0xC9, 0x06, 0x29, 0x10}

#define ENUMERATE_GUIDS_GUID \
    {0xe3dff7bd, 0x3915, 0x11d2, 0x91, 0x03, 0x00, 0xc0, 0x4f, 0xb9, 0x98, 0xa2}

#define MS_SYSTEM_INFORMATIONGUID \
   {0x98a2b9d7, 0x94dd, 0x496a, {0x84, 0x7e, 0x67, 0xa5, 0x55, 0x7a, 0x59, 0xf2}}

DEFINE_GUID(MS_SYSTEM_INFORMATION_GUID, \
    0x98a2b9d7, 0x94dd, 0x496a, 0x84, 0x7e, 0x67, 0xa5, 0x55, 0x7a, 0x59, 0xf2);

DEFINE_GUID(DiskPerfGuid, \
    0xBDD865D1, 0xD7C1, 0x11d0, 0xA5, 0x01, 0x00, 0xA0, 0xC9, 0x06, 0x29, 0x10);

DEFINE_GUID(THERMAL_ZONE_GUID,
    0xa1bc18c0, 0xa7c8, 0x11d1, 0xbf, 0x3c, 0x00, 0xa0, 0xc9, 0x06, 0x29, 0x10);

/* e8908abc-aa84-11d2-9a93-00805f85d7c6 */
DEFINE_GUID(GlobalLoggerGuid, \
    0xe8908abc, 0xaa84, 0x11d2, 0x9a, 0x93, 0x00, 0x80, 0x5f, 0x85, 0xd7, 0xc6);

/* 8d40301f-ab4a-11d2-9a93-00805f85d7c6 */
DEFINE_GUID(GenericMessageGuid, \
    0x8d40301f, 0xab4a, 0x11d2, 0x9a, 0x93, 0x00, 0x80, 0x5f, 0x85, 0xd7, 0xc6);

/* 3d6fa8d0-fe05-11d0-9dda-00c04fd7ba7c */
DEFINE_GUID(ProcessGuid,
    0x3d6fa8d0, 0xfe05, 0x11d0, 0x9d, 0xda, 0x00, 0xc0, 0x4f, 0xd7, 0xba, 0x7c);

/* 3d6fa8d1-fe05-11d0-9dda-00c04fd7ba7c */
DEFINE_GUID(ThreadGuid,
    0x3d6fa8d1, 0xfe05, 0x11d0, 0x9d, 0xda, 0x00, 0xc0, 0x4f, 0xd7, 0xba, 0x7c);

/* 3d6fa8d3-fe05-11d0-9dda-00c04fd7ba7c */
DEFINE_GUID(PageFaultGuid,
    0x3d6fa8d3, 0xfe05, 0x11d0, 0x9d, 0xda, 0x00, 0xc0, 0x4f, 0xd7, 0xba, 0x7c);

/* 3d6fa8d4-fe05-11d0-9dda-00c04fd7ba7c */
DEFINE_GUID(DiskIoGuid,
    0x3d6fa8d4, 0xfe05, 0x11d0, 0x9d, 0xda, 0x00, 0xc0, 0x4f, 0xd7, 0xba, 0x7c);

/* 90cbdc39-4a3e-11d1-84f4-0000f80464e3 */
DEFINE_GUID(FileIoGuid,
    0x90cbdc39, 0x4a3e, 0x11d1, 0x84, 0xf4, 0x00, 0x00, 0xf8, 0x04, 0x64, 0xe3);

/* 9a280ac0-c8e0-11d1-84e2-00c04fb998a2 */
DEFINE_GUID(TcpIpGuid,
    0x9a280ac0, 0xc8e0, 0x11d1, 0x84, 0xe2, 0x00, 0xc0, 0x4f, 0xb9, 0x98, 0xa2);

/* bf3a50c5-a9c9-4988-a005-2df0b7c80f80 */
DEFINE_GUID(UdpIpGuid,
    0xbf3a50c5, 0xa9c9, 0x4988, 0xa0, 0x05, 0x2d, 0xf0, 0xb7, 0xc8, 0x0f, 0x80);

/* 2cb15d1d-5fc1-11d2-abe1-00a0c911f518 */
DEFINE_GUID(ImageLoadGuid,
    0x2cb15d1d, 0x5fc1, 0x11d2, 0xab, 0xe1, 0x00, 0xa0, 0xc9, 0x11, 0xf5, 0x18);

/* AE53722E-C863-11d2-8659-00C04FA321A1 */
DEFINE_GUID(RegistryGuid,
    0xae53722e, 0xc863, 0x11d2, 0x86, 0x59, 0x0, 0xc0, 0x4f, 0xa3, 0x21, 0xa1);

/* 398191dc-2da7-11d3-8b98-00805f85d7c6 */
DEFINE_GUID(TraceErrorGuid,
    0x398191dc, 0x2da7, 0x11d3, 0x8b, 0x98, 0x00, 0x80, 0x5f, 0x85, 0xd7, 0xc6);

#if (NTDDI_VERSION >= NTDDI_WIN2K) && (NTDDI_VERSION < NTDDI_VISTA)

/* 3d6fa8d2-fe05-11d0-9dda-00c04fd7ba7c */ /* Not used */
DEFINE_GUID(HardFaultGuid,
    0x3d6fa8d2, 0xfe05, 0x11d0, 0x9d, 0xda, 0x00, 0xc0, 0x4f, 0xd7, 0xba, 0x7c);

#endif

/* 44608a51-1851-4456-98b2-b300e931ee41 */
DEFINE_GUID(WmiEventLoggerGuid,
    0x44608a51, 0x1851, 0x4456, 0x98, 0xb2, 0xb3, 0x00, 0xe9, 0x31, 0xee, 0x41);

/* 13976D09-A327-438c-950B-7F03192815C7 */
DEFINE_GUID(DbgPrintGuid,
    0x13976d09, 0xa327, 0x438c, 0x95, 0x0b, 0x7f, 0x03, 0x19, 0x28, 0x15, 0xc7);

/* b16f9f5e-bcda-4027-9318-adf2b79df73b */
DEFINE_GUID(EventLogGuid,
	0xb16f9f5e, 0xb3da, 0x4027, 0x93, 0x18, 0xad, 0xf2, 0xb7, 0x9d, 0xf7, 0x3b);

#if (NTDDI_VERSION >= NTDDI_VISTA)

/* D56CA431-61BF-4904-A621-00E0381E4DDE */
DEFINE_GUID(DriverVerifierGuid,
    0xd56ca431, 0x61bf, 0x4904, 0xa6, 0x21, 0x00, 0xe0, 0x38, 0x1e, 0x4d, 0xde);

/* 78d14f17-0105-46d7-bfff-6fbea2f3f358 */
DEFINE_GUID(ApplicationVerifierGuid,
    0x78d14f17, 0x0105, 0x46d7, 0xbf, 0xff, 0x6f, 0xbe, 0xa2, 0xf3, 0xf3, 0x58);

#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */

