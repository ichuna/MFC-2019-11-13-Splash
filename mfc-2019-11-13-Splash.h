
// mfc-2019-11-13-Splash.h : mfc-2019-11-13-Splash ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// Cmfc20191113SplashApp:
// �� Ŭ������ ������ ���ؼ��� mfc-2019-11-13-Splash.cpp�� �����Ͻʽÿ�.
//

class Cmfc20191113SplashApp : public CWinAppEx
{
public:
	Cmfc20191113SplashApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cmfc20191113SplashApp theApp;
