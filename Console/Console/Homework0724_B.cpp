#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int input = 0;
	int digits = 1;
	int total = 0;

	cout << "���� ������ �Է��ϼ��� : ";
	cin >> input;

	while (true)
	{
		if (input / (digits*10) > 0)
		{
			total += input % (digits * 10) / digits;
			digits *= 10;
		}
		else
		{
			total += input % (digits * 10) / digits;
			break;
		}
	}
	cout << "�ڸ��� ���� : " << total << endl;
	/*
	cout << input % 10000 / 1000 << " " << input / 10000 << endl;
	cout << (input % 1000)/100 << " " << input / 1000 << endl;
	cout << (input % 100)/10 << " " << input / 100 << endl;
	cout << input % 10 / 1<< " " << input / 10 << endl;
	*/


}


/*

2. ����ڰ� �Է��� ���� ������ �� �ڸ����� ���� ���ϴ� ������ �����ض�.
	ex)
	18324 = 1 + 8 + 3 + 2 + 4 = 18
	3849 = 3 + 8 + 4 + 9 = 24

	while (true)
	a = 10;
	if (18324 / a != 0)
	18324 / a = 1832->temp����
	18324 % temp = 4->total����
	a *= 10;
	else if( == 0)

	break;
	else
	break;

*/