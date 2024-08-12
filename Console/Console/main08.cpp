#include <iostream>
#include <list>
#include <map>
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::map;
/*
- 벡터와 리스트의 차이점은 반드시 알아 두자
*/

/*
 push_back : 리스트 끝에 추가
 push_front : 리스트 앞에 추가
 pop_back : 리스트 끝 요소 제거
 pop_front : 리스트 앞 요소 제게
 insert : 지정된 위치의 요소 삽입
 erase : 지정된 위치의 요소 제거
 clear : 모든 요소 제거
 size : 리스트 요소 갯수 반환
 front : 첫번째 요소 반환
 back : 마지막 요소 반환
 remove : 지정한 값을 가지는 모든 요소 제거
 reverse : 리스트 순서 뒤집음
 sort : 집합

*/

/*
 Map
 - 연관컨테이너 중에 자주 사용하는 컨테이너.
 -key, value의 쌍으로 저장(pair) / key는 컨테이너 중복으로 저장 불가능. /이진 검색 트리로 되어 있다
 -key값은 컨테이너에 중복 저장이 될수 없다.




*/






int main()
{
	//std::list<int> lst = { 3,1,45,7,10 };
	//lst.push_back(9);

	//for (auto& i : lst)
	//{
	//	cout << i << endl;

	//}
	//lst.push_front(6);//리스트 옆에

	//std::list<int>::iterator iter = lst.begin();

	map<string, int>data;
	//반복자
	map<string, int>::iterator iter;


	/*
		pair
		두개의 값을 묶어서 하나의 객체로 사용하는 템플릿 클래스
		두개의 서로 다른 타입의 값을 함께 저장가능
		페어는 두개의 멤버를 가지고 잇다.
		first, second
	*/

	//1. value_typ을 이용한 방법
	// 기본적인 키-값을 쌍 타입을 나타낸다. pair 객체를 생성산 다음에 insert에 전달
	// 가독성이 떨어짐
	data.insert(map<string, int>::value_type("바보", 1));

	//2.maker_pair : pair객체를 생성하는 함수 템플릿
	//make_pair : -> std::pair<stirng, int>
	//템플릿 인자를 자동으로 추론함

	data.insert(std::make_pair("윈터", 5));

	//3. pair를 이용한 방법
	data.insert(std::pair<string, int>("BTS", 10));
	data.insert(std::pair<string, int>("반장", 30));
	data.insert(std::pair<string, int>("아이유", 170));
	data.insert(std::pair<string, int>("정우성", 400));
	data.insert(std::pair<string, int>("언리얼", 20));

	//4.객체를 직접 생성하는 방법
	std::pair<string, int>pt1("대한민국",10);
	data.insert(pt1);

	data.erase("정우성");

	for (auto& pair : data)
	{
		cout << "키값 : " << pair.first << ", 데이터 : " << pair.second << endl;
	}

	map<string, int>m;
	m.insert(std::pair<string, int>("Apple", 1));
	m.insert(std::pair<string, int>("Banana", 2));
	m.insert(std::make_pair("Apple", 1));

	auto res = m.insert(std::make_pair("Banana", 10));

	if (!res.second)
	{
		cout << "바나나는 있을까 : " << res.first->second << endl;
	}
	auto iter = m.find("Apple");
	if (iter != m.end())
	{
		cout << "찾음" << iter->second << endl;

	}
	else
	{
		cout << "없음" << endl;
	}
	//count
	cout << "Apple : " << m.count("Apple") << endl; //1

	//clear:모든 요소를 삭제함
	//empty : 비어있냐?
	//size :

	for (auto it = m.begin(); it != m.end(); ++it)
	{

	}
	//역순
	for (auto it = m.rbegin(); it != m.rend(); ++it)
	{

	}
}