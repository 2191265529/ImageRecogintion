
// ImageRecogintion.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CImageRecogintionApp: 
// �йش����ʵ�֣������ ImageRecogintion.cpp
//

class CImageRecogintionApp : public CWinApp
{
public:
	CImageRecogintionApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()

public:
	
};

extern CImageRecogintionApp theApp;