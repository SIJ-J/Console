#include "Car.h"

Car::Car(const std::string& n)
	:Vehicle(n)
{
	
		std::cout << "�ڽ�(car) ������ ȣ��" << std::endl;
}

Car::~Car()
{
	std::cout << "�ڽ�(car) �Ҹ��� ȣ��" << std::endl;
}


void Car::Move() const
{
	std::cout << "�ڽ�(car) Move �Լ� ȣ��" << std::endl;
}
