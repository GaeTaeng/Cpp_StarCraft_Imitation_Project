
// Cpp_StarCraft_Imitation_ProjectDoc.cpp : CCpp_StarCraft_Imitation_ProjectDoc Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
#ifndef SHARED_HANDLERS
#include "Cpp_StarCraft_Imitation_Project.h"
#endif

#include "Cpp_StarCraft_Imitation_ProjectDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CCpp_StarCraft_Imitation_ProjectDoc

IMPLEMENT_DYNCREATE(CCpp_StarCraft_Imitation_ProjectDoc, CDocument)

BEGIN_MESSAGE_MAP(CCpp_StarCraft_Imitation_ProjectDoc, CDocument)
END_MESSAGE_MAP()


// CCpp_StarCraft_Imitation_ProjectDoc ����/�Ҹ�

CCpp_StarCraft_Imitation_ProjectDoc::CCpp_StarCraft_Imitation_ProjectDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.
	CObj* TestPlayer = new CObj();
	li_Obj = CObj::getLiObj();
	li_Obj->push_back(TestPlayer);
	li_DragObj.push_back(TestPlayer);
	printf("This DOC initialize !!\n");
}

CCpp_StarCraft_Imitation_ProjectDoc::~CCpp_StarCraft_Imitation_ProjectDoc()
{
}

BOOL CCpp_StarCraft_Imitation_ProjectDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CCpp_StarCraft_Imitation_ProjectDoc serialization

void CCpp_StarCraft_Imitation_ProjectDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.
	}
	else
	{
		// TODO: ���⿡ �ε� �ڵ带 �߰��մϴ�.
	}
}

#ifdef SHARED_HANDLERS

// ����� �׸��� �����մϴ�.
void CCpp_StarCraft_Imitation_ProjectDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// ������ �����͸� �׸����� �� �ڵ带 �����Ͻʽÿ�.
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// �˻� ó���⸦ �����մϴ�.
void CCpp_StarCraft_Imitation_ProjectDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ������ �����Ϳ��� �˻� �������� �����մϴ�.
	// ������ �κ��� ";"�� ���еǾ�� �մϴ�.

	// ��: strSearchContent = _T("point;rectangle;circle;ole object;");
	SetSearchContent(strSearchContent);
}

void CCpp_StarCraft_Imitation_ProjectDoc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = NULL;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != NULL)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// CCpp_StarCraft_Imitation_ProjectDoc ����

#ifdef _DEBUG
void CCpp_StarCraft_Imitation_ProjectDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCpp_StarCraft_Imitation_ProjectDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CCpp_StarCraft_Imitation_ProjectDoc ���
