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

	RulePrint();		//룰 설명
	while (gameCount < 6 && money >= 1000)
	{
		comNum = ComSelect();	// comNum에 0 ~ 2 사이의 값 저장
		playerNum = PlayerSelect(gameCount);			// 플레이어 입력
		myBet = Betting(minBet, money);					// 베팅
		money = Changes(myBet, money);					// 베팅 후 잔돈
		CountDown();									// 카운트 다운

		switch (comNum)	//결과값
		{
		case 0:						// com = 0인 경우
			switch (playerNum)		// player = 0 ~ 2
			{
			case 0:
				money += Draw(myBet);		// 비겼을 때
				break;
			case 1:
				money += PlayerWin(myBet);	// 이겼을 때
				break;
			case 2:
				money -= PlayerLose(myBet);	// 졌을 때
				break;
			}
			break;
		case 1:						// com = 1인 경우
			switch (playerNum)
			{
			case 0:
				money -= PlayerLose(myBet);	// 졌을 때
				break;
			case 1:
				money += Draw(myBet);		// 비겼을 때
				break;
			case 2:
				money += PlayerWin(myBet);	// 이겼을 때
				break;
			}
			break;
		case 2:						// com = 2인 경우
			switch (playerNum)
			{
			case 0:
				money += PlayerWin(myBet);	// 이겼을 때
				break;
			case 1:
				money -= PlayerLose(myBet);	// 졌을 때
				break;
			case 2:
				money += Draw(myBet);		// 비겼을 때
				break;
			}
			break;
		}
		cout << "현재 소지금 : " << money << endl;
		gameCount++;
		cout << endl;
	}
}

void RulePrint()
{
	cout << "가위바위보 게임 룰 설명입니다. " << endl << endl;
	cout << "5판을 하거나 내가 가진 돈을 전부 잃으면 게임을 종료합니다." << endl;
	cout << "초기 소지금 : 10,000원 " << endl;
	cout << "최소 배팅 : 1,000원" << endl;
	cout << "승리시 : + 베팅금액 X3" << endl << "패배시 : - 베팅금액 X7" << endl << "비길시 : + 베팅금액 X5" << endl;
}
int ComSelect()
{
	int randNum = rand() % 3;
	cout << "치트 : comNum = " << randNum;
	cout << endl;
	return randNum;
}
int PlayerSelect(int gameCount)
{
	int input;
	cout << "[" << gameCount << "번째 게임]" << endl;
	do
	{
		cout << "가위(0), 바위(1), 보(2) 중에 선택하세요. ";
		cin >> input;
	} while (!(0 <= input && input < 3));

	return input;
}
int Betting(const int minmum, int money)
{
	int input;
	do
	{
		cout << "현재 소지금 : " << money << endl;
		cout << "베팅 금액을 입력하세요. ";
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
	cout << "플레이어 승리 +" << bet * 3 << endl;
	return bet * 3;
}
int PlayerLose(int bet)
{
	cout << "플레이어 패배 -" << bet * 7 << endl;
	return bet * 6;
}
int Draw(int bet)
{
	cout << "비김 +" << bet * 5 << endl;
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
	과제 1. 복습 과제

	- 지금까지 배운 내용을 복습을 한다.

	- 어떻게 복습을 했는지 구체화 시켜온다.
	 - 뭔가를 만들어 오라는 얘기 (함수와 연산자가 부족 -> 관련 프로그램 만들어오기)

	과제 2. 가위바위보 (되도록 조건문 안쓰고 해보기)

	 - 스위치문을 사용해서 만든다.

	 - 치트 기능과 배팅 기능을 추가한다.
	  - 초기 소지금 : 10,000원
	  - 최소 배팅은 1,000원 부터

	- 5판을 하거나 내가 가진 돈을 전부 잃으면 게임을 종료한다.

	- 이기면 판돈에 x3을 얻고 지면 판돈에 x7를 잃는다.

	- 비길 경우 판돈의 x5배를 얻는다.

	- 함수를 사용해볼것을 추천
	 - 내용에 관계없이 함수의 개수는 7개 이상

	한줄 조사. 배열
	 - 노트에 적어온다.
	 - 비유할 것 찾아오기.

*/