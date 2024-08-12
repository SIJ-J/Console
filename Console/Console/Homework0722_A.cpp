#include <iostream>
#include <time.h>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;


namespace Player
{
	int hp;
	int Attack();
	int heal();
}

namespace Orc
{
	int hp;
	int Attack();
}

void main()
{
	srand(time(NULL));

	int nextStage = 0;
	Player::hp = 100;
	Orc::hp = 200;
	
	while (Player::hp > 0)
	{
		switch (nextStage)
		{
		case 0:
			while (Orc::hp > 0 && Player::hp > 0)
			{
				int action;
				int pAttack;
				int pheal;
				int oAttack;
				
				cout << "행동을 취하세요 공격(1), 힐(2) ";
				cin >> action;
				if (action == 1)
				{
					pAttack = Player::Attack();
					cout << "오크에게 " << pAttack << "피해를 주었다!" << endl;
					Orc::hp -= pAttack;
					cout << "오크 체력: " << Orc::hp << endl;
				}
				else
				{
					pheal = Player::heal();
					cout << "체력을 " << pheal << "회복 했다!" << endl;
					Player::hp += pheal;
					cout << "체력 : " << pheal << endl;
				}
				
				oAttack = Orc::Attack();
				cout << "오크로 부터 " << oAttack << "피해를 입었다!" << endl;
				Player::hp -= oAttack;
				cout << "체력 : " << Player::hp << endl;
			}
			
			break;
		case 1:
			break;
		}
		
	}
	
	
	// 네임스페이스
	// 함수
}
namespace Player
{
	int Attack()
	{

		return rand() % 20 + 10;
	}
	int heal() 
	{
		return rand() % 30 + 10;
	}
}
namespace Orc
{
	int Attack()
	{
		return rand() % 15 + 20;
	}
}





/*
과제 1. 복습 과제
	- 지금까지 배운 내용을 복습을 한다.
	- 어떻게 복습을 했는지 구체화 시켜온다.
	- 뭔가를 만들어 오라는 얘기(함수와 연산자가 부족->관련 프로그램 만들어오기)
*/