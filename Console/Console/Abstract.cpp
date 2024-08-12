/*
 virtual void Move()const = 0; 순수 가상 함수

*/




#include "Player01.h"

int main()
{
	Player01* p = new Player01("홍", 200);
	p->Attack();
	p->TakeDamage(10);

	// 추상클래스는 인스턴스화 시킬수 없음
	//Unit01* u = new Unit01("길",200);
}

// 1.OOP 특성 조사 -> 파일로 제출 할것 (이왕이면 pdf로)
// 2. 클래스 전방 선언 -> 과제(위와 동일함)
// 3. 추상클래시를 활용한 3가지 캐릭터클래스를 구현하세요.
// 기본스탯, 움직이는 함수, 공격하는 함수 , 데미지 먹는 함수 등등등등등
/*
 만약 두개의 클래스가 있음
 Player
 Weapon


*/

