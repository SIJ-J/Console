#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

/*
	constructor(생성자)
	 - 객체가 생성될 때 자동으로 호출되는 특별한 멤버함수
	 - 객체의 초기화를 담당하고 클래스와 동일한 이름을 가지며 반환형X
	 - 생성자는 기본생성자, 매개변수가 있는 생성자, 복사생성자...

	생성자 멤버 초기화리스트
	 - 생성자 매개변수 뒤에 삽입되고 :으로 시작한 다음 초기화 할 각 변수를 쉼표로 구분하여 나열
	 - 멤버변수가 생성되고 나중에 값을 변경하는것 보다 효율적임
	 - 상수(const) 멤버변수, 참조(&) 멤버변수는 반드시 이녀석을 통해 초기화 해야함.
*/
class Monster
{
public:
	string name;
	int Atk;
	int Def;
	const int num;
	int& score;

	// 생성자 멤버 초기화리스트
	Monster(const string& monsterName, int monsterAtk,int monsterDef, int num, int& score)
		: name(monsterName), Atk(monsterAtk), Def(monsterDef), num(num) , score(score)	// 성능적인 측면에서 효율적임
	{
		// 블록안에서 초기화 할 필요가 없다
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
		name = "윈터";
		mAtk = 10;
		mDef = 20;
	}
	// 매개변수가 있는 생성자
	Player(const string& playerName, int playerAtk, int playerDef)
	{
		name = playerName;
		mAtk = playerAtk;
		mDef = playerDef;
	}

	void PrintInfo()const; // 멤버함수가 멤버변수의 상태를 변경하지 못하게 const붙임
};

int main()
{
	Player* player = new Player();
	player->PrintInfo();

	Player* player1 = new Player("카리나", 20, 50);
	player1->PrintInfo();
	
	delete player;
	player = nullptr;
	delete player1;
	player1 = nullptr;
}

void Player::PrintInfo() const
{
	cout << "Player 이름 : " << name << endl;
	cout << "공력력 : " << mAtk << endl;
	cout << "방어력 : " << mDef << endl;
}