#include <iostream>
#include <random>

using namespace std;

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int number[9];
	int input;
	int dest;
	int sour;
	int temp;
	
	// �޸��� Ʈ������
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(0, 9);

	for (size_t i = 0; i < 9; i++)
	{
		number[i] = i;
	}
	
	// �����. (�������� ���)
	for (size_t i = 0; i < 1000; i++) // 1000�� ����
	{
		//dest = rand() % 9;
		//sour = rand() % 9;
		dest = dist(gen);
		sour = dist(gen);

		temp = number[dest];
		number[dest] = number[sour];
		number[sour] = temp;
	}

	cout << "==============================================" << endl;

	// ���
	for (size_t i = 0; i < 9; i++)
	{
		cout << "number[" << i << "]�ε��� : " << number[i] << endl;
	}

	/*
	// �޸��� Ʈ������ (���������� ����)
	random_device rd;
	mt19937 gen(rd());
	
	for (size_t i = 0; i < 5; i++)
	{
		cout << gen() << " ";
	}

	for (size_t i = 0; i < 10; i++)
	{
		cout << dist(gen) << " ";
	}
	*/
}

