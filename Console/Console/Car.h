#pragma once
#include "Vehicle.h"
class Car: public Vehicle
{
public:
	Car(const std::string& n);
	~Car();

	void Move()const override; // 오버라이딩 필요는없지만 명시적으로 해주는게 좋다
};

