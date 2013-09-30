//{{NodeBuilder Code Wizard Start <CodeWizard Timestamp>
// Run on Thu Sep 26 09:31:21 2013, version 4.01.07
//
//}}NodeBuilder Code Wizard End
//{{NodeBuilder Code Wizard Start <CodeWizard Template>
//// <Template Revision="3"/>
//}}NodeBuilder Code Wizard End

//////////////////////////////////////////////////////////////////////////////
// File: COMMON.NC
//
//
// Generated by NodeBuilder Code Wizard Version 4.01.07
// Copyright (c) 2001-2009 Echelon Corporation.  All rights reserved.
//                                                                                  
// ECHELON MAKES NO REPRESENTATION, WARRANTY, OR CONDITION OF
// ANY KIND, EXPRESS, IMPLIED, STATUTORY, OR OTHERWISE OR IN
// ANY COMMUNICATION WITH YOU, INCLUDING, BUT NOT LIMITED TO,
// ANY IMPLIED WARRANTIES OF MERCHANTABILITY, SATISFACTORY
// QUALITY, FITNESS FOR ANY PARTICULAR PURPOSE, 
// NONINFRINGEMENT, AND THEIR EQUIVALENTS.
//
//
// Written By: NodeBuilder Code Wizard
//
// Description: Common utility functions. Most utility functions used by the
// Code Wizard application framework are delivered with the CodeWizard.lib
// function library, but some functions, variables and utilities are defined
// here.
//
//////////////////////////////////////////////////////////////////////////////

#include "common.h"

//
// Some status bits are preserved across power-cycle. See CodeWizard.h for the
// declaration of the FBLOCK_PERSISTENT_STATUS_STORAGE macro.
// Note CodeWizard.lib must be re-build if the storage preference is changed.
// See CodeWizard.h for details about the storage classes and dependencies with
// the CodeWizard library.
// Note we apply pragma ignore_notused to this symbol. The variable will in
// fact be used by utility functions linked from CodeWizard.lib.
//
FBLOCK_PERSISTENT_STATUS_STORAGE TPersistentFblockStatus \
    PersistentFblockStatus[(unsigned)TOTAL_FBLOCK_COUNT];
#pragma ignore_notused PersistentFblockStatus

//
// The fblockData[] variable holds non-persistent fblock status information;
// see CodeWizard.h for the declaration of the FBLOCK_STATUS_STORAGE macro.
// Note CodeWizard.lib must be re-build if the storage preference changes.
// See CodeWizard.h for details about the storage classes and dependencies with
// the CodeWizard library.
FBLOCK_STATUS_STORAGE TFblockData fblockData[(unsigned)TOTAL_FBLOCK_COUNT];

//
// executeOnEachFblock()
//
// The executeOnEachFblock() function sends command 'cmd' to the director
// function of each fblock, starting with global fblock index 'uStartIndex.'
// Note the executeOnEachFblock() function retriggers the watchdog timer
// with every 16th director call. Time-consuming director functions may
// need to retrigger the watchdog timer more frequently.
//
void executeOnEachFblock(unsigned index, const TFblock_command cmd) {
    while(index < TOTAL_FBLOCK_COUNT) {
        fblock_director(index++, (int)cmd);
        if (!(index & 0x0F)) {
            // re-trigger the watchdog timer every 16th fblock
            watchdog_update();
        }
    }
}

