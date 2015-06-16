#pragma once


// CMainFrame frame

class CMainFrame : public CFrameWnd
{
	DECLARE_DYNCREATE(CMainFrame)
public:
	CMainFrame();           // protected constructor used by dynamic creation
protected:
	
	virtual ~CMainFrame();

protected:
	DECLARE_MESSAGE_MAP()

public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};


