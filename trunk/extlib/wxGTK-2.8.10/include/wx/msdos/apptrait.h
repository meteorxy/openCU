///////////////////////////////////////////////////////////////////////////////
// Name:        wx/msdos/apptrait.h
// Author:      Michael Wetherell
// RCS-ID:      $Id: apptrait.h,v 1.1 2009/06/02 18:24:55 yakhmak Exp $
// Copyright:   (c) 2006 Michael Wetherell
// Licence:     wxWindows licence
///////////////////////////////////////////////////////////////////////////////

#ifndef _WX_MSDOS_APPTRAIT_H_
#define _WX_MSDOS_APPTRAIT_H_

class wxConsoleAppTraits : public wxConsoleAppTraitsBase
{
public:
};

#if wxUSE_GUI

class wxGUIAppTraits : public wxGUIAppTraitsBase
{
public:
    virtual wxPortId GetToolkitVersion(int *majVer, int *minVer) const;
};

#endif // wxUSE_GUI

#endif // _WX_MSDOS_APPTRAIT_H_
