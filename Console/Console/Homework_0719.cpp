#include <iostream>
#include <time.h>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;



void main()
{
	
#pragma region ���� 1.
	srand(time(NULL));

	int comNumber;
	int myNumber;

	cout << "[���������� ����]" << endl << endl;

	for (int i = 0; i < 5; i++)
	{
		comNumber = rand() % 3;

		cout << i + 1 << "��° ��" << endl;
		cout << "ġƮ: ��ǻ���� ���� (" << comNumber << ")" << endl;
		cout << "����(0), ����(1), ��(2) �߿� �����ϼ���. ";
		cin >> myNumber;

		if (myNumber < 0 || myNumber > 2)
		{
			cout << "�߸��� �����Դϴ�" << endl;
		}
		else if (comNumber == myNumber)
		{
			cout << "�����ϴ�." << endl;
		}
		else if ((comNumber+1)%3 == myNumber)
		{
			cout << "[�÷��̾�] �¸�." << endl;
		}
		else
		{
			cout << "[��ǻ��] �¸�." << endl;
		}
		cout << endl;
	}
	cout << "���� ����" << endl;
	cout << "===================================" << endl << endl;

#pragma endregion


#pragma region ���� 2.

	/*
		1	  31
		2	  29
		3	  31
		4	  30
		5	  31
		6	  30
		7	  31
		8	  31
		9	  30
		10	  31
		11	  30
		12	  31
	*/

	int month;

	cout << "[�ϼ� ��±�]" << endl << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "ȸ��" << endl;
		cout << "����� ���ϴ� ��(1 ~ 12)�� �Է��ϼ��� : ";
		cin >> month;

		switch (month)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout << month << "���� 31�� ���� �ֽ��ϴ�." << endl;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			cout << month << "���� 30�� ���� �ֽ��ϴ�." << endl;
			break;
		case 2:
			cout << month << "���� 29�� ���� �ֽ��ϴ�." << endl;
			break;
		default:
			cout << "1�� ���� 12�� �߿� ����ּ���" << endl;
			break;
		}
		cout << endl;

	}

#pragma endregion

}

/*
	����1. ���������� ����

	- if���� ����ؼ� �����.
	 - ����ġ�� ������

	- ������ ���� Ƚ���� �� 5��
	 - ���Ĵ� ���� ����

	 - �ʼ� : ġƮ

	 �� ���� ���ڸ� �ڵ带 �ִ��� �����ϰ� �ؿ°� ����.


	 ����2. �ϼ� ��±�

	 - if���� switch�� �߿� ������ �Ǵ��� ȿ������ ���� �����ؼ� �����.

	 - �����ϸ� ������� �Է��� �ް� �Է��� ���ڿ� ���� ??�� ���� ���

	 ex) 4�� �Է½� -> 4���� 30�ϱ��� �ֽ��ϴ�. -> �ٽ� �Է� Ŀ�ǵ� Ȱ��ȭ

	 - 1������ 12������ Ȯ���� �����ؾ� �ϰ� �̿��� ���ڴ� ����ó���� �����Ѵ�.

	 - �� 5���� �Է��ϸ� ���α׷� ����

	 ���� ����. �Լ��� �����͸� Ȱ���� ����������


	void* Function(int* a, int** b, int*** c)
	{
		// ���� �ۼ�
	}
	void main()
	{
		// �̿��� �ڵ尡 ������ �ȵȴ�.
		Function(a, b, c);
	}

	���� ����. �Լ�
	- ��Ʈ�� ����´�.

	-������ �� ������ �´�. ex) �Լ��� 000�̴�. �ݼ�Ȱ�ڴ�.

*/