/////////////////////////////////////////////////////////////////////////////
// Name:        helpwin.h
// Purpose:     Includes Windows or OS/2 help
// Author:      Julian Smart
// Modified by:
// Created:
// RCS-ID:      $Id: helpwin.h,v 1.1 2009/06/02 18:24:54 yakhmak Exp $
// Copyright:   (c) Julian Smart
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_HELPWIN_H_BASE_
#define _WX_HELPWIN_H_BASE_

#if defined(__WXMSW__)
#include "wx/msw/helpwin.h"
#elif defined(__WXPM__)
#include "wx/os2/helpwin.h"
#endif

#endif
    // _WX_HELPWIN_H_BASE_
