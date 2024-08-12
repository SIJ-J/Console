#include <iostream>

using std::cout;
using std::endl;

// 1. �������ε� VS �������ε�
// 2. �����Լ����̺��� ������?

class CPirint
{
public:
	void Print(int a)
	{
		cout << "int�� ���" << a << endl;

	}
	void Print(double a)
	{
		cout << "double�� ���" << a << endl;
	}
};

class Parent
{
public:
	virtual void Show()
	{
		cout << "�θ� Ŭ���� show �Լ�" << endl;
	}
	virtual ~Parent() = default;
};

class Child : public Parent
{
public:
	void Show()override
	{
		cout << "�ڽ� Ŭ���� Show" << endl;
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