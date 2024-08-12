#include "Player01.h"

Player01::Player01(const std::string& n, const int h)
 
{
}

Player01::~Player01()
{
}

void Player01::Attack() const
{
	std::cout << name << "АјАн!" << std::endl;
}

void Player01::TakeDamage(int damage)
{
	health = damage;
	std::cout << health << std::endl;
}
