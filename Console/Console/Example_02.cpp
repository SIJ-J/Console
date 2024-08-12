#include <iostream>
#include <time.h>

// ���ϴ�. -> ���̴�.
using namespace std;
//using ������ : ������ ���ӽ����̽��� ��� ��Ī�� �� ������ �ִ� ��������
//				������ �Ҽ� �������� ����ϰڴ�.

using std::cin;
using std::cout;
using std::endl;

namespace A 
{
	namespace B 
	{
		namespace C 
		{
			int EnemyAttack;
		}
	}
}

namespace ABC = A::B::C;

#pragma region �ڷ��� + ���� ����
/*
�ڷ���
 -������ ������ �ǹ��ϸ� ���� �ڷ���(Data Type)�̶�� �����ϸ� �ȴ�.

- ������?

- ���� �� �ִ� ���ڳ� �����͸� �ǹ�
- ��ǻ�ͷ� �Ͽ��� ���� ������ �� �ִ� �޸� ������ �ٴ� �̸��� �ǰڴ�.
- ������ �̿��ϸ� Ư�� ���� ���� �� �ش� ���� �̿��� �������� ������ �����ϴ�. (Ȥ�� ó���� �� �ִ�.)

-�ڷ����� ���� (C, C++)

- ������ (�Ҽ����� ���� ���� ǥ���ϱ� ���� �ڷ���)
- �Ǽ��� (�Ҽ����� �����ϴ� ���� ǥ���ϱ� ���� �ڷ���)
- ������ (���ڸ� ǥ���ϱ� ���� �ڷ���)
- ���� (�� / ������ �Ǻ��ϴ� �ڷ���)

- �ڷ����� ���� (������)

- short			(2 bite)	����: 32767
- int			(4 bite)	����: �� +-21��
�� - long		(4 ~ 8 bite)Ȯ�强�� ����ؼ� ���� �ڷ��� 32bit�ü������ 4bite / 64bit�ü�������� 8bite
- long long		(8 bite)

- �ڷ����� ���� (�Ǽ���)

- float		(4 bite) 6 ~ 8�ڸ�(0.0000000) �����Ϸ����� ���� �ٲ�
- double	(8 bite) 14 ~ 16�ڸ�

�� decimal  �𸮾󰡸� �ִ� �ڷ��� (��������)


- �ڷ����� ���� (������)

- char		(1 bite)

- �ڷ����� ���� (����)

- bool		(1 bite -> 0(����) / 1(��)�� ��Ÿ���� �ڷ���)
 - bool �ڷ����� ������ �;� �� ��ġ�� ���� �Ǹ� ���� 1�� 0���� ��ȯ�� �ɻ� ���� ������ �ǹ��ϴ°� �ƴϴ�.

- �⺻������ C���� ������ �ش��ϴ� �� / �����̶�� �ڷ����� ������ �������� �ʾҴ�.
 �׷��� ������ ���� 0�� ���� / 0�� ������ ������ ������ ���� ���״�.
 ����� C���� bool �ڷ����� �����ϴ� �򰥸��� �� �� #include <stdbool.h>

- C++�� �Ѿ� ���鼭 �� �Ǵ� ������ ��Ÿ���� Ű���带 �߰��߰� �̰� true / false�� �ǰڴ�.

- �׸��� C / C++ �ڷ����� �⺻������ ������ ǥ���ϴ°��� ���������� ��쿡 ���� ������ ǥ������ �ʴ� ��ſ� ����� ���� ũ��
ǥ���ϴ� ������ִ�.(signed(��) / unsigned(��))

- �ڷ����� ũ��

1. ������

�ڷ��� Ÿ��			ũ��				����								
short				2bite		-32767 ~ 32767								
unsigned short		2bite		0 ~ 65535				
int					4bite		-21�� ~ 21��								
unsigned int		4bite		0 ~ �� 43��								
long				4bite(32)	-21�� ~ 21��		
																
2. �Ǽ���	
float				4bite		�Ҽ��� �Ʒ� 6 or 8
double				8bite		�Ҽ��� �Ʒ� 14 or 16

3. ������

char				1bite		������ ��´�. (����)
usigned char		1bite		���� ������ ��´�. (����)

4. ����

bool				1bite		0 (����) / 1(��)



�� ���� ����
 - ���� �����̶�?
  ���� ������ �� �ִ� �޸� ������ �̸��� �����ϴ°� ���Ѵ�.

 EX: �⺻ ���� -> ���� ����(����) ������
  - int number;

 EX: int number = 20;
 - ������ �������� ���ؼ� number ��� �̸����� �޸� ������ �Ҵ��� �Ǿ���.
 - int number = 20; �� �ܼ��� number�� 20�� �����ϴ°� �ƴ� number�� �ǹ��ϴ� �޸� ������ 20�� �־�� ��� �ǹ�.
*/



#pragma endregion


