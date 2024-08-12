#include <iostream>
using std::cout;
using std::endl;
using std::cin;
/*
 
 UP+Casing
 - 자식 클래스의 객체를 부모 클래스타입으로 변환
 - 명시적 타입 변환이 필요 없음
 Down+Casting

*/

class Shape
{
public:
	virtual void Draw()const
	{
		cout << "부모 클래스 Shape" << endl;
	}
	virtual~Shape() = default;
};

class Circle : public Shape
{
public:
	void Draw()const override
	{
		cout << "자식 클래스 Circle" << endl;
	}
	void CircleFunc()
	{
		cout << "Circle 클래스의 멤버 함수" << endl;
	}
		
};
class Rectagle : public Shape
{
public:
	void Draw()const override
	{
		cout << "자식 클래스 Rectagle" << endl;
	}
	void CircleFunc()
	{
		cout << "Rectagle 클래스의 멤버 함수" << endl;
	}

};

//void Print(cosnt int* value)
//{
//	int* newValue = const_cast<int*>(value);
//	*value = 1000
//}

int main()
{
	Shape* shape1 = new Circle();
	Shape* shape2 = new Rectagle();

	shape1->Draw();
	shape2->Draw();

	Circle* c = dynamic_cast<Circle*>(shape1);
	c->CircleFunc();

	/*
		C++ 4대 캐스팅

		static_cast
		dynamic_cast
		const_cast 포인터나 참조를 변환할 때 사용
		reinterpret_cast
	
	*/

}