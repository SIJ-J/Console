#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// 함수 오버로딩
int sum(int a, int b)
{
	return a + b;
}
// 매개변수 개수가 다른경우
int sum(int a, int b, int c)
{
	return a + b + c;
}
// 매개변수의 type이 다른경우
int sum(double a, int b, int c)
{
	return a + b + c;
}
// 매개변수의 type이 같아도 순서가 다른경우
int sum(int a, double b, int c)
{
	return a + b + c;
}
// 오류 : return type은 오버로딩 고려대상이 아님
/* 
ex)
int func(int a);
double func(int b);
*/

// 디폴트 매개변수 - 함수 호출시 매개변수를 전달하지 않은경우에 지정된 기본값으로 함수 호출
// 모호하게 함수호출하지 않게 주의
int sum(int a, double b, int c = 3)	// 디폴트 매개변수는 가장 오른쪽 매개변수 부터 지정한다. 
{									//   오류) int sum(int a, double b = 3, int c){}
	return a + b + c;
}
int sum(int a, double b = 3, int c) 
{
	return a + b + c;
}

// inline 함수 - 요즘은 컴파일러가 알아서 한다.(굳이 써줄필요없다)
// 오버헤드를 줄이기위한 함수
// 코드가 적고 자주 호출 될 것 같은 함수에 사용
inline int Test(int left, int right) { return left > right ? left : right; }

int main()
{
	
}
