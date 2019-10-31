#include "stdafx.h"
#include "Obj.h"


CObj::CObj(void)
{
	sName = "None";
	now_Pos.x = -1;
	now_Pos.y = -1;
	to_Pos.x = -1;
	to_Pos.y = -1;

	iCreateTime = iAtt = iDef = iHp = iMp = iShield = iSpeed = iPrice = iType = iAttSpeed = iRange = -1;
	att_Unit = NULL;
	is_Attack = is_Move = is_Drag = is_Air = is_Dead = false;


	iMotion = iWay = 0;
}
CObj::CObj(int _type, CPoint _pos)
{
	CObj();
	sName = sNameArray[_type];
	now_Pos = _pos;
	
}


CObj::CObj(int _type, int _x, int _y)
{
	CObj();
	sName = sNameArray[_type];
	now_Pos.x = _x;
	now_Pos.y = _y;
	
}

CPoint CObj::getPos(){
	return now_Pos;
}

//Player UI측에 이름 뛰우는 용도
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
	now_Pos.x += _x;
	now_Pos.y += _y;

	return true;
}
bool CObj::move(CPoint _point){
	now_Pos.x += _point.x;
	now_Pos.y += _point.y;
	return true;
}


void CObj::to_move(int _x, int _y){
	//공중이냐 아니냐에따라서 달라져야한다.
}
void CObj::to_move(CPoint _point){
	//공중이냐 아니냐에따라서 달라져야한다.


	//임시
	now_Pos = _point;
}



void CObj::show_status(){
	printf("Name :: %s / X :: %d, Y :: %d", sName, now_Pos.x, now_Pos.y);
}

CObj::~CObj(void)
{
	free(att_Unit);

}
