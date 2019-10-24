#pragma once
class CObj
{
protected :
	typedef struct tag_Point{
		int iX;
		int iY;
	}Point;
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


public:
	CObj(void);
	~CObj(void);
};

