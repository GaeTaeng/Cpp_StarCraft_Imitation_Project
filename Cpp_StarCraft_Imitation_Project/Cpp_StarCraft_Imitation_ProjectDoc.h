
// Cpp_StarCraft_Imitation_ProjectDoc.h : CCpp_StarCraft_Imitation_ProjectDoc Ŭ������ �������̽�
//


#pragma once
#include "Obj.h"
#include <list>

using namespace std;
class CCpp_StarCraft_Imitation_ProjectDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CCpp_StarCraft_Imitation_ProjectDoc();
	DECLARE_DYNCREATE(CCpp_StarCraft_Imitation_ProjectDoc)

// Ư���Դϴ�.
public:
	list<CObj*> li_Obj;
	list<CObj*> li_DragObj;

// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// �����Դϴ�.
public:
	virtual ~CCpp_StarCraft_Imitation_ProjectDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// �˻� ó���⿡ ���� �˻� �������� �����ϴ� ����� �Լ�
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
