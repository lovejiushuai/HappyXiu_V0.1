// DetailDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Detail.h"
#include "DetailDlg.h"
#include "afxdialogex.h"


// CDetailDlg dialog

IMPLEMENT_DYNAMIC(CDetailDlg, CDialog)

CDetailDlg::CDetailDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CDetailDlg::IDD, pParent)
{

}

CDetailDlg::~CDetailDlg()
{
}

void CDetailDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDetailDlg, CDialog)
	ON_WM_CREATE()
END_MESSAGE_MAP()


// CDetailDlg message handlers


int CDetailDlg::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CDialog::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  Add your specialized creation code here

	return 0;
}
