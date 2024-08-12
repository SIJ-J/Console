#include <iostream>
#include <vector>

using namespace std;

/*
	○ 구조체 : struct
	 - 하나 이상의 변수를 그룹지어서 새로운 자료형을 정의

	- 구조체 선언
	struct 구조체명 
	{
		구조체 몸체
	};
	- 구조체 몸체에 변수와 함수를 포함할 수 있다. ( C에서는 허용 X )
	- 구조체에 포함된 변 / 함수를 멤버변수, 멤버함수 라고함.
*/

/*
	○ 자료형 재정의
	 - 자료형의 별칭을 생성하고 실제 자료형 이름 대신 사용

	- typedef type 별칭 (고전스타일)
	- using	( C++ 11 도입)
*/
typedef int myInt_t;					// 자료형 재정의는 _t로 끝내는 걸 권장
typedef unsigned long long uint64_t;	// 복잡한 자료형을 간소화 할 때

using Integer = int;
using StringList = vector<string>;		// <> 템플릿

struct Student
{
	string name;
	int math;
	int english;
	int science;

	float Average() 
	{
		return (math + english + science) / 3.0f;
	}
};

struct Point
{
	int x;
	int y;
	void Print();
};

// 생성자가 있는 구조체
// <구조체 생성자>
// 반환형 없이 구조체 이름의 함수를 구현하여 사용

struct Monster
{
	string name;
	int hp;
	int mp;

	// 생성자 (일종의 함수)
	Monster()
	{
		name = "몬스터";
		hp = 10;
		mp = 20;
	}

	// 매개변수를 받는 생성자
	Monster(string _name, int _hp, int _mp)
	{
		name = _name;
		hp = _hp;
		mp = _mp;
	}
};

struct Family
{
	string father;
	string mother;
	string brother;
	string sister;

	Family()
	{
		father = "부";
		mother = "모";
		brother = "형제";
		sister = "자매";
	}
};

int main()
{
	// 구조체 변수 선언
	Point p;
	Family family;
	
	// 구조체 멤버 초기화
	p.x = 10;
	p.y = 20;

	// 생성과 동시에 초기화
	Point p1 = { 50, 120 };
	
	cout << "구조체 p.x의 값 : " << p.x << endl;
	cout << "구조체 p.y의 값 : " << p.y << endl;

	p.Print();
	cout << endl << "===========================================" << endl << endl;

	Monster monster;
	Monster dragon = Monster("드래곤", 250, 100);
	Monster slime = Monster("슬라임", 10, 2);

	cout << monster.name << endl;
	cout << monster.hp << endl;
	cout << monster.mp << endl;

	cout << endl << "===========================================" << endl << endl;

	cout << dragon.name << endl;
	cout << dragon.hp << endl;
	cout << dragon.mp << endl;

	cout << endl << "===========================================" << endl << endl;

	cout << slime.name << endl;
	cout << slime.hp << endl;
	cout << slime.mp << endl;

	cout << endl << "===========================================" << endl << endl;

	cout << "father : " << family.father << endl;
	cout << "mother : " << family.mother << endl;
	cout << "brother : " << family.brother << endl;
	cout << "siser : " << family.sister << endl;
}

void Point::Print()
{
	cout << "포인트 구조체 멤버 함수임" << endl;
}

// 지금 해볼것
// 구조체를 활용해서 가족관계를 출력해보세요.

// "구조체 메모리 패딩" 찾아보기

/*
	과제. 카드게임 만들기
	트럼프카드는 52장

	예를 들어서 만약 다음과 같은 카드가 나왔다면 (출력)
	
	- 아래와 같이 보여지는 카드는 컴퓨터가 낸다고 가정함.

	♧7	♤8	♡k(13)		(자유)문양 상관없이 두 수 사이범위에 들어가는 수를 뽑으면 이김	(베팅액 * 2)
							 		     동일하다면 베팅액 소진
										 들어오지 못하면 (베팅액 * 2) 차감
	
	조건) 한번 사용한 카드는 버려야 함. (사용하지 않는것 뿐)
	17판 돌리면 자동으로 끝나야함. (3장의 카드를 한턴마다 소비하기때문에 52 / 3)
	소지금 , 최소베팅금
	남은 소지금이 최소베팅금액보다 작으면 파산

	♤
	♡
	♧
	◇

*/