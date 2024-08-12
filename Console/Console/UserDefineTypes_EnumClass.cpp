#include <iostream>

#pragma region enumClass (C++ 11 부터 지원)
/*
	○ enum class

	- enum class는 자신만의 스코프를 가지고 있다.
	- 같은 이름의 열거형 상수가 다른 열거형과 충돌하지 않는다.
	- type의 안정성을 보장

*/

enum class Color
{
	Red, Green, White
};

#pragma endregion

enum class SkillType
{
	Fire,
	Ice,
	Lighting
};

void UseSkill(SkillType skill);


int main()
{
	// 범위지정을 명확히
	// Color color = Red; // 오류
	Color color = Color::Red;

	// type의 안정성 보장을 위해 암시적 형변환을 허용하지 않음
	//int c = Color::Red;

	// 명시적으로 형변환 해줘야 한다.
	int a = static_cast<int>(Color::Red);
}

void UseSkill(SkillType skill)
{
	switch (skill)
	{
	case SkillType::Fire:
		break;
	case SkillType::Ice:
		break;
	case SkillType::Lighting:
		break;
	default:
		break;
	}
}

// 요약
/*
	enum은 열거형 상수가 전역스코프에 해당함. 암묵적인 형변환을 허용 -> type에 대한 안정성이 낮다.
	enumClass는 열거형 자체의 스코프에 해당함. 암묵적인 형변환을 허용X -> type에 대한 안정성을 보장한다.
*/