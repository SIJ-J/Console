#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int input = 0;
	int digits = 1;
	int total = 0;

	cout << "양의 정수를 입력하세요 : ";
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
	cout << "자릿수 총합 : " << total << endl;
	/*
	cout << input % 10000 / 1000 << " " << input / 10000 << endl;
	cout << (input % 1000)/100 << " " << input / 1000 << endl;
	cout << (input % 100)/10 << " " << input / 100 << endl;
	cout << input % 10 / 1<< " " << input / 10 << endl;
	*/


}


/*

2. 사용자가 입력한 양의 정수의 각 자릿수의 합을 구하는 로직을 구현해라.
	ex)
	18324 = 1 + 8 + 3 + 2 + 4 = 18
	3849 = 3 + 8 + 4 + 9 = 24

	while (true)
	a = 10;
	if (18324 / a != 0)
	18324 / a = 1832->temp저장
	18324 % temp = 4->total저장
	a *= 10;
	else if( == 0)

	break;
	else
	break;

*/