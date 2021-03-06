//{{NodeBuilder Code Wizard Start <CodeWizard Timestamp>
// Run on Mon Oct 07 10:18:26 2013, version 4.01.07
//
//}}NodeBuilder Code Wizard End
//{{NodeBuilder Code Wizard Start <CodeWizard Template>
//// <Template Revision="3"/>
//}}NodeBuilder Code Wizard End

//////////////////////////////////////////////////////////////////////////////
// File: Common.h
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
// Description: Common typedefs, macros, constants, and utility function
// prototypes.
//
//////////////////////////////////////////////////////////////////////////////

#ifndef _COMMON_
#define _COMMON_

//
// Import definitions for the generic CodeWizard application framework
// and the file system driver used by the LonWorks FTP server.
//
#include "CodeWizard.h"
#include "Filesys.h"

//
// from common.nc:
//
extern void executeOnEachFblock(unsigned uStartIndex, const TFblock_command cmd);

// If you use FTP to access configuration property files, _INCLUDE_FTP
// must be defined
#ifdef _USE_FTP_CPARAMS_ACCESS
    #ifndef _INCLUDE_FTP
        #define _INCLUDE_FTP
    #endif
#endif

#ifdef _INCLUDE_FTP
    #include "fileXfer.h"
#endif

#endif  // _COMMON_
