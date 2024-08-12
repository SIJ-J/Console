#pragma once
#include <iostream>
//virtual void Move()const = 0;
//순수 가상 함수 : 선언만하고 구현하지 않음
// 추상클래스
// 순수 가상함수를 한개 이상을 포함한다면 추상클래스라고 한다.
// 추상클래스 : 인스턴스화 시킬수 없음. 다른 클래스들이 상속 받아야하 하는 기본 인터페이스나 기본동작을 정의하는 사용.
//다형성,코드, 재사용성;
//특정 함수들이 자식클래스에 의해 구현되도록 강제함

// 추상 클래스
class Unit01
{
protected:
	std::string name;
	int health;
public:
	Unit01(const std::string& n, const int h);
	virtual~Unit01();
public:
	virtual void Attack()const = 0;
	virtual void TakeDamage(int damge) = 0;

};

