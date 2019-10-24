#include "stdafx.h"
#include "Obj.h"


CObj::CObj(void)
{
	cName[0] = '\0';
	now_Pos.iX = 10;
	now_Pos.iY = 10;
	to_Pos.iX = -1;
	to_Pos.iY = -1;

	iCreateTime = iAtt = iDef = iHp = iMp = iShield = iSpeed = iPrice = iType = iAttSpeed = iRange = -1;
	att_Unit = NULL;
	is_Attack = is_Move = is_Drag = is_Air = is_Dead = false;


	iMotion = iWay = 0;
}

Point CObj::getPos(){
	return now_Pos;
}

//Player UI측에 이름 뛰우는 용도
char* CObj::getName(){
	return cName;
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
void CObj::to_move(int _x, int _y){
	//공중이냐 아니냐에따라서 달라져야한다.
}
void CObj::show_status(){
	printf("Name :: %s / X :: %d, Y :: %d", cName, now_Pos.iX, now_Pos.iY);
}

CObj::~CObj(void)
{
	free(att_Unit);

}
