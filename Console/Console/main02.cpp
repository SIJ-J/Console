#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bike.h"
/*
 - ������
 - ��ü�� �Ӽ��̳� ����� ��Ȳ�� ���� �������� ���¸� ������ �ִ� ����

 VirtueFunction
 - ��Ӱ��迡 �ִ� Ŭ�������� �θ� Ŭ������ �Լ��� �ڽ� Ŭ�������� ������ (�������̵�) �ϰ� �θ� Ŭ������ �����ͳ� ������ ���� �ڽ� Ŭ������ �Լ� ȣ��
 - �����ε� VS �������̵�
 - 
 */

int main()
{
	Vehicle* v;
	v = new Car("������");
	v->Move();
	delete v;

	v = new Bike("�������");
	v->Move();
	delete v;
	
}