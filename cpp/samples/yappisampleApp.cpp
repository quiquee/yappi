//---------------------------------------------------------------------------
//
// Name:        yappisampleApp.cpp
// Author:      Todsawat Thongsuk
// Created:     $Id: yappisampleApp.cpp 37 2006-06-03 02:22:37Z todsawat $
// Description: This sample is programmed on wxDev-C++, Microsoft Windows
//
//---------------------------------------------------------------------------

#include "yappisampleApp.h"
#include "yappisample.h"

IMPLEMENT_APP(yappiSampleApp)

bool yappiSampleApp::OnInit()
{
    yappiSample* frame = new yappiSample(NULL);
    SetTopWindow(frame);
    frame->Show(true);		
    return true;
}
 
int yappiSampleApp::OnExit()
{
	return 0;
}
