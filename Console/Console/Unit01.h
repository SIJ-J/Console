#pragma once
#include <iostream>
//virtual void Move()const = 0;
//���� ���� �Լ� : �����ϰ� �������� ����
// �߻�Ŭ����
// ���� �����Լ��� �Ѱ� �̻��� �����Ѵٸ� �߻�Ŭ������� �Ѵ�.
// �߻�Ŭ���� : �ν��Ͻ�ȭ ��ų�� ����. �ٸ� Ŭ�������� ��� �޾ƾ��� �ϴ� �⺻ �������̽��� �⺻������ �����ϴ� ���.
//������,�ڵ�, ���뼺;
//Ư�� �Լ����� �ڽ�Ŭ������ ���� �����ǵ��� ������

// �߻� Ŭ����
class Unit01
{
protected:
	std::string name;
	int health;
public:
	Unit01(const std::string& n, const int h);
	virtual~Unit01();
public:
	virtual void Attack()const = 0;
	virtual void TakeDamage(int damge) = 0;

};

