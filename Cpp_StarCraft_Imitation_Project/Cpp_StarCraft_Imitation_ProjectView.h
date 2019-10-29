
// Cpp_StarCraft_Imitation_ProjectView.h : CCpp_StarCraft_Imitation_ProjectView 클래스의 인터페이스
//

#pragma once


class CCpp_StarCraft_Imitation_ProjectView : public CView
{
private:
	CCpp_StarCraft_Imitation_ProjectDoc* pDoc;
protected: // serialization에서만 만들어집니다.
	CCpp_StarCraft_Imitation_ProjectView();
	DECLARE_DYNCREATE(CCpp_StarCraft_Imitation_ProjectView)

// 특성입니다.
public:
	CCpp_StarCraft_Imitation_ProjectDoc* GetDocument() const;

// 작업입니다.
public:

// 재정의입니다.
public:
	virtual void OnDraw(CDC* pDC);  // 이 뷰를 그리기 위해 재정의되었습니다.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 구현입니다.
public:
	virtual ~CCpp_StarCraft_Imitation_ProjectView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnKeyUp(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnDestroy();
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // Cpp_StarCraft_Imitation_ProjectView.cpp의 디버그 버전
inline CCpp_StarCraft_Imitation_ProjectDoc* CCpp_StarCraft_Imitation_ProjectView::GetDocument() const
   { return reinterpret_cast<CCpp_StarCraft_Imitation_ProjectDoc*>(m_pDocument); }
#endif

