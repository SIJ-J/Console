#include <iostream>

using namespace std;


/*
	멤버변수는 private
	생성자, 소멸자, 멤버함수는 public
	접근자 (getter), 설정자 (setter)
*/

class Person
{
private:
	string name;
	int age;

public:
	string getName()const 
	{	
		return name;
	}
	void setName(const string& name) 
	{ 
		this->name = name; 
	} // this포인터 자기자신을 가리키는 포인터}
};


int main()
{
	Person p;
	p.setName("d");
	cout << p.getName() << endl;
}

/*
	클래스는 객체를 찍어내기 위한 설계도임
	구조체와 클래스의 차이 -> 기본 접근제어지시자가 다름
	접근제어지시자는 private, public, protected(상속)
	private 오로지 클래스 내부에서만 접근가능 -> 멤버변수
	public 클래스 내/외부에서 접근가능 -> 외부에 공개할 멤버함수, 생성자, 소멸자
	protected 상속관계에 있는 클래스끼리 접근 허용
	생성자는 기본적으로 무조건 호출되며 명시하지 않은 경우 컴파일러가 암묵적으로 명시
	생성자는 일반적으로 멤버들을 초기화 할때 사용, 멤버 이니셜라이즈 리스트를 사용하는게 효율적(상수와 참조변수는 반드시 이걸 사용해야함)
	소멸자는 생성자와 마찬가지로 자동호출되며(객체 소멸시), 메모리 해제를 할때 사용
	생성자는 오버로딩 가능, 소멸자는 불가능
	getter,setter 는 데이터 캡슐화를 보존하며 외부에서 변경이 가능하다.
	const 쓰는 버릇을 기릅시다

	주말맞이 과제. 
	1. 슬라이드, 빙고, 카드게임
	- 셋중 하나를 클래스화 시킬 것.(동적할당도 활용)

	2. 대전게임
	- 플레이어와 몬스터 각각의 클래스
	- 기본적으로 둘다 공격력, 방어력, 체력이 있음
	- 멤버변수는 무조건 private
	- 멤버함수들은 당연히 public
	- 종료조건 둘중하나 죽으면 끝
*/