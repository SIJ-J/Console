#include <iostream>

using namespace std;

template<typename T>
class Shape
{
public:
	virtual void draw()const = 0; //순순하 그아이
	virtual T area()const = 0; // 순순하 그아이
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
		cout << "원의 반지름 : " << radius << endl;
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
		cout << "가로: " << width << "세로 : " << height << endl;
	}
	T area()const override
	{
		return width * height;
	}
};

// 함수 텔플릿 : shape포인터를 인자로 받아서 draw와 area를 출력하고 싶다

template <typename T>
void Show(Shape<T>* shape)
{
	shape->draw();
	cout << "면적" << shape->area() << endl;
}

int main()
{
	Circle <double> circle(3.14);
	Rectangle<int> rectangle(4, 3);
	Show(&circle);
	Show(&rectangle);
}