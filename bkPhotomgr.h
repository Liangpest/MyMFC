
// bkPhotomgr.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CbkPhotomgrApp: 
// �йش����ʵ�֣������ bkPhotomgr.cpp
//

class CbkPhotomgrApp : public CWinApp
{
public:
	CbkPhotomgrApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CbkPhotomgrApp theApp;