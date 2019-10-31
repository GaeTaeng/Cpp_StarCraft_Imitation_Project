#include "stdafx.h"


#include "Cpp_StarCraft_Imitation_ProjectDoc.h"

#include "MainGame.h"

#include "Obj.h"
#include "MainFrm.h"

CMainGame::CMainGame(void)
{

}



void CMainGame::Initialize(){

}
void CMainGame::Progress(){

}
void CMainGame::Render(CDC* pDC){
	CMainFrame *pFrame = (CMainFrame*)AfxGetMainWnd();


	CCpp_StarCraft_Imitation_ProjectDoc* pDoc = (CCpp_StarCraft_Imitation_ProjectDoc*)pFrame->GetActiveDocument();




	//OBJµé Render

	for(list<CObj*>::iterator iter = pDoc->li_Obj.begin(); iter != pDoc->li_Obj.end(); ++iter) {
		pDC->Ellipse((*iter)->getPos().x-10, (*iter)->getPos().y-10, (*iter)->getPos().x+10, (*iter)->getPos().y+10 );
		pDC->TextOutW((*iter)->getPos().x-10, (*iter)->getPos().y+10, ((*iter)->getName()));
	}


}
void CMainGame::Destory(){

}
CMainGame* CMainGame::getInstance(){

	static CMainGame* instance;
	if(instance == 0) instance = new CMainGame();
	return instance;
}

CMainGame::~CMainGame(void)
{
}
