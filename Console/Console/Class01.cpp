#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

/*
	class
	- 객체지향 프로그래밍(OOP)?
	 - 우리가 살고있는 실제세계가 객체들로 구성되어 있는것처럼 소프트웨어도 객체로 구성하는 방법
	 - 사람, TV, 세탁기, 냉장고 등등 많은 객체가 존재함
	 - 고유한 기능들을 수행하고 다른 객체들과 상호작용 함

	● 객체
	 - 클래스 -> '틀'이나 '설계도' -> 객체를 정의하는 틀이나 설계도
	 - 객체는 설계도를 기반으로 실체화 시키는 것

*/

// 구조체
struct Circle
{
//public:  암묵적으로 들어가 있음
	int radius;
	string color;

	double calArea()
	{
		return 3.14 * radius * radius;
	}
};

// 클래스
class Circle1
{
//private:  암묵적으로 들어가 있음
	int radius = 1;
	string color;

	double calArea()
	{
		return 3.14 * radius * radius;
	}
};

class Student
{
private:

public:
	void Print()
	{
		cout << "Student class 프린트 함수";
	}
	void Print(int a, int b)
	{

	}
	void Print(string str = "디폴트 매개변수")
	{
		cout << str << endl;
	}

	// 클래스 내부에 함수 원형만 선언
	int Sum(int a, int b);
};

class Rectangle
{
public:
	void Extent()
	{
		cout << "이 사각형의 넓이는 : " << width * height << endl;
	}
	
private:
	int width = 10;
	int height = 20;
};

int main()
{
	// 구조체
	Circle c;
	c.radius = 5;
	 
	// 클래스
	Circle1 c1;
	//c1.radius = 5;  // 엑세스 X

	/*
		구조체화 클래스의 차이는 디폴트 접근제어지시자가 다르다.
		private, protected, public
		 - private : 클래스 내부에서만 참조가능
		  - 숨겨야할 멤버변수
		 - public : 멤버함수 , 생성자, 소멸자

		  접근제어		클래스내부		클래스외부		상속클래스
		  private			o				x				x
		  public			o				o				o
		  protected			o				x				o
	*/
	
	Rectangle rec;
	rec.Extent();
}

int Student::Sum(int a, int b)
{
	return 0;
}

/*
	사각형의 클래스를 만들어보세요
	- 멤버함수로는 사각형의 넓이를 계산 출력
*/