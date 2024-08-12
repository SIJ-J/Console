#include <iostream>
using std::cout;
using std::cin;
using std::endl;

/*
���� ������
 - ������ Ŭ������ ��ü�� �����ؼ� �����Ҷ� ������� �ʴ´�.

 ���� ����
 - ��ü�� ���� �Ҷ� ��ü�� ��� ��� ������ �ܼ��� ����.
 ���� ��������� �������� ����� ��������  �ּҰ� ����-> ���� �޸� ������ ����Ű�� ��
 -> ���� �� ��ü���� �ش� �޸𸮸� �����ϸ� ������ ����
 -> �� ��ü�� ���� �޸� �ּҸ� ������Ű ������ �� ��ü�� �Ҹ�Ǹ鼭 �޸𸮸� �����ϸ� �ٸ� ��ü�� �� �̻� ��ȿ���� ���� �޸𸮸� ����Ű�� �Ǿ� ������ �߻���

 ��������
 - ��ü�� �����޸𸮸� ����Ҷ� �ʿ���.
 - ���� ��ü�� ������ ���� ������ ���ο� �޸𸮸� �Ҵ��Ͽ� �����ϴ� ���� �ǹ���
 ->�ٸ� �޸𸮸� ����ϰ� �ǹǷ� ���� ������ ���� �ʴ´�.

*/

//class Person
//{public:
//
//	Person(int a) :age(a) {};
//
//	//�����Ϸ��� �����ϴ� �⺻���� ������ ����
//	// ��� �����Ϸ��� ��~�ϰ� �����Ѵ�
//	// ���������
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

// �A�� ����
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

//���� ����
class MyArary
{
public:
	int* data;
	int size;

	MyArary(int size);
	//���� ����
	MyArary(const MyArary& other);
	~MyArary();

};

int main()
{
	//Person kim(21);
	//Person clone(kim); // ���� ������ ȣ��

	/*MyArry arr1(10);
	arr1.SetValue(0, 42);

	MyArry arr2(arr1);

	cout << "arr1 �� : " << arr1.GetValue(0) << endl;
	cout << "arr2 �� : " << arr2.GetValue(0) << endl;

	arr1.SetValue(0, 100);

	cout << "arr1 ��(������) : " << arr1.GetValue(0) << endl;
	cout << "arr2 ��(arr1 ������) : " << arr2.GetValue(0) << endl;*/


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
	data = new int[size]; //�����忡�� �����޸� �Ҵ�
}


// ���� ������ ����(���� ����)
MyArary::MyArary(const MyArary& other)
{
	this->size = other.size;
	this->data = new int[other.size]; // ���ο� ���� �Ҵ�
	for (int i = 0; i < size; i++) // ������ ����
	{
		this->data[i] = other.data[i];
	}
}

MyArary::~MyArary()
{
	if (data != nullptr)delete[] this->data;
	data = nullptr;

}
