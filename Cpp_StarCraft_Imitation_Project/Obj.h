#pragma once
#include "Include.h"
#include <list>
#include <string>
using namespace std;
class CObj
{
public:
	static list<CObj*>* getLiObj() {
		return &li_Obj;
	}
private:
	static list<CObj*> li_Obj;
protected :
	CString sName;
	
	CPoint now_Pos;
	CPoint to_Pos; //이동시 목적지
	int iCreateTime; // 생산시간
	int iAtt; //공격력
	int iDef; //방어력
	int iHp; //체력
	int iMp; //마력
	int iShield; //쉴드(Protoss)
	int iSpeed; //이동속도
	int iPrice; //가격
	int iType; // Unit/Building 종류
	int iAttSpeed; //공격속도 (1000당 1초)
	int iRange; //사정거리
	CObj* att_Unit; //공격시 공격대상
	bool is_Attack;
	//공격중?
	bool is_Move;
	//이동중?
	bool is_Drag;
	//현재 드래그당함?
	bool is_Air;
	//공중?
	bool is_Dead;
	//죽음?

	int iMotion; //모션상태( (0)대기 중, (1)이동 중, (2)공격 중, (3)사망)
	int iWay; //방향(8방향)

public :
	CPoint getPos();
	CString getName();


	bool be_attacked(int _damage);
	int to_attack(CObj _obj);
	bool move(int _x, int _y);
	void to_move(int _x, int _y);
	bool move(CPoint _point);
	void to_move(CPoint _point);
	void show_status();


public:
	CObj(void);
	CObj(CString _name, CPoint _pos);
	~CObj(void);
};

