
// MFC_���Ʊ�ҵ���.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMFC_���Ʊ�ҵ���App: 
// �йش����ʵ�֣������ MFC_���Ʊ�ҵ���.cpp
//

class CMFC_���Ʊ�ҵ���App : public CWinApp
{
public:
	CMFC_���Ʊ�ҵ���App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMFC_���Ʊ�ҵ���App theApp;
