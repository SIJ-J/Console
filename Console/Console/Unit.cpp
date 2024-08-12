#include "Unit.h" // 구현부

Unit::Unit()
{
}

Unit::Unit(const std::string& n, const int h)
{
	:name(n), health(h);

	std::cout << "부모 클래스 Unit생성자 호출" << std::endl;
}

Unit::~Unit()
{
	std::cout << "부모 클래스 Unit생성자 소멸자 호출" << std::endl;
}

void Unit::TakeDamage(const int damage)
{
	health -= damage;
	std::cout << name << "" << damage << "" << std::endl;
}
