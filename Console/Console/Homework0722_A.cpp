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
				
				cout << "�ൿ�� ���ϼ��� ����(1), ��(2) ";
				cin >> action;
				if (action == 1)
				{
					pAttack = Player::Attack();
					cout << "��ũ���� " << pAttack << "���ظ� �־���!" << endl;
					Orc::hp -= pAttack;
					cout << "��ũ ü��: " << Orc::hp << endl;
				}
				else
				{
					pheal = Player::heal();
					cout << "ü���� " << pheal << "ȸ�� �ߴ�!" << endl;
					Player::hp += pheal;
					cout << "ü�� : " << pheal << endl;
				}
				
				oAttack = Orc::Attack();
				cout << "��ũ�� ���� " << oAttack << "���ظ� �Ծ���!" << endl;
				Player::hp -= oAttack;
				cout << "ü�� : " << Player::hp << endl;
			}
			
			break;
		case 1:
			break;
		}
		
	}
	
	
	// ���ӽ����̽�
	// �Լ�
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
���� 1. ���� ����
	- ���ݱ��� ��� ������ ������ �Ѵ�.
	- ��� ������ �ߴ��� ��üȭ ���ѿ´�.
	- ������ ����� ����� ���(�Լ��� �����ڰ� ����->���� ���α׷� ��������)
*/