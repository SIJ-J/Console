#include <iostream>
#include <vector>

using namespace std;

/*
	�� ����ü : struct
	 - �ϳ� �̻��� ������ �׷���� ���ο� �ڷ����� ����

	- ����ü ����
	struct ����ü�� 
	{
		����ü ��ü
	};
	- ����ü ��ü�� ������ �Լ��� ������ �� �ִ�. ( C������ ��� X )
	- ����ü�� ���Ե� �� / �Լ��� �������, ����Լ� �����.
*/

/*
	�� �ڷ��� ������
	 - �ڷ����� ��Ī�� �����ϰ� ���� �ڷ��� �̸� ��� ���

	- typedef type ��Ī (������Ÿ��)
	- using	( C++ 11 ����)
*/
typedef int myInt_t;					// �ڷ��� �����Ǵ� _t�� ������ �� ����
typedef unsigned long long uint64_t;	// ������ �ڷ����� ����ȭ �� ��

using Integer = int;
using StringList = vector<string>;		// <> ���ø�

struct Student
{
	string name;
	int math;
	int english;
	int science;

	float Average() 
	{
		return (math + english + science) / 3.0f;
	}
};

struct Point
{
	int x;
	int y;
	void Print();
};

// �����ڰ� �ִ� ����ü
// <����ü ������>
// ��ȯ�� ���� ����ü �̸��� �Լ��� �����Ͽ� ���

struct Monster
{
	string name;
	int hp;
	int mp;

	// ������ (������ �Լ�)
	Monster()
	{
		name = "����";
		hp = 10;
		mp = 20;
	}

	// �Ű������� �޴� ������
	Monster(string _name, int _hp, int _mp)
	{
		name = _name;
		hp = _hp;
		mp = _mp;
	}
};

struct Family
{
	string father;
	string mother;
	string brother;
	string sister;

	Family()
	{
		father = "��";
		mother = "��";
		brother = "����";
		sister = "�ڸ�";
	}
};

int main()
{
	// ����ü ���� ����
	Point p;
	Family family;
	
	// ����ü ��� �ʱ�ȭ
	p.x = 10;
	p.y = 20;

	// ������ ���ÿ� �ʱ�ȭ
	Point p1 = { 50, 120 };
	
	cout << "����ü p.x�� �� : " << p.x << endl;
	cout << "����ü p.y�� �� : " << p.y << endl;

	p.Print();
	cout << endl << "===========================================" << endl << endl;

	Monster monster;
	Monster dragon = Monster("�巡��", 250, 100);
	Monster slime = Monster("������", 10, 2);

	cout << monster.name << endl;
	cout << monster.hp << endl;
	cout << monster.mp << endl;

	cout << endl << "===========================================" << endl << endl;

	cout << dragon.name << endl;
	cout << dragon.hp << endl;
	cout << dragon.mp << endl;

	cout << endl << "===========================================" << endl << endl;

	cout << slime.name << endl;
	cout << slime.hp << endl;
	cout << slime.mp << endl;

	cout << endl << "===========================================" << endl << endl;

	cout << "father : " << family.father << endl;
	cout << "mother : " << family.mother << endl;
	cout << "brother : " << family.brother << endl;
	cout << "siser : " << family.sister << endl;
}

void Point::Print()
{
	cout << "����Ʈ ����ü ��� �Լ���" << endl;
}

// ���� �غ���
// ����ü�� Ȱ���ؼ� �������踦 ����غ�����.

// "����ü �޸� �е�" ã�ƺ���

/*
	����. ī����� �����
	Ʈ����ī��� 52��

	���� �� ���� ������ ���� ī�尡 ���Դٸ� (���)
	
	- �Ʒ��� ���� �������� ī��� ��ǻ�Ͱ� ���ٰ� ������.

	��7	��8	��k(13)		(����)���� ������� �� �� ���̹����� ���� ���� ������ �̱�	(���þ� * 2)
							 		     �����ϴٸ� ���þ� ����
										 ������ ���ϸ� (���þ� * 2) ����
	
	����) �ѹ� ����� ī��� ������ ��. (������� �ʴ°� ��)
	17�� ������ �ڵ����� ��������. (3���� ī�带 ���ϸ��� �Һ��ϱ⶧���� 52 / 3)
	������ , �ּҺ��ñ�
	���� �������� �ּҺ��ñݾ׺��� ������ �Ļ�

	��
	��
	��
	��

*/