#pragma once


#include <ntifs.h>
#include <wsk.h>
#include <Ntstrsafe.h>

#ifdef DBG
#define DPRINT DbgPrint
#else
#define DPRINT
#endif

#define DO_DEBUG __asm int 3


//#define USE_DRIVER_UNLOAD

#include <inc/basictypes.h>

