
// Cpp_StarCraft_Imitation_ProjectView.cpp : CCpp_StarCraft_Imitation_ProjectView Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
#ifndef SHARED_HANDLERS
#include "Cpp_StarCraft_Imitation_Project.h"
#endif

#include "Cpp_StarCraft_Imitation_ProjectDoc.h"
#include "Cpp_StarCraft_Imitation_ProjectView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCpp_StarCraft_Imitation_ProjectView

IMPLEMENT_DYNCREATE(CCpp_StarCraft_Imitation_ProjectView, CView)

BEGIN_MESSAGE_MAP(CCpp_StarCraft_Imitation_ProjectView, CView)
	ON_WM_CREATE()
	ON_WM_KEYUP()
	ON_WM_DESTROY()
END_MESSAGE_MAP()

// CCpp_StarCraft_Imitation_ProjectView ����/�Ҹ�

CCpp_StarCraft_Imitation_ProjectView::CCpp_StarCraft_Imitation_ProjectView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CCpp_StarCraft_Imitation_ProjectView::~CCpp_StarCraft_Imitation_ProjectView()
{
}

BOOL CCpp_StarCraft_Imitation_ProjectView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CCpp_StarCraft_Imitation_ProjectView �׸���

void CCpp_StarCraft_Imitation_ProjectView::OnDraw(CDC* /*pDC*/)
{
	CCpp_StarCraft_Imitation_ProjectDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CCpp_StarCraft_Imitation_ProjectView ����

#ifdef _DEBUG
void CCpp_StarCraft_Imitation_ProjectView::AssertValid() const
{
	CView::AssertValid();
}

void CCpp_StarCraft_Imitation_ProjectView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCpp_StarCraft_Imitation_ProjectDoc* CCpp_StarCraft_Imitation_ProjectView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCpp_StarCraft_Imitation_ProjectDoc)));
	return (CCpp_StarCraft_Imitation_ProjectDoc*)m_pDocument;
}
#endif //_DEBUG


// CCpp_StarCraft_Imitation_ProjectView �޽��� ó����


int CCpp_StarCraft_Imitation_ProjectView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;
	// TODO:  ���⿡ Ư��ȭ�� �ۼ� �ڵ带 �߰��մϴ�.

	return 0;
}


void CCpp_StarCraft_Imitation_ProjectView::OnDestroy()
{
	CView::OnDestroy();

	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.
}

void CCpp_StarCraft_Imitation_ProjectView::OnKeyUp(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
	if(nChar == VK_ESCAPE) {
		DestroyWindow();
	}
	CView::OnKeyUp(nChar, nRepCnt, nFlags);
}
