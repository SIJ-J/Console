#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/*
	소멸자
	 - 객체가 소멸될때 자동으로 호출되는 특별한 멤버함수
	 - 매개변수를 가질 수 없음, 반환값X, 오버로딩X
*/

class Myclass
{
public:
	Myclass();	// 생성자
	Myclass(int size);
	~Myclass();	// 소멸자

private:
	int* data;
};

Myclass::Myclass(int size)
{
	data = new int[size];
	cout << "생성자 호출!" << endl;
}
Myclass::~Myclass()
{
	delete[] data;
	data = nullptr;
	cout << "소멸자 호출!" << endl;
}

int main()
{
	Myclass* m = new Myclass(10);
	delete m;
}