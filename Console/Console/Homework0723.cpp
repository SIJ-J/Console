#include <iostream>
#include <random>

using namespace std;

using std::cout;
using std::cin;
using std::endl;

int PlayerInput();


int main()
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(1, 10);

	int comArr[3];
	int playerArr[3];
	int out = 0;
	
	while (out < 3)
	{
		cout << "[" << out + 1 << "번째 게임]" << endl << endl;

		// 초기화
		int ballC = 0;
		int strikeC = 0;
		// 입력
		for (int i = 0; i < 3; i++)			// Computer 3개 뽑기 (예외 처리)
		{
			comArr[i] = dist(gen);
			for (int k = 0 ; k < i; k++)
			{
				if (comArr[i] == comArr[k])
				{
					i--;
				}
			}
		}

		while (strikeC < 3)
		{

			// 초기화
			ballC = 0;
			strikeC = 0;
			for (int i = 0; i < 3; i++)
			{
				cout << i + 1 << "번째 입력 ";
				playerArr[i] = PlayerInput();
			}
			// 비교
			for (int i = 0; i < 3; i++)
			{
				for (int k = 0; k < 3; k++)
				{
					if (i != k && comArr[i] == playerArr[k])
					{
						ballC++;
					}
					else if (i == k && comArr[i] == playerArr[k])
					{
						strikeC++;
					}
					else
					{
						//같은 수 없음
					}
				}
			}
			cout << "[결과]" << endl;
			// 치트 com 값
			for (int i = 0; i < 3; i++)
			{
				cout << comArr[i] << " ";
			}
			cout << endl;
			
			for (int i = 0; i < 3; i++)
			{
				cout << playerArr[i] << " ";
			}
			cout << "	" << strikeC << " strike " << ballC << " Ball" << endl;

		}
		out++;
		cout << "===========================================" << endl;
	}
}

int PlayerInput()
{
	int input;
	
		cout << "(1 ~ 10 사이의 값) : ";
		cin >> input;

		if (1 > input || input > 10)
		{
			do
			{
				cout << "다시입력 하세요 : ";
				cin >> input;
			} while (!(1 <= input && input <= 10));
		}
	return input;
}


/*
	오늘의 과제.
	player vs computer

	1. computer는 임의의 숫자 3개를 뽑는다.
	2. player는 차례대로 숫자 3개를 입력한다.
	3. 비교

	C		5, 3, 1
	입력		1, 2, 3		0 strike 2 ball 자리가 다르고 숫자가 동일하다면 ball,
										자리도 같고 숫자도 동일하면 strike

	종료 조건
	난수발생 범위 1 ~ 10
	1. 유저가 범위 밖의 값 입력시 다시 입력하라고 함(예외처리)
	2. 3strike 이면 out++
	3. 3out 이면 종료
*/