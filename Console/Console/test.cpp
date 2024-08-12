#include <iostream>
#include <random>

using namespace std;

using std::cout;
using std::cin;
using std::endl;

// 테스트

int main()
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(1, 10);

	int comArr[3];
	int playerArr[3];
	int input = 0;

	while (input < 10000)
	{
		for (int i = 0; i < 3; i++)
		{
			comArr[i] = dist(gen);
			for (int k = 0; k < i; k++)
			{
				if (comArr[i] == comArr[k])
				{
					i--;
				}
			}
		}
		for (int i = 0; i < 3; i++)
		{
			for (int k = 0; k < 3; k++)
			{
				if (i == k)
				{

				}
				else if (comArr[i] == comArr[k])
				{
					cout << "중복" << endl;
				}
			}
		}
		
		cout << endl;
		input++;
	}
}
/*
	CS 기초
	자료구조 - list, dictionary, Queue
	 - 다른 자료구조도 가능한데 왜 이걸 사용했는지 (시간복잡도 언급하면 좋음)
	 - 실제로 개선됐는지 ( 수치자료 있으면 좋음)
	코드 가독성 및 유지보수설계 (OOP)
	 - 관리하기 얼마나 쉬워졌는지 (인터페이스 왜 만들었는지 , 왜 추상클래스인지)
	 - 다른 개발자들도 실수하기 어려운, 괜찮은 코드인지
	메모리 성능관리

	모든 구현사항을 구구절절히 포폴에 넣으려 하지말 것, 프로젝트의 핵심기능, 대표적인 기능, 설명에 자신있는 기능만 구체적으로 넣는것이 좋음

	신입에게 바라는 수준
	 - 자료구조
	  - 가변배열, 연결리스트, 스택,큐, 트리,해시테이블까지는 완벽히
	  - 탐색 삽입 삭제 시간복잡도와 언제쓰면 좋은지 알아야함
	 - 메모리


	코테 
	프로그래머스 백준 코드업
	문제푸는순서
	1. 브루트 포스
	2. 자료구조 ( 해시 -> 스택/큐 -> 우선순위 큐[heap]순서
	3.

*/