#include <iostream>
#include <time.h>
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;

enum Arrow
{
	UP = 72, LEFT = 75, RIGHT = 77, DOWN = 80
};

class Slide
{
private:
	int row, col;
	int* arr1;
	int** arr2;
	bool clear;

public:
	void SetRow(const int& row);
	void SetCol(const int& col);
	void SetClear(const bool& clear);
	void Arr1To2(); // 1차원 배열 생성 및 셔플 후 2차원 배열에 삽입
	void Print();
	void Move();
	bool Check();
	bool GetClear();
	~Slide();
};


int main()
{
	int row, col;
	cout << "게임 시작 세팅 - 가로 세로 입력 : ";
	cin >> row >> col;

	Slide* game = new Slide();
	game->SetRow(row);
	game->SetCol(col);
	game->SetClear(false);
	game->Arr1To2();

	while (true)
	{
		game->Print();
		game->Move();
		game->SetClear(game->Check());
		cout << game->GetClear() << endl;
		if (game->GetClear())
		{
			break;
		}
	}
	delete game;
	game = nullptr;
}

void Slide::SetRow(const int& row)
{
	this->row = row;
}
void Slide::SetCol(const int& col)
{
	this->col = col;
}
void Slide::SetClear(const bool& clear)
{
	this->clear = clear;
}

Slide::~Slide()		// 소멸자
{
	for (int i = 0; i < row; i++)
	{
		delete[] arr2[i];
		arr2[i] = nullptr;
	}
	delete[] arr2;		// 2차원 배열 해제
	arr2 = nullptr;
	
	delete[] arr1;		// 1차원 배열 해제
	arr1 = nullptr;
	cout << endl << "메모리 해제" << endl << "게임 종료" << endl;
}

void Slide::Arr1To2()
{
	arr1 = new int[row * col];				// 1차원배열 동적할당
	for (int i = 0; i < row * col; i++)		// 1차원배열 초기화
	{
		if (i < row * col - 1)
		{
			arr1[i] = i + 1;
		}
		else
		{
			arr1[i] = '#';
		}
	}
	
	int dest, sour, temp;
	srand(time(NULL));

	for (int i = 0; i < 1000; i++)			// 1차원배열 셔플
	{
		dest = rand() % (row * col - 2);
		sour = rand() % (row * col - 2);

		temp = arr1[sour];
		arr1[sour] = arr1[dest];
		arr1[dest] = temp;
	}

	arr2 = new int* [row];			// 2차원배열 동적할당 행 부분을 포인터배열로 할당 후
	for (int i = 0; i < row; i++)	// 할당 받은 행 마다 열 배열 동적할당
	{
		arr2[i] = new int[col];
	}

	int index = 0;
	for (int i = 0; i < row; i++)	// 1차원배열을 2차원배열에 넣음
	{
		for (int j = 0; j < col; j++)
		{
			arr2[i][j] = arr1[index++];
		}
	}
}

void Slide::Print()
{
	system("cls");
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (arr2[i][j] != '#')
			{
				printf("%4d", arr2[i][j]);
			}
			else
			{
				printf("%4c", arr2[i][j]);
			}
		}
		cout << endl << endl;
	}
	cout << "방향키 입력";
}

void Slide::Move()
{
	int temp;
	int input = _getch();
	if (input == 224)
	{
		input = _getch();
		bool check = false;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				if (arr2[i][j] != '#')
				{
					continue;
				}
				else
				{
					switch (input)
					{
					case UP:
						if (i == 0)
						{
							break;
						}
						else
						{
							temp = arr2[i][j];
							arr2[i][j] = arr2[i - 1][j];
							arr2[i - 1][j] = temp;
						}
						break;
					case LEFT:
						if (j == 0)
						{
							break;
						}
						else
						{
							temp = arr2[i][j];
							arr2[i][j] = arr2[i][j - 1];
							arr2[i][j - 1] = temp;
						}
						break;
					case RIGHT:
						if (j == col-1 || check)
						{
							break;
						}
						else
						{
							temp = arr2[i][j];
							arr2[i][j] = arr2[i][j + 1];
							arr2[i][j + 1] = temp;
							check = true;
						}
						break;
					case DOWN:
						if (i == row-1 || check)
						{
							break;
						}
						else
						{
							temp = arr2[i][j];
							arr2[i][j] = arr2[i + 1][j];
							arr2[i + 1][j] = temp;
							check = true;
						}
						break;
					}
				}
			}
		}
	}
		
}
bool Slide::Check()
{
	int index = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (i == row-1 && j == col-1)
			{
				return true;
			}
			else if (arr2[i][j] != 1 + (index++))
			{
				return false;
			}
		}
	}
}

bool Slide::GetClear()
{
	return clear;
}