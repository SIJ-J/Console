#include <iostream>

using namespace std;


int main()
{
	srand(time(NULL));

	int number[10];
	int comNumber[3];
	int playerNumber[3];
	int dest, sour, temp;
	int ballCount;
	int strikeCount;

	for (size_t i = 0; i < 10; i++)		// �ʱ�ȭ
	{
		number[i] = i;
	}
	for (size_t i = 0; i < 500; i++)	// ����
	{
		dest = rand() % 10;
		sour = rand() % 10;

		temp = number[dest];
		number[dest] = number[sour];
		number[sour] = temp;

	}
	// ��ǻ�� �� �ޱ�
	for (size_t i = 0; i < 3; i++)
	{
		comNumber[i] = number[i];
	}

	cout << "��ǻ�Ͱ� �� ���� : " << endl;
	for (size_t i = 0; i < 3; i++)
	{
		cout << comNumber[i] << " ";
	}
	cout << "\n\n";

	// ������ ���ư��� ����
	while (true)
	{
		cout << " 0 ~ 9 ���� ���ڸ� �Է��غ�����! " << endl;

		// �÷��̾��� ���ڸ� 3�� �Է��ض�.

		for (size_t i = 0; i < 3; i++)
		{
			cout << i + 1 << "��° ���ڸ� �Է��ض� -> ";
			cin >> playerNumber[i];
		}
		// 0 ���� �ʱ�ȭ
		ballCount = 0;
		strikeCount = 0;

		// ��
		for (size_t i = 0; i < 3; i++)			// ��ǻ��
		{
			for (size_t k = 0; k < 3; k++)		// �÷��̾�
			{
				// ��ǻ�� ���ڿ� ���� �Է��� ���ڰ� ����?
				if (comNumber[i] == playerNumber[k])
				{
					// �ڸ����� ����?
					if (i == k)
					{
						strikeCount++;
					}
					else
					{
						ballCount++;
					}
				}
			}
		}//end of for

		cout << ballCount << "��" << strikeCount << "��Ʈ����ũ" << endl;

		if (strikeCount == 3)
		{
			cout << strikeCount << "���� �ƿ�" << endl;
			break;
		}

	}//end of while



}