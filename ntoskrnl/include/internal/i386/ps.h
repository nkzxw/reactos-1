/*
 *  ReactOS kernel
 *  Copyright (C) 1998, 1999, 2000, 2001 ReactOS Team
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
#ifndef __NTOSKRNL_INCLUDE_INTERNAL_I386_PS_H
#define __NTOSKRNL_INCLUDE_INTERNAL_I386_PS_H

/*
 * Defines for accessing KPCR and KTHREAD structure members
 */
#define KTHREAD_INITIAL_STACK     0x18
#define KTHREAD_STACK_LIMIT       0x1C
#define KTHREAD_TEB               0x20
#define KTHREAD_KERNEL_STACK      0x28
#define KTHREAD_APCSTATE_PROCESS  0x44
#define KTHREAD_SERVICE_TABLE     0xDC
#define KTHREAD_PREVIOUS_MODE     0x137
#define KTHREAD_TRAP_FRAME        0x128
#define KTHREAD_CALLBACK_STACK    0x120


#define KPROCESS_DIRECTORY_TABLE_BASE 0x18
#define KPROCESS_LDT_DESCRIPTOR0      0x20
#define KPROCESS_LDT_DESCRIPTOR1      0x24
#define KPROCESS_IOPM_OFFSET          0x30

#define KPCR_BASE                 0xFF000000

#define KPCR_EXCEPTION_LIST       0x0
#define KPCR_SELF                 0x18
#define KPCR_TSS                  0x3C
#define KPCR_CURRENT_THREAD       0x124	

#ifndef __ASM__

#include "fpu.h"

#pragma pack(push,4)

// Fixme: Use correct types?
typedef struct _KPROCESSOR_STATE {
   PCONTEXT ContextFrame;
   PVOID SpecialRegisters;
} KPROCESSOR_STATE;
  
/* ProcessoR Control Block */ 
typedef struct _KPRCB {
	USHORT MinorVersion;
	USHORT MajorVersion;
	struct _KTHREAD *CurrentThread;
	struct _KTHREAD *NextThread;
	struct _KTHREAD *IdleThread;
	UCHAR Number;
	UCHAR Reserved;
	USHORT BuildType;
	ULONG SetMember;
	UCHAR CpuType;
	UCHAR CpuID;
	USHORT CpuStep;
	KPROCESSOR_STATE ProcessorState;
	ULONG KernelReserved[16];
	ULONG HalReserved[16];
	UCHAR PrcbPad0[92];
	PVOID LockQueue[33]; // Used for Queued Spinlocks
	struct _KTHREAD *NpxThread;
	ULONG InterruptCount;
	ULONG KernelTime;
	ULONG UserTime;
	ULONG DpcTime;
	ULONG DebugDpcTime;
	ULONG InterruptTime;
	ULONG AdjustDpcThreshold;
	ULONG PageColor;
	UCHAR SkipTick;
	UCHAR DebuggerSavedIRQL;
	UCHAR Spare1[6];
	struct _KNODE *ParentNode;
	ULONG MultiThreadProcessorSet;
	struct _KPRCB *MultiThreadSetMaster;
	ULONG ThreadStartCount[2];
	ULONG CcFastReadNoWait;
	ULONG CcFastReadWait;
	ULONG CcFastReadNotPossible;
	ULONG CcCopyReadNoWait;
	ULONG CcCopyReadWait;
	ULONG CcCopyReadNoWaitMiss;
	ULONG KeAlignmentFixupCount;
	ULONG SpareCounter0;
	ULONG KeDcacheFlushCount;
	ULONG KeExceptionDispatchCount;
	ULONG KeFirstLevelTbFills;
	ULONG KeFloatingEmulationCount;
	ULONG KeIcacheFlushCount;
	ULONG KeSecondLevelTbFills;
	ULONG KeSystemCalls;
	ULONG IoReadOperationCount;
	ULONG IoWriteOperationCount;
	ULONG IoOtherOperationCount;
	LARGE_INTEGER IoReadTransferCount;
	LARGE_INTEGER IoWriteTransferCount;
	LARGE_INTEGER IoOtherTransferCount;
	ULONG SpareCounter1[8];
	PP_LOOKASIDE_LIST PPLookasideList[16];
	PP_LOOKASIDE_LIST PPNPagedLookasideList[32];
	PP_LOOKASIDE_LIST PPPagedLookasideList[32];
	ULONG PacketBarrier;
	ULONG ReverseStall;
	PVOID IpiFrame;
	UCHAR PrcbPad2[52];
	PVOID CurrentPacket[3];
	ULONG TargetSet;
	ULONG_PTR WorkerRoutine;
	ULONG IpiFrozen;
	UCHAR PrcbPad3[40];
	ULONG RequestSummary;
	struct _KPRCB *SignalDone;
	UCHAR PrcbPad4[56];
	struct _KDPC_DATA DpcData[2];
	PVOID DpcStack;
	ULONG MaximumDpcQueueDepth;
	ULONG DpcRequestRate;
	ULONG MinimumDpcRate;
	UCHAR DpcInterruptRequested;
	UCHAR DpcThreadRequested;
	UCHAR DpcRoutineActive;
	UCHAR DpcThreadActive;
	ULONG PrcbLock;
	ULONG DpcLastCount;
	ULONG TimerHand;
	ULONG TimerRequest;
	PVOID DpcThread;
	struct _KEVENT *DpcEvent;
	UCHAR ThreadDpcEnable;
	UCHAR QuantumEnd;
	UCHAR PrcbPad50;
	UCHAR IdleSchedule;
	ULONG DpcSetEventRequest;
	UCHAR PrcbPad5[18];
	LONG TickOffset;
	struct _KDPC* CallDpc;
	ULONG PrcbPad7[8];
	LIST_ENTRY WaitListHead;
	ULONG ReadySummary;
	ULONG SelectNextLast;
	LIST_ENTRY DispatcherReadyListHead[32];
	SINGLE_LIST_ENTRY DeferredReadyListHead;
	ULONG PrcbPad72[11];
	PVOID ChainedInterruptList;
	LONG LookasideIrpFloat;
	LONG MmPageFaultCount;
	LONG MmCopyOnWriteCount;
	LONG MmTransitionCount;
	LONG MmCacheTransitionCount;
	LONG MmDemandZeroCount;
	LONG MmPageReadCount;
	LONG MmPageReadIoCount;
	LONG MmCacheReadCount;
	LONG MmCacheIoCount;
	LONG MmDirtyPagesWriteCount;
	LONG MmDirtyWriteIoCount;
	LONG MmMappedPagesWriteCount;
	LONG MmMappedWriteIoCount;
	ULONG SpareFields0[1];
	UCHAR VendorString[13];
	UCHAR InitialApicId;
	UCHAR LogicalProcessorsPerPhysicalProcessor;
	ULONG MHz;
	ULONG FeatureBits;
	LARGE_INTEGER UpdateSignature;
	LARGE_INTEGER IsrTime;
	LARGE_INTEGER SpareField1;
	FX_SAVE_AREA NpxSaveArea;
	PROCESSOR_POWER_STATE PowerState;
} KPRCB, *PKRCB;

