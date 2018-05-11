/*++

Copyright (c) 2003, Microsoft Corporation

Module Name:

    precomp.h

Abstract:

    This file precompiled header file.

Author:

Revision History:

Notes:

--*/

#define _OLEAUT32_
#include <windows.h>
#include <ole2.h>

#include <atlbase.h>        // ATL base

extern "C"
{
    #include <winuser.h>
    #include "uxtheme.h"

    #include <stdlib.h>
    #include <string.h>
    #include <stdio.h>
    #include <limits.h>

    #include <ime.h>
    #include <strsafe.h>
    #include <intsafe.h>
}

#include <msctf.h>          // Cicero header
#include <tsattrs.h>        // ITextStore standard attributes

// WIL
#include <new>
#include <wil/Common.h>
#include <wil/Result.h>
#include <wil/resource.h>
#include <wil/wistd_memory.h>

extern "C"
{
    #include "..\inc\contsf.h"
    #include "globals.h"
}

#include "TfCtxtComp.h"
#include "ConsoleTSF.h"

// This includes support libraries from the CRT, STL, WIL, and GSL
#include "LibraryIncludes.h"
