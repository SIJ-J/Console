#include <iostream>

#pragma region enumClass (C++ 11 ���� ����)
/*
	�� enum class

	- enum class�� �ڽŸ��� �������� ������ �ִ�.
	- ���� �̸��� ������ ����� �ٸ� �������� �浹���� �ʴ´�.
	- type�� �������� ����

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
	// ���������� ��Ȯ��
	// Color color = Red; // ����
	Color color = Color::Red;

	// type�� ������ ������ ���� �Ͻ��� ����ȯ�� ������� ����
	//int c = Color::Red;

	// ��������� ����ȯ ����� �Ѵ�.
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

// ���
/*
	enum�� ������ ����� ������������ �ش���. �Ϲ����� ����ȯ�� ��� -> type�� ���� �������� ����.
	enumClass�� ������ ��ü�� �������� �ش���. �Ϲ����� ����ȯ�� ���X -> type�� ���� �������� �����Ѵ�.
*/