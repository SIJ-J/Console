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

	cout << "스킬명(필수) 데미지 크리티컬확률(%) 스킬범위 를 입력하세요.(건너뛰기 음수입력)" << endl;
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

	dCase = Determin(damage, critical, range); // 입력 검사
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
	cout << "스킬명 : " << str << endl;
}

void UseSkill(string str, int dmg)
{
	cout << "스킬명 : " << str << endl;
	cout << "데미지 : " << dmg << endl;
}

void UseSkill(string str, int dmg, int crit)
{
	cout << "스킬명 : " << str << endl;
	cout << "데미지 : " << dmg << endl;
	CritPer(crit);
}

void UseSkill(string str, int dmg, int crit, int range)
{
	
	cout << "스킬명 : " << str << endl;
	cout << "데미지 : " << dmg << endl;
	CritPer(crit);
	cout << "스킬범위 : " << range << endl;
}

void CritPer(int crit)
{
	srand(time(NULL));
	int rNum = rand() % 101;
	//cout << "디버그 : rNum - " << rNum << endl;;
	if (crit >= rNum)
	{
		cout << "크리티컬 공격" << endl;
	}
	else
	{
		cout << "일반공격" << endl;
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
	과제 1. 함수 오버로딩을 활용한 캐릭터 스킬 만들기

	ex)
	스킬이름만 입력받아 사용하는 함수
	스킬이름과 데미지 값을 입력받아 스킬을 사용하는 함수
	스킬이름 , 데미지, 크리티컬 확률
	스킬이름 , 데미지, 크리티컬 확률, 피격범위

*/