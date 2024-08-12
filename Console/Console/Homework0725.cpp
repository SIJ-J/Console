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
			printf("����� : %d%d	%d%d	%d%d\n", 
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
				cout << "=====�Ļ�=====" << endl;
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
	for (int i = 0; i < 4; i++)				// ī�� �ʱ�ȭ
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

	for (int i = 0; i < 1000; i++)			// 1000�� ����
	{
		random_device rd;
		mt19937 gen(rd());
		uniform_int_distribution<> distR(0, 3);
		uniform_int_distribution<> distC(0, 11);

		destR = distR(gen);
		destC = distC(gen);
		sourR = distR(gen);
		sourC = distC(gen);

		// ���� 
		temp = card[destR][destC].number;
		card[destR][destC].number = card[sourR][sourC].number;
		card[sourR][sourC].number = temp;

		// ���
		temp = card[destR][destC].shape;
		card[destR][destC].shape = card[sourR][sourC].shape;
		card[sourR][sourC].shape = temp;

		/* �����
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
	cout << gameCount << "��° ����" << endl;
	cout << "�ݾ��� �����ϼ���  (������ : " << money << " ) ";
	cin >> betting;
	while (true)
	{
		if (betting < minBet)
		{
			cout << "�ٽ� �����ϼ��� (������ : "<< money << " ) ";
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
		// ���� ��
		cout << "Win" << endl;
		return bet * 2;
	}
	else if (card[i][k - 1].number == card[i][k].number || card[i][k].number == card[i][k + 1].number)
	{
		// ��/�� ��ģ���
		cout << "Draw" << endl;
		return bet;
	}
	else
	{
		// ���� ��
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
			printf("�� %d	", card[i][k + j].number);
			break;
		case Heart:
			printf("�� %d	", card[i][k + j].number);
			break;
		case Clover:
			printf("�� %d	", card[i][k + j].number);
			break;
		case Diamond:
			printf("�� %d	", card[i][k + j].number);
			break;
		default:
			cout << "����" << endl;
			break;
		}
	}
	cout << endl;
}


/*
	����. ī����� �����
	Ʈ����ī��� 52��

	���� �� ���� ������ ���� ī�尡 ���Դٸ� (���)

	- �Ʒ��� ���� �������� ī��� ��ǻ�Ͱ� ���ٰ� ������.

	��7	��8	��k(13)		(����)���� ������� �� �� ���̹����� ���� ���� ������ �̱�	(���þ� * 2)
										 �����ϴٸ� ���þ� ����
										 ������ ���ϸ� (���þ� * 2) ����

	����) �ѹ� ����� ī��� ������ ��. (������� �ʴ°� ��)
	17�� ������ �ڵ����� ��������. (3���� ī�带 ���ϸ��� �Һ��ϱ⶧���� 52 / 3)
	������ , �ּҺ��ñ�
	���� �������� �ּҺ��ñݾ׺��� ������ �Ļ�

	��
	��
	��
	��

*/

/*
	07.26 ����
	- �׽�Ʈ ����
	 - ����? �ϴٸ��� ������ ������ �־�
*/


