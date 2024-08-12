#pragma once
#include <iostream>
//여긴 부모 클래스

class Unit // 선언부
{
protected:
	std::string name;
	int health;
public:
	Unit();
	Unit(const std::string& n, const int h);
	~Unit();

public:
	void TakeDamage(const int damage);
};

