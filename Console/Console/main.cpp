#include<iostream>
using std::cout;
using std::cin;
using std::endl;

/*
 static,



 extern
*/

//static int a;

//staticVariable.cpp 안에 있는 전역변수
//extern int num1;
//
//
//void Count();
//
//static int sNum;

// 클랫 내의 static
// 클래스 내부에서 static으로 선언된 변수는 해당 클래스의 
// 모든 인스턴스 에서 공유됨. 클래스의 인스턴스 끼리 공통으로 사용되는 변수
// 클래스 인스턴스가 없이도 가능함

//선언 방법
//클래스 내부에서 static을 사용하여 선언
// 이 선언은 컴파일러한테 해당 클래스에 정적 멤버변수가 있음을 알려줌

// 외부에서  초기화해야함
// :: 사용해서 초기를화를 해야함

//====================================================

class Character
{
private:
	static int count;

	//int num; staric 멤버 함수는 일반 멤버 변수를 호출할 수 없다.

public:
	Character()
	{
		count++;
	}
	static void  PrintCount()
	{
		cout << count << endl;
		//cout << num << endl;
		// 오류 : staric 멤버 함수는 일반 멤버 변수를 호출할 수 없다.
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
//	static int x = 0; //정적
//	int y = 0; //지역
//
//	x = x + 1;
//	y = y + 1;
//
//	cout << "x값 " << x << "y값 : " << y << endl;
//
//}	
