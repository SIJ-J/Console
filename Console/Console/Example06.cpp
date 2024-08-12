#include <iostream>
#include <time.h>

using std::cout;
using std::cin;
using std::endl;

// �迭
// ���� �ڷ����� ���� ���ӵ� �޸� �������� �̷���� �ڷᱸ��
// �̷� �迭�� ���� �ڷ����� ���� �������� ������ �ʿ��� �� ���
// ���� ���� �����͸� ó���� �� ����
int main()
{

	int ���º��� = 10; // <- �����ִµ� �̷��� ����ϸ� �ȵȴ�.

	// �迭 ������
	// �ڷ��� �迭�̸�[�迭����];

#pragma region �ʱ�ȭ ���
	/*
		�迭 �ʱ�ȭ ���
		
		1. ũ�⸦ ����ϰ� �ʱ�ȭ
		 - int arr[4] = { 1, 2, 3, 4 };

		2. �迭�� ũ�⸦ �����ϰ� �ʱ�ȭ
		 - int arr[] = { 1, 2, 3, 4 };

		3. ũ�⸦ ��������� �����ϰ� �Ϻ� ��Ҹ� �ʱ�ȭ
		 - int arr[5] = { 1, 2, 3 };		������ ��Ҵ� 0���� �ڵ� �ʱ�ȭ
	
		4. ��� ��Ҹ� �ʱ�ȭ ���� ����
		 - int arr[5] = {};

		�迭 �ε����� 0 ���� �����Ѵ�.
		�迭�� �ݺ����� ���� ���ȴ�.
	*/

#pragma endregion

#pragma region 1���� �迭
	int arr[4] = { 1,2,3,4 };

	cout << "arr[0]��° ������ : " << arr[0] << endl;
	cout << "arr[1]��° ������ : " << arr[1] << endl;
	cout << "arr[2]��° ������ : " << arr[2] << endl;
	cout << "arr[3]��° ������ : " << arr[3] << endl;
	// cout << "arr[4]��° ������ : " << arr[4] << endl;		�����Ⱚ ���

	cout << "======================================" << endl;

	cout << arr << endl;			// �迭 �̸��ּ�
	cout << &arr[0] << endl;		// �迭 0��° �ε��� �ּ�
	cout << &arr[1] << endl;
	cout << &arr[2] << endl;
	cout << &arr[3] << endl;

	cout << "for���� �̿��� �迭 ���" << endl;
	for (size_t i = 0; i < 4; i++)
	{
		cout << arr[i] << endl;
	}

	int number[5];
	for (size_t i = 0; i < 5; i++)		// for������ �ʱ�ȭ ����
	{
		number[i] = i + 1;

		/*
			number[0] = 0 + 1;
			number[1] = 1 + 1;
			number[2] = 2 + 1;
			number[3] = 3 + 1;
			number[4] = 4 + 1;
		*/
	}
	// ���� 10���� �л������� �Է� -> �迭�� �����ϰ� -> ������ ����� ���Ϸ���?
	// ������ ����� �ǻ��ڵ�(�� �ڵ�)�� �ۼ�
	
	// ������ �Է¹��� �迭�� ����
	int grade[10];
	// ���� �հ��
	int total = 0;
	float averige = 0;

	// �Է�

	cout << "10���� �л� ������ �Է�" << endl;
	for (size_t i = 0; i < 10; i++)
	{
		cout << i + 1 << "��° : ";
		cin >> grade[i];
		//total += grade[i];
	}
	// �����ϴ� �κ�
	for (size_t i = 0; i < 10; i++)
	{
		total += grade[i];
	}
	// ���(���)
	cout << "���� : " << total << "\n��� : " << total / 10.0 << endl;

	//averige = total / 10.0;
	//cout << "���� : " << total << "\n��� : " << averige << endl;

#pragma endregion


#pragma region 2���� �迭
	int arr1[4][3];

	arr1[0][0] = 1;
	arr1[0][1] = 2;
	arr1[0][2] = 3;

	arr1[1][0] = 4;
	arr1[1][1] = 5;
	arr1[1][2] = 6;

	arr1[2][0] = 7;
	arr1[2][1] = 8;
	arr1[2][2] = 9;

	arr1[3][0] = 10;
	arr1[3][1] = 11;
	arr1[3][2] = 12;

	cout << endl << endl;

	cout << "0�� ��� ��� " << &arr1[0][0] << " , " << &arr1[0][1] << " , " << &arr1[0][2];
	cout << "0�� ��� ��� " << &arr1[1][0] << " , " << &arr1[1][1] << " , " << &arr1[1][2];
	cout << "0�� ��� ��� " << arr1[2][0] << " , " << arr1[2][1] << " , " << arr1[2][2];
	cout << "0�� ��� ��� " << arr1[3][0] << " , " << arr1[3][1] << " , " << arr1[3][2];

	for (size_t i = 0; i < 4; i++)
	{
		for (size_t k = 0; k < 3; k++)
		{
			cout << arr1[i][k] << endl;
		}
	}

#pragma endregion

	// 1. ���ݺ��� 4���� ���� ����
	// �迭 Ȱ���ϱ�
	// ��ǲ�� �޾Ƽ� �Է¹��� ������ ������ ��� ����� �迭�� �����ϰ� ����ϱ�

	int gugu[9];
	int input;

	// �Է� �ް�
	cout << "����� ������ ���� �Է� : ";
	cin >> input;
	// for�� ������ ������ ��� ����� �迭�� ����
	for (int i = 0; i < 9; i++)
	{
		gugu[i] = input * (i + 1);
		cout << input << " * " << i + 1 << " = " << input * ( i + 1 ) << "	gugu[" << i << "] = " << gugu[i] << endl;
		//printf("%d * %d = %d	gugu[%d] = %d\n", input, i + 1, input * (i + 1), i, gugu[i]);
	}
	cout << "========================================" << endl;
	
	/*

	for (size_t i = 0; i < 9; i++)
	{
		cout << "gugu[" << i << "] = " << gugu[i] << endl;
	}
	
	*/


	// 2. ���� ǥ���� ���� �հ� ������, ��� ���� ���� ���ض�
	/*
		���� �����ϰ� �̴´�.

		90 78 77 66 55
		90 78 77 66 55
		90 78 77 66 55
		90 78 77 66 55

	*/
	cout << "\n\n";

	srand(time(NULL));

	int cube[5][5];
	int totalRaw[5];
	int totalCol[5] = {};

	int raw = 0;
	int col = 0;
	int total = 0;

	for (size_t i = 0; i < 5; i++)					
	{
		raw = 0;								// raw�� 0���� �ʱ�ȭ
		for (size_t k = 0; k < 5; k++)
		{
			cube[i][k] = rand() % 100 + 1;		// 1 ~ 100 ������ �� ���� 
			cout << cube[i][k] << "	";			// ���
			raw += cube[i][k];					// ���� �࿡ ����� ������ ���� raw�� ����
			total += cube[i][k];				// cube�迭�� ��� ����� ���� ���� total�� ����
		}
		cout << '\n';
		totalRaw[i] = raw;						// totalRaw�迭 �ε������� ������ ���� raw�� �ϴ��� ����
	}
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t k = 0; k < 5; k++)
		{
			totalCol[i] += cube[k][i];			// cube[k][i]�� k�� �ٲ㰡�� totalCol�迭 �ε����� ���ϱ�
		}
	}
	cout << "========================================" << endl;

	// ���
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t k = 0; k < 5; k++)
		{
			cout << cube[i][k] << "	";
		}
		cout << "= " << totalRaw[i] << endl;
	}
	cout << '\n';
	for (size_t i = 0; i < 5; i++)
	{
		cout << totalCol[i] << "	";
	}
	cout << "\n\n";
	cout << "��� ���� �� : " << total;

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


// �������� ���
// ���α׷��ӽ� 3�ܰ� �������� ������