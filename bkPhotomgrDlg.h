
// bkPhotomgrDlg.h : 头文件
//

#pragma once
#include "afxcmn.h"

class CMyDataInfo : public CObject
{
	// Construction/Destruction
public:
	CMyDataInfo() {};
	~CMyDataInfo() {};
	// Attributes
public:
	CString m_csColumn1;
	CString m_csColumn2;
	CString m_csColumn3;
	CString m_csColumn4;
	CString m_csImage; // BMP to show

					   // Implementation
};

class CMyDataArray : public CObArray
{
	// Construction/Destruction
public:
	CMyDataArray() {};
	~CMyDataArray() {
		for (int i = 0; i < GetSize(); ++i)
			delete GetAt(i);
		RemoveAll();
	};

	// Attributes
public:
};

// CbkPhotomgrDlg 对话框
class CbkPhotomgrDlg : public CDialogEx
{
// 构造
public:
	CbkPhotomgrDlg(CWnd* pParent = NULL);	// 标准构造函数
	~CbkPhotomgrDlg() { m_imageList.DeleteImageList(); };
// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_BKPHOTOMGR_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;
	CImageList	m_imageList;
	void InsertItems();
	int m_nItems;
	CMyDataArray m_MyDataArray;
	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void GetDispInfo(NMHDR *pNMHDR, LRESULT *pResult);
	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_cList;
};
