
// ����ر�.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// C����ر�App: 
// �йش����ʵ�֣������ ����ر�.cpp
//

class C����ر�App : public CWinApp
{
public:
	C����ر�App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
//	afx_msg void shuoming();
};

extern C����ر�App theApp;