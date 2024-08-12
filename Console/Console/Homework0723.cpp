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
		cout << "[" << out + 1 << "��° ����]" << endl << endl;

		// �ʱ�ȭ
		int ballC = 0;
		int strikeC = 0;
		// �Է�
		for (int i = 0; i < 3; i++)			// Computer 3�� �̱� (���� ó��)
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

			// �ʱ�ȭ
			ballC = 0;
			strikeC = 0;
			for (int i = 0; i < 3; i++)
			{
				cout << i + 1 << "��° �Է� ";
				playerArr[i] = PlayerInput();
			}
			// ��
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
						//���� �� ����
					}
				}
			}
			cout << "[���]" << endl;
			// ġƮ com ��
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
	
		cout << "(1 ~ 10 ������ ��) : ";
		cin >> input;

		if (1 > input || input > 10)
		{
			do
			{
				cout << "�ٽ��Է� �ϼ��� : ";
				cin >> input;
			} while (!(1 <= input && input <= 10));
		}
	return input;
}


/*
	������ ����.
	player vs computer

	1. computer�� ������ ���� 3���� �̴´�.
	2. player�� ���ʴ�� ���� 3���� �Է��Ѵ�.
	3. ��

	C		5, 3, 1
	�Է�		1, 2, 3		0 strike 2 ball �ڸ��� �ٸ��� ���ڰ� �����ϴٸ� ball,
										�ڸ��� ���� ���ڵ� �����ϸ� strike

	���� ����
	�����߻� ���� 1 ~ 10
	1. ������ ���� ���� �� �Է½� �ٽ� �Է��϶�� ��(����ó��)
	2. 3strike �̸� out++
	3. 3out �̸� ����
*/