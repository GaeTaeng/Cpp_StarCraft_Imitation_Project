#pragma once
#include "Include.h"
#include <list>

using namespace std;
class CObj
{
private:
	static list<CObj*> CObjList;
protected :
	char cName[32];
	Point now_Pos;
	Point to_Pos; //�̵��� ������
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
	Point getPos();
	char* getName();


	bool be_attacked(int _damage);
	int to_attack(CObj _obj);
	bool move(int _x, int _y);
	void to_move(int _x, int _y);
	void show_status();
public:
	CObj(void);
	~CObj(void);
};

