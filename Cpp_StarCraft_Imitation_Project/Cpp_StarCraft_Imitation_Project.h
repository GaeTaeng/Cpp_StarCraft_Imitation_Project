
// Cpp_StarCraft_Imitation_Project.h : Cpp_StarCraft_Imitation_Project ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CCpp_StarCraft_Imitation_ProjectApp:
// �� Ŭ������ ������ ���ؼ��� Cpp_StarCraft_Imitation_Project.cpp�� �����Ͻʽÿ�.
//

class CCpp_StarCraft_Imitation_ProjectApp : public CWinApp
{
public:
	CCpp_StarCraft_Imitation_ProjectApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCpp_StarCraft_Imitation_ProjectApp theApp;
