
// Cpp_StarCraft_Imitation_ProjectView.h : CCpp_StarCraft_Imitation_ProjectView Ŭ������ �������̽�
//

#pragma once


class CCpp_StarCraft_Imitation_ProjectView : public CView
{
protected: // serialization������ ��������ϴ�.
	CCpp_StarCraft_Imitation_ProjectView();
	DECLARE_DYNCREATE(CCpp_StarCraft_Imitation_ProjectView)

// Ư���Դϴ�.
public:
	CCpp_StarCraft_Imitation_ProjectDoc* GetDocument() const;

// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual void OnDraw(CDC* pDC);  // �� �並 �׸��� ���� �����ǵǾ����ϴ�.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// �����Դϴ�.
public:
	virtual ~CCpp_StarCraft_Imitation_ProjectView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnKeyUp(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnDestroy();
};

#ifndef _DEBUG  // Cpp_StarCraft_Imitation_ProjectView.cpp�� ����� ����
inline CCpp_StarCraft_Imitation_ProjectDoc* CCpp_StarCraft_Imitation_ProjectView::GetDocument() const
   { return reinterpret_cast<CCpp_StarCraft_Imitation_ProjectDoc*>(m_pDocument); }
#endif

