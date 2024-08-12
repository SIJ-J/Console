#include <iostream>
#include <time.h>
#include <conio.h>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void Count();

// �÷��̾� class
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

	//������
	/*Player(const string& name, const int& atk, const int& def, const int& hp)
		: name(name), atk(atk), def(def), hp(hp) {}*/
};

// ���� class
class Monster
{
private:
	string name = "��ũ";
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
	//������
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
		cout << turn++ << "��° �� ����[a]"<< endl;
		cout << p->GetName() << " ���� ü�� : " << p->GetHp() << endl;
		cout << m->GetName() << " ���� ü�� : " << m->GetHp() << endl;

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
				cout << "����[a]�� ��" << endl;
				input = _getch();
			}
		}

		if (p->GetHp() <= 0 || m->GetHp() <= 0)
		{
			break;
		}
	}
	cout << "==================================" << endl;
	cout << p->GetName() << " ���� ü�� : " << p->GetHp() << endl;
	cout << m->GetName() << " ���� ü�� : " << m->GetHp() << endl;
	cout << "���� ����" << endl;

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
	cout << name << " ����" << endl;
	return atk;
}

void Player::Hit(const int& dmg)
{
	if (dmg > def)
	{
		cout << name <<"�� " << dmg - def << "�� ��������" << endl;
		health -= (dmg - def);
	}
	else
	{
		cout << "���ҽ��ϴ�." << endl;
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
	cout << name << " ����" << endl;
	srand(time(NULL));
	return atk - (rand() % 10 + 10);
}

void Monster::Hit(const int& dmg)
{
	if (dmg > def)
	{
		cout << name <<"�� " << dmg - def << "�� ��������" << endl;
		health -= (dmg - def);
	}
	else
	{
		cout << "���ҽ��ϴ�." << endl;
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
	2. ��������
	- �÷��̾�� ���� ������ Ŭ����
	- �⺻������ �Ѵ� ���ݷ�, ����, ü���� ����
	- ��������� ������ private
	- ����Լ����� �翬�� public
	- �������� �����ϳ� ������ ��
*/