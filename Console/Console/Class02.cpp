#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

/*
	constructor(������)
	 - ��ü�� ������ �� �ڵ����� ȣ��Ǵ� Ư���� ����Լ�
	 - ��ü�� �ʱ�ȭ�� ����ϰ� Ŭ������ ������ �̸��� ������ ��ȯ��X
	 - �����ڴ� �⺻������, �Ű������� �ִ� ������, ���������...

	������ ��� �ʱ�ȭ����Ʈ
	 - ������ �Ű����� �ڿ� ���Եǰ� :���� ������ ���� �ʱ�ȭ �� �� ������ ��ǥ�� �����Ͽ� ����
	 - ��������� �����ǰ� ���߿� ���� �����ϴ°� ���� ȿ������
	 - ���(const) �������, ����(&) ��������� �ݵ�� �̳༮�� ���� �ʱ�ȭ �ؾ���.
*/
class Monster
{
public:
	string name;
	int Atk;
	int Def;
	const int num;
	int& score;

	// ������ ��� �ʱ�ȭ����Ʈ
	Monster(const string& monsterName, int monsterAtk,int monsterDef, int num, int& score)
		: name(monsterName), Atk(monsterAtk), Def(monsterDef), num(num) , score(score)	// �������� ���鿡�� ȿ������
	{
		// ��Ͼȿ��� �ʱ�ȭ �� �ʿ䰡 ����
	}
};


class Player
{
public:
	string name;
	int mAtk;
	int mDef;
	//const int a;
	//int& b;

	Player()
	{
		name = "����";
		mAtk = 10;
		mDef = 20;
	}
	// �Ű������� �ִ� ������
	Player(const string& playerName, int playerAtk, int playerDef)
	{
		name = playerName;
		mAtk = playerAtk;
		mDef = playerDef;
	}

	void PrintInfo()const; // ����Լ��� ��������� ���¸� �������� ���ϰ� const����
};

int main()
{
	Player* player = new Player();
	player->PrintInfo();

	Player* player1 = new Player("ī����", 20, 50);
	player1->PrintInfo();
	
	delete player;
	player = nullptr;
	delete player1;
	player1 = nullptr;
}

void Player::PrintInfo() const
{
	cout << "Player �̸� : " << name << endl;
	cout << "���·� : " << mAtk << endl;
	cout << "���� : " << mDef << endl;
}