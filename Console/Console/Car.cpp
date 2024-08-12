#include "Car.h"

Car::Car(const std::string& n)
	:Vehicle(n)
{
	
		std::cout << "자식(car) 생성자 호출" << std::endl;
}

Car::~Car()
{
	std::cout << "자식(car) 소멸자 호출" << std::endl;
}


void Car::Move() const
{
	std::cout << "자식(car) Move 함수 호출" << std::endl;
}
