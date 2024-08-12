#include <iostream>
#include <time.h>

using std::cout;
using std::cin;
using std::endl;
using namespace std;

int binggo[5][5];		// ���� �迭
int number[25];			// ���� �迭

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

	NumArrayReset();		// 1���� �迭 �ʱ�ȭ
	Shuffle();				// 1���� �迭 ���� 
	BinggoReset();			// 5 x 5 �����ǿ� ����

	while (true)
	{
		cout << "üũ�� ��ȣ �Է� : ";
		cin >> input;

		for (int i = 0; i < 5; i++)		// 0,0 ~ 4,4 ���� ���鼭 �������� ã�� �ٲ��ֱ�
		{
			for (int k = 0; k < 5; k++)
			{
				if (binggo[i][k] == input)
				{
					binggo[i][k] = '#';
				
					// �� �ٲ����� ���� ���� [�߾ӿ� �� �ٲ�����] �밢������ �˻� if(count < 4);

					rowC = colC = slash1C = slash2C = 0;

					if (i == k)
					{
						slash1C = CheckSlash1(); // \�˻�
					}
					if (i + k == 4)
					{
						slash2C = CheckSlash2(); // /�˻�
					}
					rowC = CheckRow(k); // ������ �˻�
					colC = CheckCol(i); // ������ �˻�

					system("cls");
					for (int i = 0; i < 5; i++)		// 0,0 ~ 4,4 ���
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
	cout << "[ �� �� �� �� ]" << endl << endl;
	
}


void NumArrayReset()
{
	for (int i = 0; i < 25; i++)	// �־��� ���ڹ迭 �ʱ�ȭ 0 ~ 24
	{
		number[i] = i + 1;
		//cout << number[i]<< "	";
	}
}

void Shuffle()
{
	srand(time(NULL));

	for (int i = 0; i < 1000; i++)	// ���ڹ迭 ����
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
	for (int i = 0; i < 5; i++)		// ���ڹ迭�� ������ �ʱ�ȭ
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
	for (int r = 0; r < 5; r++) // ������ �˻�
	{
		if (binggo[r][k] == '#')
		{
			count++; //'#' ī��Ʈ
		}
	}
	return count;
}
int CheckCol(int i)
{
	int count = 0;
	for (int c = 0; c < 5; c++) // ������ �˻�
	{
		if (binggo[i][c] == '#')
		{
			count++;
		}
	}
	return count;
}


/*

��ſ� �ް��� ������ ���� ����Ư�� ����
- �ĵ� ������ ��°� ������ ����...

1. �������
5 x 5 ������ (����?
ex) 1�� �Է��ϸ� 1�� ��ġ�Ѱ��� Ư������(*, $ @ �������)�� �ٲ��.
1�� �ϼ��ϸ�(���� 1�� �ϼ� ������ֱ�)
�������� - 3�� �ϼ�

* ��ɳ��� ����� - ��ǻ�Ͷ� �������

*/

// ���ӽ���
// �Է¹����� �迭 ���ؼ� Ư�����ڷ� �ٲ��ְ� ���ٺ��� �˻� �� 3�� �˻�?

