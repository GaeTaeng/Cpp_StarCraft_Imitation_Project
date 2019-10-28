#include "stdafx.h"
#include "Obj.h"


CObj::CObj(void)
{
	sName = "None";
	now_Pos.x = 10;
	now_Pos.y = 10;
	to_Pos.x = -1;
	to_Pos.y = -1;

	iCreateTime = iAtt = iDef = iHp = iMp = iShield = iSpeed = iPrice = iType = iAttSpeed = iRange = -1;
	att_Unit = NULL;
	is_Attack = is_Move = is_Drag = is_Air = is_Dead = false;


	iMotion = iWay = 0;
}

CPoint CObj::getPos(){
	return now_Pos;
}

//Player UI���� �̸� �ٿ�� �뵵
CString CObj::getName(){
	return sName;
}

bool CObj::be_attacked(int _damage){
	return true;
}
int CObj::to_attack(CObj _obj){
	return iAtt;
}


bool CObj::move(int _x, int _y){
	return true;
}
bool CObj::move(CPoint _point){
	return true;
}


void CObj::to_move(int _x, int _y){
	//�����̳� �ƴϳĿ����� �޶������Ѵ�.
}
void CObj::to_move(CPoint _point){
	//�����̳� �ƴϳĿ����� �޶������Ѵ�.


	//�ӽ�
	now_Pos = _point;
}



void CObj::show_status(){
	printf("Name :: %s / X :: %d, Y :: %d", sName, now_Pos.x, now_Pos.y);
}

CObj::~CObj(void)
{
	free(att_Unit);

}
