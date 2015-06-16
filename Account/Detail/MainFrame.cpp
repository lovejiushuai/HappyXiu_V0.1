// MainFrame.cpp : implementation file
//

#include "stdafx.h"
#include "Detail.h"
#include "MainFrame.h"
#include "DetailDlg.h"
#include "Detail.h"


// CMainFrame

IMPLEMENT_DYNCREATE(CMainFrame, CFrameWnd)

CMainFrame::CMainFrame()
{
#ifndef _WIN32_WCE
	EnableActiveAccessibility();
#endif

}

CMainFrame::~CMainFrame()
{
}


BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
	ON_WM_CREATE()
END_MESSAGE_MAP()


// CMainFrame message handlers



int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  Add your specialized creation code here

	return 0;
}
