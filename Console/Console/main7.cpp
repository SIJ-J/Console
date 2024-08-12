#include <iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
/*
 STL
 - 프로그램에 필요한 자료구조와 알고리즘 템플릿으로 제공하는 라이브러리.

 - 컨테이너 (커다란 창고) : 객체를 보관하는 객체. 클래스 템플릿의 형태로 구현이되어있음
 - 각각의 원소에 접근할 수 있도록 다양한 멤버함수를 제공
 - 접근하는 방법은 직접 함수를 호출하거나, 반복자(iterator)라는 것을 이용해 접근

 - 이터레이터(반복자) : 포인터와 비슷한 개념으로 컨테이너 원소를 가리키고 가리키는 원소에 접근하여 다음 원소를 가리키게 하는 기능
 
 - 알고리즘 :  정렬, 삭제, 검색 등을 해겨하는 일반화된 방법을 제공하는 함수 템플릿
 
 - 시퀀스 컨테이너(선형) : 컨테이너 원소가 자신만의 삽입위치(순서)를 가지는 컨테이너
	- ★vector ,list, deque


- 연관 컨테이너(비선형적) : 저장원소가 삽입순서와 다르게 특정 정렬기준에 의해  자동정렬되는 컨테이너
	- set, multiset, ★map, multimap

*/

/*
 -vector?
 - 순차적으로 저장, 내부적으로 동적배열을 사용하여 크기를 자동으로 조절해준다.
 - 인덱스를 통해서 임의의 원소에 접근가능(배열의[], 멤버함수 at)



*/



int main()
{
	vector<int> v1; // 빈 벡터 생성
	vector<int>v2(10); //10개의 기본값(0)으로 초기환된 벡터 생성
	vector<int>v3(10, 5); // 10개의 요소를 5로 초기화한 벡터 생성
	vector<int>v4 = { 1,2,3,4,5,6,7,8,9,10 };


	 //size() 원소의 갯수를 리턴함
	cout << "벡터의 사이즈 v1 " << v1.size() << endl;
	cout << "벡터의 사이즈 v1 " << v2.size() << endl;
	cout << "벡터의 사이즈 v1 " << v3.size() << endl;
	cout << "벡터의 사이즈 v1 " << v4.size() << endl;

	cout << "=========================================" << endl;

	cout << "벡터의 capacity v1 : " << v1.capacity() << endl;
	cout << "벡터의 capacity v2 : " << v2.capacity() << endl;
	cout << "벡터의 capacity v3 : " << v3.capacity() << endl;
	cout << "벡터의 capacity v4 : " << v4.capacity() << endl;

	//벡터에 끝에 새로운 데이터를 추가한다.
	v4.push_back(11);
	cout << "벡터의 capacity v4(푸시백 후) : " << v4.capacity() << endl;

	cout << "=========================================" << endl;

	vector<int>v5;
	v5.push_back(1);
	v5.push_back(2);
	v5.push_back(3);
	v5.push_back(4);
	v5.push_back(5);

	for (int i = 0l; i < v5.size(); i++)
	{
		cout << "for문으로 벡터 v5  출력 : " << v5.at(i) << endl;
	}
	for (int& i : v5)
	{
		cout << "for문(범위기반)으로 벡터 v5  출력 : " << i << endl;
	}
	for (const auto& i : v5) // auto가 컴파일러가 자동으로 타입을 알아서 출력해준다 복잡한 타입을 사용할 사용하는게 좋다 단 너무 남발하지 말라
	{
		//i += 1;
	}
	//enpty(): 벡터가 비어있는지 확인
	//clear() : 벡터가 모든 요소제거
	//at(): 벡터의 요소 접근
	//front() : 벡터의 첫번쨰 요소반환
	//back() : 벡터의 마지막 요소반환
	//pop_back : 벡터의 끝에서 요소를 제거
	//push_back :  벡터의 끝에 요소 추가
	//intert() : 지정한 위치에 요소룰 삽입
	//erase() : 지정한 위치에 요소를 제거
	//reserve() :  벡터의 용량을 지정
	//swap() : 두 벡터를 교환



	vector<int> v6;
	v6.push_back(1);
	v6.push_back(2);
	v6.push_back(3);
	v6.push_back(4);
	v6.insert(v6.begin() + 1, 10); //인덱스 1에 삽입
	v6.erase(v6.begin() + 3); // 인덱스 3에 요소 제거
	v6.pop_back(); // 마지막 요소 제거

	for (auto& i : v6)
	{
		cout << i << endl;
	}

	// 1 2 3 4
	//1 10 2 3 4
	// 1 10 2 4
	// 1 10 2
	//결과 1 10 2
	cout << "=========================================" << endl;

	//iterator
	//포인터와 비슷한 녀석. 컨테이너의 저장된 원소를 순회하고 접근하는 방법
	//begin-> 시작을 나타냄(실제 원소를)
	//end()-> 실제 원소가 아닌 끝을 나타냄(마지막 요소의 다음)

	vector<int> v7;
	v7.push_back(1);
	v7.push_back(2);
	v7.push_back(3);
	v7.push_back(4);
	v7.push_back(5);
	
	cout << "==반복자로 출력" << endl;
	for (vector<int>::iterator it = v7.begin(); it != v7.end(); ++it)
	{
		cout << *it << endl;
	}
	
	vector<int> v8;
	v8.push_back(1);
	v8.push_back(2);
	v8.push_back(3);
	v8.push_back(4);
	v8.push_back(5);

	cout << "=========================================" << endl;

	vector<int>::iterator iter = v8.begin(); //시작 원소를 가리키는 반복자
	cout << iter[0] << endl;
	cout << iter[1] << endl;
	cout << iter[2] << endl;
	cout << iter[3] << endl;
	cout << iter[4] << endl;
	
	iter += 2;
	cout << *iter << endl;

	/*for (vector<int>::reverse_iterator rit = v8.rbegin(); rit != v8.rend(); rit++)
	{

	}
	cout << "=========================================" << endl;

	for (vector<int>::iterator it = v7.begin(); it != v7.end(); ++it)
	{

	}*/

	vector<int>vec = { 10,20,30,40,50 };
	for (auto it = vec.begin(); it != vec.end(); ++it)
	{
		cout << *it << endl;
	}
	cout << "뻥튀기" << endl;
	for (auto& i : vec)
	{
		i *= 2;
	}
	for (auto it = vec.begin(); it != vec.end(); ++it)
	{
		cout << *it << endl;
	}

}