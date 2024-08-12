#include <iostream>
using std::cout;
using std::endl;
using std::cin;
/*
 
 UP+Casing
 - �ڽ� Ŭ������ ��ü�� �θ� Ŭ����Ÿ������ ��ȯ
 - ����� Ÿ�� ��ȯ�� �ʿ� ����
 Down+Casting

*/

class Shape
{
public:
	virtual void Draw()const
	{
		cout << "�θ� Ŭ���� Shape" << endl;
	}
	virtual~Shape() = default;
};

class Circle : public Shape
{
public:
	void Draw()const override
	{
		cout << "�ڽ� Ŭ���� Circle" << endl;
	}
	void CircleFunc()
	{
		cout << "Circle Ŭ������ ��� �Լ�" << endl;
	}
		
};
class Rectagle : public Shape
{
public:
	void Draw()const override
	{
		cout << "�ڽ� Ŭ���� Rectagle" << endl;
	}
	void CircleFunc()
	{
		cout << "Rectagle Ŭ������ ��� �Լ�" << endl;
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
		C++ 4�� ĳ����

		static_cast
		dynamic_cast
		const_cast �����ͳ� ������ ��ȯ�� �� ���
		reinterpret_cast
	
	*/

}