//{{NodeBuilder Code Wizard Start <CodeWizard Timestamp>
// Run on Thu Aug 22 10:10:42 2013, version 4.01.07
//
//}}NodeBuilder Code Wizard End
//{{NodeBuilder Code Wizard Start <CodeWizard Template>
//// <Template Revision="3"/>
//}}NodeBuilder Code Wizard End

//////////////////////////////////////////////////////////////////////////////
// File: demo.H
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
// Written By:
//
// Description:
//
// This file contains global type and macro definitions and declarations used
// by the CodeWizard application framework.
//
//////////////////////////////////////////////////////////////////////////////

#ifndef _demo_H_
#define _demo_H_

//
// Configuration parameters storage.
// Use the CP_STORAGE and CP_CONST_STORAGE macro to define the storage of
// configuration property files. Note the CP template file is always 'const'
// and will be linked into the CP_CONST_STORAGE segment.
//
#define CP_STORAGE           far offchip eeprom
#define CP_CONST_STORAGE     far offchip eeprom

//
//{{NodeBuilder Code Wizard Start
// The NodeBuilder Code Wizard will add and remove code here.
// DO NOT EDIT the NodeBuilder Code Wizard generated code in these blocks
// between {{NodeBuilder Code Wizard Start and }}NodeBuilder Code Wizard End

// <CP Access>
#define _USE_NO_CPARAMS_ACCESS
//
//<Node Description String>
//
//<External Name>
#define USE_EXTERNAL_NAME
//
//<Fblock Counts>
#define NodeObject_FBLOCK_COUNT 	1u
//
//<Total Fblock Count>
#define TOTAL_FBLOCK_COUNT NodeObject_FBLOCK_COUNT
//
//<Enable Changeable NV>
//
//<File List>
// Implements                  Filename
// NB Device Template:         demo.nc
//                             demo.h
// Common Functions:           Z:\shared\workspace\lonworks\demo\demo\common.h
//                             Z:\shared\workspace\lonworks\demo\demo\common.nc
//                             Z:\shared\workspace\lonworks\demo\demo\Filesys.h
// Node Object:	               Z:\shared\workspace\lonworks\demo\demo\NodeObject.nc
//                             Z:\shared\workspace\lonworks\demo\demo\NodeObject.h
//
//}}NodeBuilder Code Wizard End

//
// The template file, the value file, and the constant value file
// are always supported by the CodeWizard-generated file directory.
// Adjust the NUM_FILES macro to support additional, user-defined, files.
// Adding user-defined files also requires that you update the file
// directory structure accordingly (see demo.nc).
//
#define NUM_FILES 3

//
// CodeWizard primarily generates Neuron C source code for use with the
// Neuron C Development tools (Echelon NodeBuilder or Mini EVK). However,
// application code generated by CodeWizard can also be used as a model
// file with the Echelon LonTalk Interface Developer (LID) utility, thereby
// defining the interoperable interface of a LonWorks device created with
// the LID utility, such as ShortStack, FTXL, or i.Lon Smart Server.
//
// When using CodeWizard-generated source with LID, relevant code will be
// automatically extracted (network variable definitions, etc), and not
// applicable code will be ignored (such as executable Neuron C code).
// Some code constructs could lead to confusion in the LID use-case, and
// are disallowed, therefore.
//
// The _MODEL_FILE macro, which is automatically pre-defined by the LID
// utility, can be used to conditionally skip code statements that are
// unacceptable to LID.

#ifndef _MODEL_FILE

    // Code Wizard automatically generates an empty framework to support
    // changeable type network variables, including an empty framework for
    // the get_nv_length_override system callback function.
    // This callback must be enabled with the system_image_extensions
    // compiler directive.
    // See your Neuron C documentation for important details about changeable
    // type network variables.

#   ifdef _HAS_CHANGEABLE_NV
#       pragma system_image_extensions nv_length_override
#       pragma unknown_system_image_extension_isa_warning
#   endif    // _HAS_CHANGEABLE_NV

    // Code Wizard automatically calculates a suggested number of alias
    // table entries, which is larger than zero and a function of the total
    // number of network variables being declared.
    // Remove the "{{NodeBuilder Code Wizard Start <Alias Entries>" and
    // "}}NodeBuilder Code Wizard End" tags in the lines following this
    // comment to disable that automatic calculation. Leave the related
    // compiler directive (pragma) in the same place, and edit the parameter
    // to that directive (the requested number of alias table entries)
    // to allocate a different number of alias table entries.
    // Please note that a number of alias table entries MUST be given.
    // The number can be zero, resulting in no support for LonWorks network
    // variable aliases. It is highly recommended to support aliases,
    // resources permitting, due to the benefits when incorporating the device
    // into a network.

//{{NodeBuilder Code Wizard Start <Alias Entries>
#pragma num_alias_table_entries 	10
//
//}}NodeBuilder Code Wizard End

    // You may include FTP support for device-specific purpose when creating
    // an application that does not implement configuration properties, or only
    // implements configuration properties as configuration network variables.
    // Note that you must explicitly initialize the file directory in this
    // case (See demo.nc, filesys.nc and filexfer.nc for more).
//#define _INCLUDE_FTP

    // Allocate a maximum-size address table (15 entries). You may reduce the
    // size of the address table as described in the Neuron C documentation,
    // however, for most devices it is best to allocate 15 records, resources
    // permitting.
#   pragma num_addr_table_entries 15
#endif  // _MODEL_FILE

#pragma enable_sd_nv_names

#endif // _demo_H_


