#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/*
	○ 사용자 정의 자료형
	 - 구조체, 공용체, 열거형, 클래스 등등

*/

#pragma region C_enum
/*
	1. 열거형
	 - 관련된 상수들을 하나의 그룹으로 묶는다.
	 - 코드의 가독성을 높이고 의미있는 이름을 부여할 수 있다.
*/
// 기본 선언방법
enum Color {Red, Green, White};
// enum RGB { Red, Green, White }; // Color를 날리고 재정의함 

// 명시적인 값을 할당할수도 있음
enum Direction {Left, Right = 2, Up, Down};

#pragma endregion

// 재정의 문제로 인해 나온 ↓
#pragma region enumClass (C++ 11 부터 지원) -> UserDefineTypes_EnumClass.cpp

enum class MyEnumClass
{

};

#pragma endregion


int main()
{
	Color color = Red;

	if (color == Red)
	{
		cout << "빨강" << endl;
	}
	else if (color == Green)
	{
		cout << "녹색" << endl;
	}

	Direction key = Left;

	switch(key)
	{
	case Left:
		cout << "왼쪽으로 이동" << endl;
		break;
	case Right:
		cout << "오른쪽으로 이동" << endl;
		break;
	case Up:
		cout << "위쪽으로 이동" << endl;
		break;
	case Down:
		cout << "아래쪽으로 이동" << endl;
		break;
	}

	int red = Red;		// 암시적으로 형변환 해줌
	cout << red << endl;
}