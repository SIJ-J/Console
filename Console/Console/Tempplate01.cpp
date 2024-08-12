#include <iostream>

using namespace std;

template<typename T>
class Shape
{
public:
	virtual void draw()const = 0; //������ �׾���
	virtual T area()const = 0; // ������ �׾���
};

template <typename T>
class Circle : public Shape<T>
{
private:
	T radius;
public:
	Circle(T r) :radius(r) {};

	void draw()const override
	{
		cout << "���� ������ : " << radius << endl;
	}
	T area()const override
	{
		return 3.14 * radius * radius;
	}
};

template <typename T>
class Rectangle : public Shape<T>
{
private:
	T width;
	T height;
public:
	Rectangle(T w, T h):width(w),height(h){}

	void draw()const override
	{
		cout << "����: " << width << "���� : " << height << endl;
	}
	T area()const override
	{
		return width * height;
	}
};

// �Լ� ���ø� : shape�����͸� ���ڷ� �޾Ƽ� draw�� area�� ����ϰ� �ʹ�

template <typename T>
void Show(Shape<T>* shape)
{
	shape->draw();
	cout << "����" << shape->area() << endl;
}

int main()
{
	Circle <double> circle(3.14);
	Rectangle<int> rectangle(4, 3);
	Show(&circle);
	Show(&rectangle);
}