#pragma pack(pop)

#ifndef __USE_W32API

#pragma pack(push,4)
/*
 * Processor Control Region Thread Information Block
 */
typedef struct _KPCR_TIB {
  PVOID  ExceptionList;         /* 00 */
  PVOID  StackBase;             /* 04 */
  PVOID  StackLimit;            /* 08 */
  PVOID  SubSystemTib;          /* 0C */
  union {
    PVOID  FiberData;           /* 10 */
    DWORD  Version;             /* 10 */
  };
  PVOID  ArbitraryUserPointer;  /* 14 */
} KPCR_TIB, *PKPCR_TIB; /* 18 */

/*
 * Processor Control Region
 */
typedef struct _KPCR {
  KPCR_TIB  Tib;                /* 00 */
  struct _KPCR  *Self;          /* 18 */
  struct _KPRCB  *PCRCB;        /* 1C */
  KIRQL  Irql;                  /* 20 */
  ULONG  IRR;                   /* 24 */
  ULONG  IrrActive;             /* 28 */
  ULONG  IDR;                   /* 2C */
  PVOID  KdVersionBlock;        /* 30 */
  PUSHORT  IDT;                 /* 34 */
  PUSHORT  GDT;                 /* 38 */
  struct _KTSS  *TSS;           /* 3C */
  USHORT  MajorVersion;         /* 40 */
  USHORT  MinorVersion;         /* 42 */
  KAFFINITY  SetMember;         /* 44 */
  ULONG  StallScaleFactor;      /* 48 */
  UCHAR  DebugActive;           /* 4C */
  UCHAR  ProcessorNumber;       /* 4D */
  UCHAR  Reserved;              /* 4E */
  UCHAR  L2CacheAssociativity;  /* 4F */
  ULONG  VdmAlert;              /* 50 */
  ULONG  KernelReserved[14];    /* 54 */
  ULONG  L2CacheSize;           /* 8C */
  ULONG  HalReserved[16];       /* 90 */
  ULONG  InterruptMode;         /* D0 */
  UCHAR  KernelReserved2[0x4C]; /* D4 */
  KPRCB  PrcbData;              /* 120 */
} KPCR, *PKPCR;

#pragma pack(pop)
#endif /* __USE_W32API */


#ifndef __USE_W32API

static inline PKPCR KeGetCurrentKPCR(VOID)
{
  ULONG value;

#if defined(__GNUC__)
  __asm__ __volatile__ ("movl %%fs:0x18, %0\n\t"
	  : "=r" (value)
    : /* no inputs */
    );
#elif defined(_MSC_VER)
  __asm mov eax, fs:0x18;
  __asm mov value, eax;
#else
#error Unknown compiler for inline assembler
#endif
  return((PKPCR)value);
}

#endif /* __USE_W32API */

VOID
Ki386ContextSwitch(struct _KTHREAD* NewThread, 
		   struct _KTHREAD* OldThread);
NTSTATUS 
Ke386InitThread(struct _KTHREAD* Thread, PKSTART_ROUTINE fn, 
		PVOID StartContext);
NTSTATUS 
Ke386InitThreadWithContext(struct _KTHREAD* Thread, PCONTEXT Context);
NTSTATUS
Ki386ValidateUserContext(PCONTEXT Context);

#endif /* __ASM__ */

#endif /* __NTOSKRNL_INCLUDE_INTERNAL_I386_PS_H */

/* EOF */
