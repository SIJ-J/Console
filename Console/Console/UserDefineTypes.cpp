#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/*
	�� ����� ���� �ڷ���
	 - ����ü, ����ü, ������, Ŭ���� ���

*/

#pragma region C_enum
/*
	1. ������
	 - ���õ� ������� �ϳ��� �׷����� ���´�.
	 - �ڵ��� �������� ���̰� �ǹ��ִ� �̸��� �ο��� �� �ִ�.
*/
// �⺻ ������
enum Color {Red, Green, White};
// enum RGB { Red, Green, White }; // Color�� ������ �������� 

// ������� ���� �Ҵ��Ҽ��� ����
enum Direction {Left, Right = 2, Up, Down};

#pragma endregion

// ������ ������ ���� ���� ��
#pragma region enumClass (C++ 11 ���� ����) -> UserDefineTypes_EnumClass.cpp

enum class MyEnumClass
{

};

#pragma endregion


int main()
{
	Color color = Red;

	if (color == Red)
	{
		cout << "����" << endl;
	}
	else if (color == Green)
	{
		cout << "���" << endl;
	}

	Direction key = Left;

	switch(key)
	{
	case Left:
		cout << "�������� �̵�" << endl;
		break;
	case Right:
		cout << "���������� �̵�" << endl;
		break;
	case Up:
		cout << "�������� �̵�" << endl;
		break;
	case Down:
		cout << "�Ʒ������� �̵�" << endl;
		break;
	}

	int red = Red;		// �Ͻ������� ����ȯ ����
	cout << red << endl;
}