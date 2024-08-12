#include <iostream>
#include <time.h>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;

void RulePrint();
int ComSelect();
int PlayerSelect(int gameCount);
int Betting(int min, int money);
int Changes(int bet, int money);
int PlayerWin(int bet);
int PlayerLose(int bet);
int Draw(int bet);
void CountDown();


void main()
{

	srand(time(NULL));

	int gameCount = 1;
	int comNum;
	int playerNum;
	const int minBet = 1000;
	int money = 10000;
	int myBet;
	int gameResult;

	RulePrint();		//�� ����
	while (gameCount < 6 && money >= 1000)
	{
		comNum = ComSelect();	// comNum�� 0 ~ 2 ������ �� ����
		playerNum = PlayerSelect(gameCount);			// �÷��̾� �Է�
		myBet = Betting(minBet, money);					// ����
		money = Changes(myBet, money);					// ���� �� �ܵ�
		CountDown();									// ī��Ʈ �ٿ�

		switch (comNum)	//�����
		{
		case 0:						// com = 0�� ���
			switch (playerNum)		// player = 0 ~ 2
			{
			case 0:
				money += Draw(myBet);		// ����� ��
				break;
			case 1:
				money += PlayerWin(myBet);	// �̰��� ��
				break;
			case 2:
				money -= PlayerLose(myBet);	// ���� ��
				break;
			}
			break;
		case 1:						// com = 1�� ���
			switch (playerNum)
			{
			case 0:
				money -= PlayerLose(myBet);	// ���� ��
				break;
			case 1:
				money += Draw(myBet);		// ����� ��
				break;
			case 2:
				money += PlayerWin(myBet);	// �̰��� ��
				break;
			}
			break;
		case 2:						// com = 2�� ���
			switch (playerNum)
			{
			case 0:
				money += PlayerWin(myBet);	// �̰��� ��
				break;
			case 1:
				money -= PlayerLose(myBet);	// ���� ��
				break;
			case 2:
				money += Draw(myBet);		// ����� ��
				break;
			}
			break;
		}
		cout << "���� ������ : " << money << endl;
		gameCount++;
		cout << endl;
	}
}

void RulePrint()
{
	cout << "���������� ���� �� �����Դϴ�. " << endl << endl;
	cout << "5���� �ϰų� ���� ���� ���� ���� ������ ������ �����մϴ�." << endl;
	cout << "�ʱ� ������ : 10,000�� " << endl;
	cout << "�ּ� ���� : 1,000��" << endl;
	cout << "�¸��� : + ���ñݾ� X3" << endl << "�й�� : - ���ñݾ� X7" << endl << "���� : + ���ñݾ� X5" << endl;
}
int ComSelect()
{
	int randNum = rand() % 3;
	cout << "ġƮ : comNum = " << randNum;
	cout << endl;
	return randNum;
}
int PlayerSelect(int gameCount)
{
	int input;
	cout << "[" << gameCount << "��° ����]" << endl;
	do
	{
		cout << "����(0), ����(1), ��(2) �߿� �����ϼ���. ";
		cin >> input;
	} while (!(0 <= input && input < 3));

	return input;
}
int Betting(const int minmum, int money)
{
	int input;
	do
	{
		cout << "���� ������ : " << money << endl;
		cout << "���� �ݾ��� �Է��ϼ���. ";
		cin >> input;
	} while (!(minmum <= input && input <= money));

	return input;
}
int Changes(int bet, int money)
{
	return money - bet;
}

int PlayerWin(int bet)
{
	cout << "�÷��̾� �¸� +" << bet * 3 << endl;
	return bet * 3;
}
int PlayerLose(int bet)
{
	cout << "�÷��̾� �й� -" << bet * 7 << endl;
	return bet * 6;
}
int Draw(int bet)
{
	cout << "��� +" << bet * 5 << endl;
	return bet * 5;

}
void CountDown()
{
	cout << "Countdown ";
	for (int i = 3; i > 0; i--)
	{
		cout << i << " ";
		Sleep(1000);
	}
	cout << endl;
}


/*
	���� 1. ���� ����

	- ���ݱ��� ��� ������ ������ �Ѵ�.

	- ��� ������ �ߴ��� ��üȭ ���ѿ´�.
	 - ������ ����� ����� ��� (�Լ��� �����ڰ� ���� -> ���� ���α׷� ��������)

	���� 2. ���������� (�ǵ��� ���ǹ� �Ⱦ��� �غ���)

	 - ����ġ���� ����ؼ� �����.

	 - ġƮ ��ɰ� ���� ����� �߰��Ѵ�.
	  - �ʱ� ������ : 10,000��
	  - �ּ� ������ 1,000�� ����

	- 5���� �ϰų� ���� ���� ���� ���� ������ ������ �����Ѵ�.

	- �̱�� �ǵ��� x3�� ��� ���� �ǵ��� x7�� �Ҵ´�.

	- ��� ��� �ǵ��� x5�踦 ��´�.

	- �Լ��� ����غ����� ��õ
	 - ���뿡 ������� �Լ��� ������ 7�� �̻�

	���� ����. �迭
	 - ��Ʈ�� ����´�.
	 - ������ �� ã�ƿ���.

*/