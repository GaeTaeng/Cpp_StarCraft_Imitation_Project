
// Cpp_StarCraft_Imitation_ProjectView.cpp : CCpp_StarCraft_Imitation_ProjectView 클래스의 구현
//

#include "stdafx.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
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

// CCpp_StarCraft_Imitation_ProjectView 생성/소멸

CCpp_StarCraft_Imitation_ProjectView::CCpp_StarCraft_Imitation_ProjectView()
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

CCpp_StarCraft_Imitation_ProjectView::~CCpp_StarCraft_Imitation_ProjectView()
{
}

BOOL CCpp_StarCraft_Imitation_ProjectView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// CCpp_StarCraft_Imitation_ProjectView 그리기

void CCpp_StarCraft_Imitation_ProjectView::OnDraw(CDC* /*pDC*/)
{
	CCpp_StarCraft_Imitation_ProjectDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
}


// CCpp_StarCraft_Imitation_ProjectView 진단

#ifdef _DEBUG
void CCpp_StarCraft_Imitation_ProjectView::AssertValid() const
{
	CView::AssertValid();
}

void CCpp_StarCraft_Imitation_ProjectView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCpp_StarCraft_Imitation_ProjectDoc* CCpp_StarCraft_Imitation_ProjectView::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCpp_StarCraft_Imitation_ProjectDoc)));
	return (CCpp_StarCraft_Imitation_ProjectDoc*)m_pDocument;
}
#endif //_DEBUG


// CCpp_StarCraft_Imitation_ProjectView 메시지 처리기


int CCpp_StarCraft_Imitation_ProjectView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;
	// TODO:  여기에 특수화된 작성 코드를 추가합니다.

	return 0;
}


void CCpp_StarCraft_Imitation_ProjectView::OnDestroy()
{
	CView::OnDestroy();

	// TODO: 여기에 메시지 처리기 코드를 추가합니다.
}

void CCpp_StarCraft_Imitation_ProjectView::OnKeyUp(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	if(nChar == VK_ESCAPE) {
		DestroyWindow();
	}
	CView::OnKeyUp(nChar, nRepCnt, nFlags);
}
