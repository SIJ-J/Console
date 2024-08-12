#include <iostream>
#include <random>

using namespace std;

enum Mark { Spade, Heart, Clover, Diamond };

struct Card
{
	int shape;
	int number;
};

void CardReset();
void CardShuffle();
int PlayerBet(int money);
int Processing(int bet, int i, int k);
void Debug(int i , int k);

Card card[4][13];
const int minBet = 100;
int gameCount = 1;

int main()
{
	int money = 10000;
	int forCount = 0;
	int betting;

	CardReset();
	CardShuffle();

	

	for (int i = 0; i < 4; i++)
	{
		for (int k = 0; k < 13; k++)
		{

			/*
			printf("디버그 : %d%d	%d%d	%d%d\n", 
				card[i][k - 1].shape, card[i][k - 1].number,
				card[i][k].shape, card[i][k].number, 
				card[i][k + 1].shape, card[i][k + 1].number);
			*/
			if (forCount % 3 == 1)
			{
				Debug(i, k);
				betting = PlayerBet(money);
				money -= betting;
				money += Processing(betting, i, k);

				cout << "==================================" << endl;
			}
			forCount++;
			if (money < minBet)
			{
				cout << "=====파산=====" << endl;
				break;
			}
		}
		if (money < minBet)
		{
			break;
		}
	}

}

void CardReset()
{
	for (int i = 0; i < 4; i++)				// 카드 초기화
	{
		for (int k = 0; k < 13; k++)
		{
			if (i == 0)
				card[i][k].shape = Spade;
			else if (i == 1)
				card[i][k].shape = Heart;
			else if (i == 2)
				card[i][k].shape = Clover;
			else
				card[i][k].shape = Diamond;

			card[i][k].number = k + 1;
		}
	}
}

void CardShuffle()
{
	int destR, destC, sourR, sourC, temp;

	for (int i = 0; i < 1000; i++)			// 1000번 셔플
	{
		random_device rd;
		mt19937 gen(rd());
		uniform_int_distribution<> distR(0, 3);
		uniform_int_distribution<> distC(0, 11);

		destR = distR(gen);
		destC = distC(gen);
		sourR = distR(gen);
		sourC = distC(gen);

		// 숫자 
		temp = card[destR][destC].number;
		card[destR][destC].number = card[sourR][sourC].number;
		card[sourR][sourC].number = temp;

		// 모양
		temp = card[destR][destC].shape;
		card[destR][destC].shape = card[sourR][sourC].shape;
		card[sourR][sourC].shape = temp;

		/* 디버그
		for (int i = 0; i < 4; i++)
		{
			for (int k = 0; k < 12; k++)
			{
				cout << card[i][k].shape << ":" << card[i][k].number << " ";
			}
			cout << endl;
		}
		*/
	}
}

int PlayerBet(int money)
{
	int betting;
	cout << gameCount << "번째 게임" << endl;
	cout << "금액을 베팅하세요  (소지금 : " << money << " ) ";
	cin >> betting;
	while (true)
	{
		if (betting < minBet)
		{
			cout << "다시 배팅하세요 (소지금 : "<< money << " ) ";
			cin >> betting;
		}
		else
		{
			break;
		}
	}
	gameCount++;
	return betting;
}

int Processing(int bet, int i , int k)
{
	
	if (card[i][k - 1].number < card[i][k].number && card[i][k].number < card[i][k + 1].number
		|| card[i][k - 1].number > card[i][k].number && card[i][k].number > card[i][k + 1].number)
	{
		// 범위 안
		cout << "Win" << endl;
		return bet * 2;
	}
	else if (card[i][k - 1].number == card[i][k].number || card[i][k].number == card[i][k + 1].number)
	{
		// 앞/뒤 겹친경우
		cout << "Draw" << endl;
		return bet;
	}
	else
	{
		// 범위 밖
		cout << "Lose" << endl;
		return -bet;
	}
}

void Debug(int i, int k)
{
	for (int j = -1; j < 2; j++)
	{
		switch (card[i][k+j].shape)
		{
		case Spade:
			printf("♤ %d	", card[i][k + j].number);
			break;
		case Heart:
			printf("♡ %d	", card[i][k + j].number);
			break;
		case Clover:
			printf("♧ %d	", card[i][k + j].number);
			break;
		case Diamond:
			printf("◇ %d	", card[i][k + j].number);
			break;
		default:
			cout << "오류" << endl;
			break;
		}
	}
	cout << endl;
}


/*
	과제. 카드게임 만들기
	트럼프카드는 52장

	예를 들어서 만약 다음과 같은 카드가 나왔다면 (출력)

	- 아래와 같이 보여지는 카드는 컴퓨터가 낸다고 가정함.

	♧7	♤8	♡k(13)		(자유)문양 상관없이 두 수 사이범위에 들어가는 수를 뽑으면 이김	(베팅액 * 2)
										 동일하다면 베팅액 소진
										 들어오지 못하면 (베팅액 * 2) 차감

	조건) 한번 사용한 카드는 버려야 함. (사용하지 않는것 뿐)
	17판 돌리면 자동으로 끝나야함. (3장의 카드를 한턴마다 소비하기때문에 52 / 3)
	소지금 , 최소베팅금
	남은 소지금이 최소베팅금액보다 작으면 파산

	♤
	♡
	♧
	◇

*/

/*
	07.26 내용
	- 테스트 시험
	 - 쉬움? 하다못해 객관식 문제도 있어
*/


