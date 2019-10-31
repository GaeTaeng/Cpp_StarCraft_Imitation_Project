#pragma once
class CMouse
{
	CPoint pos;


	static CMouse* CMouse::getInstance(){
		static CMouse* instance;
		if(instance == 0) instance = new CMouse();
		return instance;
	}



public:
	CMouse(void);
	~CMouse(void);
};

