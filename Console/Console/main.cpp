#include<iostream>
using std::cout;
using std::cin;
using std::endl;

/*
 static,



 extern
*/

//static int a;

//staticVariable.cpp �ȿ� �ִ� ��������
//extern int num1;
//
//
//void Count();
//
//static int sNum;

// Ŭ�� ���� static
// Ŭ���� ���ο��� static���� ����� ������ �ش� Ŭ������ 
// ��� �ν��Ͻ� ���� ������. Ŭ������ �ν��Ͻ� ���� �������� ���Ǵ� ����
// Ŭ���� �ν��Ͻ��� ���̵� ������

//���� ���
//Ŭ���� ���ο��� static�� ����Ͽ� ����
// �� ������ �����Ϸ����� �ش� Ŭ������ ���� ��������� ������ �˷���

// �ܺο���  �ʱ�ȭ�ؾ���
// :: ����ؼ� �ʱ⸦ȭ�� �ؾ���

//====================================================

class Character
{
private:
	static int count;

	//int num; staric ��� �Լ��� �Ϲ� ��� ������ ȣ���� �� ����.

public:
	Character()
	{
		count++;
	}
	static void  PrintCount()
	{
		cout << count << endl;
		//cout << num << endl;
		// ���� : staric ��� �Լ��� �Ϲ� ��� ������ ȣ���� �� ����.
	}

};

int Character::count = 0;

int main()
{
	/*Count();
	Count();
	Count();*/
	Character::PrintCount();
	Character baba;
	Character::PrintCount();
	Character war;
	Character::PrintCount();
}

//void Count()
//{
//	static int x = 0; //����
//	int y = 0; //����
//
//	x = x + 1;
//	y = y + 1;
//
//	cout << "x�� " << x << "y�� : " << y << endl;
//
//}	
