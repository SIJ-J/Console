#include <iostream>

using std::cout;
using std::endl;

// 1. 정적바인딩 VS 동적바인딩
// 2. 가상함수테이블이 뭐가요?

class CPirint
{
public:
	void Print(int a)
	{
		cout << "int형 출력" << a << endl;

	}
	void Print(double a)
	{
		cout << "double형 출력" << a << endl;
	}
};

class Parent
{
public:
	virtual void Show()
	{
		cout << "부모 클래스 show 함수" << endl;
	}
	virtual ~Parent() = default;
};

class Child : public Parent
{
public:
	void Show()override
	{
		cout << "자식 클래스 Show" << endl;
	}
};

int main()
{
	CPirint c;
	c.Print(10);
	c.Print(20.5);
	

	Parent* pPtr = new Child();
	pPtr->Show();

	delete pPtr;
}