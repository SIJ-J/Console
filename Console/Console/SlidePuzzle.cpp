#include <iostream>
#include <random>
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;
using namespace std;

enum Setting {Row = 3, Col = 3, Arr = Row * Col};

int arr[Arr];
int slideP[Row][Col];

void ArrReset();
void ArrShuffle();
void SlideReset();
void PrintSlide();
char PlayerInput();
void Move(int input);
bool Test();


random_device rd;
mt19937 gen(rd());
uniform_int_distribution<> dist(0, Arr - 2);


int main()
{
	char input;
	bool check = false;

	ArrReset();		// 1���� �迭 �ʱ�ȭ
	ArrShuffle();	// ����
	SlideReset();	// �����̵���� �ʱ�ȭ
	PrintSlide();	// ���


	while (true)
	{
		input = PlayerInput();	// �÷��̾� �Է�

		Move(input);		// �Է°��� ���� ó��
		PrintSlide();		// ���
		check = Test();		// �������� �˻�
		
		if (check)			// �˻��� true�� ��������
		{
			break;
		}
	}
	cout << "���� �ϼ�!" << endl;

}

void ArrReset()
{
	for (int i = 0; i < Arr; i++)
	{
		arr[i] = i + 1;
		if (i == Arr-1)
		{
			arr[i] = '#';
		}
	}	
}
void ArrShuffle()
{
	for (int i = 0; i < 1000; i++)
	{
		int dest, sour, temp;

		dest = dist(gen);
		sour = dist(gen);

		temp = arr[dest];
		arr[dest] = arr[sour];
		arr[sour] = temp;
	}
}
void SlideReset()
{
	int index = 0;
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col; j++)
		{
			slideP[i][j] = arr[index];
			index++;
		}
	}
}


void PrintSlide()
{
	system("cls");
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col; j++)
		{
			if (slideP[i][j] != '#')
			{
				printf("%d	", slideP[i][j]);
			}
			else
			{
				printf("%c	", slideP[i][j]);
			}
		}
		cout << endl << endl;
	}
}

char PlayerInput()
{
	char input = 0;

	cout << "������ ������ �Է��ϼ���. ����(A), ������(D), ��(W), �Ʒ�(S) ";
	input = _getch();
	
	while (true)
	{
		switch (input)
		{
		case 'A':
		case 'a':
		case 'D':
		case 'd':
		case 'W':
		case 'w':
		case 'S':
		case 's':
			return input;
		default:
			cout << "�ٽ� �Է��ϼ���. ";
			input = _getch();
		}
	}
}

void Move(int input)
{
	int temp;
	bool moveCheck = false;

	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col; j++)
		{
			if (moveCheck)
			{
				break;
			}
			else if (slideP[i][j] == '#')
			{
				switch (input)
				{
				case 'A':
				case 'a':
					if (j - 1 >= 0) {
						temp = slideP[i][j];
						slideP[i][j] = slideP[i][j - 1];
						slideP[i][j - 1] = temp;
					}
					moveCheck = true;
					break;
				case 'D':
				case 'd':
					if (j + 1 < Col) {
						temp = slideP[i][j];
						slideP[i][j] = slideP[i][j + 1];
						slideP[i][j + 1] = temp;
					}
					moveCheck = true;
					break;
				case 'W':
				case 'w':
					if (i - 1 >= 0) {
						temp = slideP[i][j];
						slideP[i][j] = slideP[i - 1][j];
						slideP[i - 1][j] = temp;
					}
					moveCheck = true;
					break;
				case 'S':
				case 's':
					if (i + 1 < Row) {
						temp = slideP[i][j];
						slideP[i][j] = slideP[i + 1][j];
						slideP[i + 1][j] = temp;
					}
					moveCheck = true;
					break;
				}
			}
		}
	}
	
}

bool Test()
{
	int idx = 1;
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col; j++)
		{
			if (slideP[i][j] == idx)
			{
				idx++;
			}
			else if (i == Row - 1 && j == Col - 1)
			{
				// ����
			}
			else
			{
				return false;
			}
		}
	}
	return true;
}
/*
	2. �����̵� ����
	ũ��� ����� (2 x 2�� �ϸ� �ĸ���)
	���������� �� �𼭸��� ���� ��°�����
	ũ�⸦ ����� �ȵ�

*/ 