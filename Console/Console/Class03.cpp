#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/*
	�Ҹ���
	 - ��ü�� �Ҹ�ɶ� �ڵ����� ȣ��Ǵ� Ư���� ����Լ�
	 - �Ű������� ���� �� ����, ��ȯ��X, �����ε�X
*/

class Myclass
{
public:
	Myclass();	// ������
	Myclass(int size);
	~Myclass();	// �Ҹ���

private:
	int* data;
};

Myclass::Myclass(int size)
{
	data = new int[size];
	cout << "������ ȣ��!" << endl;
}
Myclass::~Myclass()
{
	delete[] data;
	data = nullptr;
	cout << "�Ҹ��� ȣ��!" << endl;
}

int main()
{
	Myclass* m = new Myclass(10);
	delete m;
}