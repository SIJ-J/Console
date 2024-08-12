#include <iostream>
#include <time.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;


void UseSkill(string str);
void UseSkill(string str, int dmg);
void UseSkill(string str, int dmg ,int crit);
void UseSkill(string str, int dmg ,int crit, int range);
void CritPer(int crit);
int Determin(int dmg, int crit, int range);
void Line();


int main()
{
	string skill = "swing";
	int damage = 10;
	int critical = 50;
	int range = 100;
	int dCase;

	cout << "��ų��(�ʼ�) ������ ũ��Ƽ��Ȯ��(%) ��ų���� �� �Է��ϼ���.(�ǳʶٱ� �����Է�)" << endl;
	cin >> skill >> damage >> critical >> range;
	
	// 1.
	/*
	UseSkill(skill);
	Line();
	UseSkill(skill, damage);
	Line();
	UseSkill(skill, damage, critical);
	Line();
	UseSkill(skill, damage, critical, range);
	*/

	// 2.
	/*
	if (damage)
	{
		if (critical)
		{
			if (range)
			{
				UseSkill(skill, damage, critical, range);
			}
			else
			{
				UseSkill(skill, damage, critical);
			}
		}
		else
		{
			UseSkill(skill, damage);
		}
	}
	else
	{
		UseSkill(skill);
	}
	Line();
	*/

	//3.

	dCase = Determin(damage, critical, range); // �Է� �˻�
	//cout << "dmg " << damage << " crit :" << critical << " range : " << range << endl;
	switch (dCase)
	{
	case 1:
		UseSkill(skill);
		break;
	case 2:
		UseSkill(skill, damage);
		break;
	case 3:
		UseSkill(skill, damage, critical);
		break;
	case 4:
		UseSkill(skill, damage, critical, range);
		break;
	}
}

void UseSkill(string str)
{
	cout << "��ų�� : " << str << endl;
}

void UseSkill(string str, int dmg)
{
	cout << "��ų�� : " << str << endl;
	cout << "������ : " << dmg << endl;
}

void UseSkill(string str, int dmg, int crit)
{
	cout << "��ų�� : " << str << endl;
	cout << "������ : " << dmg << endl;
	CritPer(crit);
}

void UseSkill(string str, int dmg, int crit, int range)
{
	
	cout << "��ų�� : " << str << endl;
	cout << "������ : " << dmg << endl;
	CritPer(crit);
	cout << "��ų���� : " << range << endl;
}

void CritPer(int crit)
{
	srand(time(NULL));
	int rNum = rand() % 101;
	//cout << "����� : rNum - " << rNum << endl;;
	if (crit >= rNum)
	{
		cout << "ũ��Ƽ�� ����" << endl;
	}
	else
	{
		cout << "�Ϲݰ���" << endl;
	}
}

int Determin(int dmg, int crit, int range)
{
	if (dmg >= 0)
	{
		if (crit >= 0)
		{
			if (range >= 0)
			{
				return 4;
			}
			else
			{
				return 3;
			}
		}
		else
		{
			return 2;
		}
	}
	else
	{
		return 1;
	}
}

void Line()
{
	cout << "==============================================" << endl;
}

/*
	���� 1. �Լ� �����ε��� Ȱ���� ĳ���� ��ų �����

	ex)
	��ų�̸��� �Է¹޾� ����ϴ� �Լ�
	��ų�̸��� ������ ���� �Է¹޾� ��ų�� ����ϴ� �Լ�
	��ų�̸� , ������, ũ��Ƽ�� Ȯ��
	��ų�̸� , ������, ũ��Ƽ�� Ȯ��, �ǰݹ���

*/