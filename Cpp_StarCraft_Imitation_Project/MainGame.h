#pragma once
class CMainGame
{
private :


	CCpp_StarCraft_Imitation_ProjectDoc* pDoc;
public:
	void Initialize();
	void Progress();
	void Render(CDC* pDC);
	void Destory();


	static CMainGame* getInstance();
public:
	CMainGame(void);
	~CMainGame(void);
};

