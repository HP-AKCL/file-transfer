
// FileTransfers.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CFileTransfersApp: 
// �йش����ʵ�֣������ FileTransfers.cpp
//

class CFileTransfersApp : public CWinApp
{
public:
	CFileTransfersApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CFileTransfersApp theApp;