#pragma once
#include <iostream>
class Vehicle
{
protected:
	std::string name;
public:
	Vehicle(const std::string& n);
	//소멸자에  Virtual
	//다형성을 활용할때  객체가 올바르게 소멸되도록 보장
	//virtual을 쓰지 않으면 기본클래스의 소멸자만 호출되고
	//자식클래스의 소멸자는 호출되지 않느다.
	virtual~Vehicle();

	virtual void Move()const;
};