void main()
{
	A::B::C::EnemyAttack;
	ABC::EnemyAttack;

	// cout << endl;
	
	// ȿ�����̴�. -> �����ڰ� ���� �޴´�.
	// std::cout << std::endl;

	// 1�� ���̽�
	// int EnemyAttack;	// �����̸����� ���� ���������� ���� ã�ƺ���
	int EnemyAttack;	// ��Ʈ �Ҵ����ȴ�. ������ ����.

	int TestNumA = true;
	int TestNumB = false;
	int TestResult = TestNumA + TestNumB;

	
	cout << "boolean: " << TestResult << endl << endl;

	// ���� �ʱ�ȭ -> �پ��� ����� �����Ѵ�.
	
	// ���� ���� �Ҵ�
	// A : ����� ���α׷���
	int Num0;	// �ƹ��͵� �ȳ����� �ý��� ���������� �����Ⱚ ����
	Num0 = 10;

	// ���� �ʱ�ȭ
	// B : ������ ���α׷���
	int Num1 = 3;
	int Num2 = 6;
	
	
	int Total;

	int Num3;
	int Num4;
	int Num5;
	int Num6, Num7, Num8;
	Num6 = Num7 = Num8 = 100;

	// sizeof() : Ű������ �� ������ ���� �Ǵ� �ڷ����� ũ�⸦ ����ϴ� ���� �����ϴ�.
	cout << "���� ������ : " << sizeof(1) << endl;
	cout << "���� ������ : " << sizeof(2) << endl;
	cout << "true ������ : " << sizeof(true) << endl;
	cout << "false ������ : " << sizeof(false) << endl;

	cout << endl;

	int nValue = 0;

	// C++
	cout << "���� �Է� " << endl;
	cin >> nValue;

	cout << "���� �Է��� ����: " << nValue << endl;

	cout << endl;

	// C
	printf("���� �Է�: ");
	scanf_s("%d", &nValue);
	
	cout << endl;

	short ValueA = 10;
	int ValueB = 20;
	long ValueC = 30;
	long long ValueD = 40;

	cout << "C++ Short: " << ValueA << ", " << "������: " << sizeof(ValueA) << endl;
	cout << "C++ int: " << ValueB << ", " << "������: " << sizeof(ValueB) << endl;
	cout << "C++ long: " << ValueC << ", " << "������: " << sizeof(ValueC) << endl;
	cout << "C++ long long: " << ValueD << ", " << "������: " << sizeof(ValueD) << endl << endl;

	printf("C��� short: %d, %d \n", ValueA, sizeof(ValueA));
	printf("C��� int: %d, %d \n", ValueB, sizeof(ValueB));
	printf("C��� long: %ld, %ld \n", ValueC, sizeof(ValueC));
	printf("C��� long long: %lld, %lld \n", ValueD, sizeof(ValueD));

	/*
		-���� ǥ���
		
		1. �밡���� (�𸮾󿡼� ��)
		 - ���� ������������ ������� �ڵ��� �Ҷ� ���� ���� ǥ���
		  - �� ������ � �������� �˱� ���Ͽ� ���� ����ϵ��� �տ� �� �������°� ���ϴ� ���ڸ� ���δ�.
		  ex)
		  int num		<->	nNum;
		  float ValueA	<-> fValueA;
		  double ValueA <-> dbValueA;
		  char ValueA	<-> chValueA;
		  bool ValueA	<-> bValueA;

		  - ���� ����Ƽ�� �ڵ� ��Ŀ����� ���� ä����� �ʴ´�.
			- ��ü������ ����ϱ� ����

		2. ī���
		 - ��ü�������� ����� �ڵ����� ��ȯ�� �Ǹ鼭 �������� ì�� ǥ���
		 ex)
		 int playerselctnum	<->	playerSelectNum

		3. �Ľ�Į ǥ��� (Pascal case) (�𸮾� �⺻ǥ���)

		 int playerselctnum	<->	PlayerSelectNum

		4. ������ũ

		 int playerselctnum	<->	Player_Select_Num


		5. ���� (���� ����, ��ȭ�ǿ��� ���� ��)

		 int playerselctnum	<->	PlSelN


		- ���� �̸��� Ư¡
		 - �⺻������ ������ �̸��� ���ĺ�, ����, _�� �����ȴ�.
		 - C���� ��ҹ��ڸ� �����ϸ� Num�� num�� �ٸ� ���� �̸��̴�.

		 a. ������ �̸��� ���ڷ� ������ �� ����.
		 b. Ű���� ���� ���� �̸����� ����� �� ����.
		 c. �̸� ���̿� ������ ���� �� �� ����.

		 int Num100;
		 int Num101;
		 int _Num102;
		 int 6Num103;	x ���ڷ� ����
		 int 6Num;		x ���ڷ� ����
		 int Num look;	x ���� ����
		 int bool;		x Ű���� 

	*/

	// �����õ� �ʱ�ȭ
	srand(time(NULL));

	int numR;

	// 0, 1, 2, 3, 4
	numR = rand() % 5;		// rand �ҿ�������
	cout << numR << endl;

	int weaponA = 0;
	weaponA = rand() % 6 + 20; // 0 ~ 5 + 20

	// 20 ~ 25
	cout << "�̹��� ���� ������ ���ݷ� : " << weaponA << endl;

}