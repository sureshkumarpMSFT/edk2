/** @file
  Header file that supports Framework extension to UEFI/PI for PEI modules.

  This header file must include Framework extension definitions common to PEI
  modules.

  Copyright (c) 2007, Intel Corporation
  All rights reserved. This program and the accompanying materials
  are licensed and made available under the terms and conditions of the BSD License
  which accompanies this distribution.  The full text of the license may be found at
  http://opensource.org/licenses/bsd-license.php

  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

  Module Name:    FrameworkPei.h

**/

#ifndef _FRAMEWORK_PEI_H_
#define _FRAMEWORK_PEI_H_

#include <PiPei.h>

typedef struct {
  UINTN                   BootFirmwareVolume;
  UINTN                   SizeOfCacheAsRam;
  EFI_PEI_PPI_DESCRIPTOR  *DispatchTable;
} EFI_PEI_STARTUP_DESCRIPTOR;

#include <Common/FrameworkFirmwareFileSystem.h>
#include <Common/FrameworkHob.h>
#include <Common/FrameworkLegacy16.h>
#include <Common/DataHubRecords.h>
#include <Common/FrameworkStatusCode.h>
#include <Common/FrameworkStatusCodeDataTypeId.h>

#endif
