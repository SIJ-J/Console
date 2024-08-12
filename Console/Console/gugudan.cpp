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
	
	// 메르센 트위스터
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(0, 9);

	for (size_t i = 0; i < 9; i++)
	{
		number[i] = i;
	}
	
	// 섞어보자. (고전적인 방법)
	for (size_t i = 0; i < 1000; i++) // 1000번 섞음
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

	// 출력
	for (size_t i = 0; i < 9; i++)
	{
		cout << "number[" << i << "]인덱스 : " << number[i] << endl;
	}

	/*
	// 메르센 트위스터 (보편적으로 쓰임)
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

