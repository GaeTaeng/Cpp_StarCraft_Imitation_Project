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
	CPoint to_Pos; //�̵��� ������
	int iCreateTime; // ����ð�
	int iAtt; //���ݷ�
	int iDef; //����
	int iHp; //ü��
	int iMp; //����
	int iShield; //����(Protoss)
	int iSpeed; //�̵��ӵ�
	int iPrice; //����
	int iType; // Unit/Building ����
	int iAttSpeed; //���ݼӵ� (1000�� 1��)
	int iRange; //�����Ÿ�
	CObj* att_Unit; //���ݽ� ���ݴ��
	bool is_Attack;
	//������?
	bool is_Move;
	//�̵���?
	bool is_Drag;
	//���� �巡�״���?
	bool is_Air;
	//����?
	bool is_Dead;
	//����?

	int iMotion; //��ǻ���( (0)��� ��, (1)�̵� ��, (2)���� ��, (3)���)
	int iWay; //����(8����)

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

