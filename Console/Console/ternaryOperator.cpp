#include <iostream>

using namespace std;

using std::cout;
using std::cin;
using std::endl;


// ���׿�����

// �ڵ��� �������� ���̰� ������ ������ ǥ���ϴµ� �����ϰ� ����.
// �ʹ� ������ ���ǽĿ� ����� ����. if else �� �б⹮���� ó�� �ϴ°� ����.


int main()
{
	/*
	int num1 = 2;
	int num2 = 3;

	int result;

	result = (num1 > num2) ? num1 : num2;

	cout << result << endl;
	*/

	/*
	int a = 5;
	int b = 10;
	int c = 15;

	int result;

	if (a < b)
	{
		if (b < c)
		{
			result = a + b;
		}
		else
		{
			result = a - b;
		}
	}
	else
	{
		if (b > c)
		{
			result = a * b;
		}
		else
		{
			result = a / b;
		}
	}
	cout << "��� : " << result << endl;
	*/

	int a = 5;
	int b = 10;
	int c = 15;
	int result;

	// ex)���������� ���׿���
	result = (a < b) ? ((b < c) ? a + b : a - b) : ((b > c) ? a * b : a / b);

	
}