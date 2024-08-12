#include <iostream>
#include <time.h>

using std::cout;
using std::cin;
using std::endl;
using namespace std;

int binggo[5][5];		// 전역 배열
int number[25];			// 전역 배열

void NumArrayReset();
void Shuffle();
void BinggoReset();
int CheckSlash1();
int CheckSlash2();
int CheckRow(int k);
int CheckCol(int i);


int main()
{

	int input;
	int rowC, colC, slash1C, slash2C;
	int binggoC = 0;

	NumArrayReset();		// 1차원 배열 초기화
	Shuffle();				// 1차원 배열 셔플 
	BinggoReset();			// 5 x 5 빙고판에 대입

	while (true)
	{
		cout << "체크할 번호 입력 : ";
		cin >> input;

		for (int i = 0; i < 5; i++)		// 0,0 ~ 4,4 까지 돌면서 같은숫자 찾아 바꿔주기
		{
			for (int k = 0; k < 5; k++)
			{
				if (binggo[i][k] == input)
				{
					binggo[i][k] = '#';
				
					// 값 바꿨을때 가로 세로 [중앙에 값 바꿨을땐] 대각선까지 검사 if(count < 4);

					rowC = colC = slash1C = slash2C = 0;

					if (i == k)
					{
						slash1C = CheckSlash1(); // \검사
					}
					if (i + k == 4)
					{
						slash2C = CheckSlash2(); // /검사
					}
					rowC = CheckRow(k); // 세로줄 검사
					colC = CheckCol(i); // 가로줄 검사

					system("cls");
					for (int i = 0; i < 5; i++)		// 0,0 ~ 4,4 출력
					{
						for (int k = 0; k < 5; k++)
						{
							if (binggo[i][k] == '#')
							{
								printf("%c	", binggo[i][k]);
							}
							else
							{
								printf("%d	", binggo[i][k]);
							}
						}
						cout << endl << endl;
					}

					if (rowC == 5)
					{
						binggoC++;
					}
					if (colC == 5)
					{
						binggoC++;
					}
					if (slash1C == 5)
					{
						binggoC++;
					}
					if (slash2C == 5)
					{
						binggoC++;
					}
					if (binggoC >= 3)
					{
						break;
					}
					printf("Debug - R: %d, C: %d, S1: %d, S2: %d B: %d\n", rowC, colC, slash1C, slash2C, binggoC);
				}
			}
			if (binggoC >= 3)
			{
				break;
			}
		}
		if (binggoC >= 3)
		{
			break;
		}
	} // end of while
	cout << "[ 게 임 종 료 ]" << endl << endl;
	
}


void NumArrayReset()
{
	for (int i = 0; i < 25; i++)	// 넣어줄 숫자배열 초기화 0 ~ 24
	{
		number[i] = i + 1;
		//cout << number[i]<< "	";
	}
}

void Shuffle()
{
	srand(time(NULL));

	for (int i = 0; i < 1000; i++)	// 숫자배열 셔플
	{
		int temp;
		int dest = rand() % 25;
		int sour = rand() % 25;

		temp = number[dest];
		number[dest] = number[sour];
		number[sour] = temp;
	}
}

void BinggoReset()
{

	int nIndex = 0;
	for (int i = 0; i < 5; i++)		// 숫자배열로 빙고판 초기화
	{
		for (int k = 0; k < 5; k++)
		{
			binggo[i][k] = number[nIndex];
			cout << binggo[i][k] << "	";
			nIndex++;
		}
		cout << endl << endl;
	}
}

int CheckSlash1()
{
	int count = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i == j && binggo[i][j] == '#')
			{
				count++;
			}
		}
	}
	return count;
}
int CheckSlash2()
{
	int count = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i + j == 4 && binggo[i][j] == '#')
			{
				count++;
			}
		}
	}
	return count;
}
int CheckRow(int k)
{
	int count = 0;
	for (int r = 0; r < 5; r++) // 세로줄 검사
	{
		if (binggo[r][k] == '#')
		{
			count++; //'#' 카운트
		}
	}
	return count;
}
int CheckCol(int i)
{
	int count = 0;
	for (int c = 0; c < 5; c++) // 가로줄 검사
	{
		if (binggo[i][c] == '#')
		{
			count++;
		}
	}
	return count;
}


/*

즐거운 휴가를 보내기 위한 방학특선 과제
- 후딱 끝내고 노는게 좋을것 같아...

1. 빙고게임
5 x 5 빙고판 (랜덤?
ex) 1을 입력하면 1이 위치한곳이 특수문자(*, $ @ 마음대로)로 바뀐다.
1줄 완성하면(빙고 1줄 완성 출력해주기)
종료조건 - 3줄 완성

* 욕심내는 사람들 - 컴퓨터랑 대결형식

*/

// 게임시작
// 입력받은수 배열 비교해서 특수문자로 바꿔주고 한줄빙고 검사 후 3줄 검사?

