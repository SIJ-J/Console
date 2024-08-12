#include <iostream>
using std::cout;
using std::cin;
using std::endl;

/*
복사 생성자
 - 동일한 클래스의 객체를 복사해서 생성할때 사용하지 않는다.

 얕은 복사
 - 객체를 복사 할때 객체의 모든 멤버 변수를 단순히 복사.
 만약 멤버변수가 포인터인 경우라면 포인터의  주소값 복사-> 같은 메모리 영역을 가리키게 됨
 -> 만약 한 객체에서 해당 메모리를 수정하면 영향을 받음
 -> 두 객체가 같은 메모리 주소를 가리기키 때문에 한 객체가 소멸되면서 메모리를 해제하면 다른 객체는 더 이상 유효하지 않은 메모리를 가리키게 되어 문제가 발생됨

 깊은복사
 - 객체가 동적메모리를 사용할때 필요함.
 - 원복 객체가 동일한 값을 가지는 새로운 메모리를 할당하여 복사하는 것을 의미함
 ->다른 메모리를 사용하게 되므로 서로 영향을 주지 않는다.

*/

//class Person
//{public:
//
//	Person(int a) :age(a) {};
//
//	//컴파일러가 생성하는 기본복사 생성자 형태
//	// 없어도 컴파일러가 휵~하고 삽입한다
//	// 복사생성자
//	Person(const Person& other) :age(other.age)
//	{
//
//	}
//public:
//	void SetAge(int age) { this->age = age; }
//	int GetAge() { return age; }
//private:
//	int age;
//
//	int* data;
//
//};

// 얖은 복사
//class MyArry
//{
//private:
//	int* data;
//	int size;
//public:
//	MyArry(int size):size(size), data(new int [size]){}
//	~MyArry()
//	{
//		delete[] data;
//	}
//
//	void SetValue(int index, int value) { data[index] = value; }
//	int GetValue(int index) { return data[index]; }
//
//};

//깊은 복사
class MyArary
{
public:
	int* data;
	int size;

	MyArary(int size);
	//깊은 복사
	MyArary(const MyArary& other);
	~MyArary();

};

int main()
{
	//Person kim(21);
	//Person clone(kim); // 복산 생성자 호출

	/*MyArry arr1(10);
	arr1.SetValue(0, 42);

	MyArry arr2(arr1);

	cout << "arr1 값 : " << arr1.GetValue(0) << endl;
	cout << "arr2 값 : " << arr2.GetValue(0) << endl;

	arr1.SetValue(0, 100);

	cout << "arr1 값(변경후) : " << arr1.GetValue(0) << endl;
	cout << "arr2 값(arr1 변경후) : " << arr2.GetValue(0) << endl;*/


	MyArary arr(10);
	arr.data[0] = 1;

	cout << arr.data[0] << endl;

	MyArary clone = arr;

	arr.data[0] = 2;
	cout << arr.data[0] << endl;
}

MyArary::MyArary(int size)
{
	this->size;
	data = new int[size]; //생성장에서 동적메모리 할당
}


// 복사 생성자 정의(깊은 복사)
MyArary::MyArary(const MyArary& other)
{
	this->size = other.size;
	this->data = new int[other.size]; // 새로운 공간 할당
	for (int i = 0; i < size; i++) // 데이터 복사
	{
		this->data[i] = other.data[i];
	}
}

MyArary::~MyArary()
{
	if (data != nullptr)delete[] this->data;
	data = nullptr;

}
