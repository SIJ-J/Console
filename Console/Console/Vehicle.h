#pragma once
#include <iostream>
class Vehicle
{
protected:
	std::string name;
public:
	Vehicle(const std::string& n);
	//�Ҹ��ڿ�  Virtual
	//�������� Ȱ���Ҷ�  ��ü�� �ùٸ��� �Ҹ�ǵ��� ����
	//virtual�� ���� ������ �⺻Ŭ������ �Ҹ��ڸ� ȣ��ǰ�
	//�ڽ�Ŭ������ �Ҹ��ڴ� ȣ����� �ʴ���.
	virtual~Vehicle();

	virtual void Move()const;
};

