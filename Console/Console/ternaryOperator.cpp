#include <iostream>

using namespace std;

using std::cout;
using std::cin;
using std::endl;


// 삼항연산자

// 코드의 가독성을 높이고 간결한 조건을 표현하는데 유용하게 쓰임.
// 너무 복잡한 조건식에 사용은 지양. if else 등 분기문으로 처리 하는게 좋다.


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
	cout << "결과 : " << result << endl;
	*/

	int a = 5;
	int b = 10;
	int c = 15;
	int result;

	// ex)복잡해지는 삼항연산
	result = (a < b) ? ((b < c) ? a + b : a - b) : ((b > c) ? a * b : a / b);

	
}