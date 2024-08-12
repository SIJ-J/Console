#include <iostream>
#include <time.h>
#include <conio.h>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void Count();

// 플레이어 class
class Player
{
private:
	string name;
	int atk;
	int def;
	int hp;

public:
	string GetName() { return name; }
	void SetName(const string& name) { this->name = name; }
	int GetAtk() { return atk; }
	void SetAtk(const int& atk) { this->atk = atk; }
	int GetDef() { return def; }
	void SetDef(const int& def) { this->def = def; }
	int GetHp() { return hp; }
	void SetHp(const int& hp) { this->hp = hp; }

	//생성자
	/*Player(const string& name, const int& atk, const int& def, const int& hp)
		: name(name), atk(atk), def(def), hp(hp) {}*/
};

// 몬스터 class
class Monster
{
private:
	string name = "오크";
	int atk = 20;
	int def = 10;
	int hp = 100;

public:
	string GetName() { return name; }
	void SetName(const string& name) { this->name = name; }
	int GetAtk() { return atk; }
	void SetAtk(const int& atk) { this->atk = atk; }
	int GetDef() { return def; }
	void SetDef(const int& def) { this->def = def; }
	int GetHp() { return hp; }
	void SetHp(const int& hp) { this->hp = hp; }
	//생성자
	/*Monster(const string& name, const int& atk, const int& def, const int& hp)
		: name(name), atk(atk), def(def), hp(hp) {}*/
};

int main()
{
	Player p;
	Monster m;

	int turn = 1;

	while (true)
	{
		cout << "==================================" << endl;
		cout << turn++ << "번째 턴 공격[a]"<< endl;
		cout << p->GetName() << " 현재 체력 : " << p->GetHp() << endl;
		cout << m->GetName() << " 현재 체력 : " << m->GetHp() << endl;

		int input = _getch();
		
		while (true)
		{
			if (input == 'a' || input == 'A')
			{
				m.SetHp(m.GetHp() - p.GetAtk());
				break;
			}
			else
			{
				cout << "공격[a]만 됨" << endl;
				input = _getch();
			}
		}

		if (p->GetHp() <= 0 || m->GetHp() <= 0)
		{
			break;
		}
	}
	cout << "==================================" << endl;
	cout << p->GetName() << " 현재 체력 : " << p->GetHp() << endl;
	cout << m->GetName() << " 현재 체력 : " << m->GetHp() << endl;
	cout << "게임 종료" << endl;

	delete p, m;
	p = nullptr;
	m = nullptr;
}

int Player::GetHp()
{
	return health;
}

string Player::GetName()
{
	return name;
}

int Player::Attack()
{
	cout << name << " 공격" << endl;
	return atk;
}

void Player::Hit(const int& dmg)
{
	if (dmg > def)
	{
		cout << name <<"가 " << dmg - def << "의 피해입음" << endl;
		health -= (dmg - def);
	}
	else
	{
		cout << "막았습니다." << endl;
	}
}

int Monster::GetHp()
{
	return health;
}

string Monster::GetName()
{
	return name;
}

int Monster::Attack()
{
	cout << name << " 공격" << endl;
	srand(time(NULL));
	return atk - (rand() % 10 + 10);
}

void Monster::Hit(const int& dmg)
{
	if (dmg > def)
	{
		cout << name <<"가 " << dmg - def << "의 피해입음" << endl;
		health -= (dmg - def);
	}
	else
	{
		cout << "막았습니다." << endl;
	}
}

void Count()
{
	for (int i = 0; i < 3; i++)
	{
		cout << ". ";
		Sleep(1000);
	}
	cout << endl;
}
/*
	2. 대전게임
	- 플레이어와 몬스터 각각의 클래스
	- 기본적으로 둘다 공격력, 방어력, 체력이 있음
	- 멤버변수는 무조건 private
	- 멤버함수들은 당연히 public
	- 종료조건 둘중하나 죽으면 끝
*/