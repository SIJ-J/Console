#pragma once
#include "Unit01.h"
class Player01 : public Unit01
{
public:
	Player01(const std::string& n, const int h);
	~Player01();

	void Attack()const override;
	void TakeDamage(int damage) override;
};

