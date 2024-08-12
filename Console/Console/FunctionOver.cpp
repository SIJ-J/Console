#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// �Լ� �����ε�
int sum(int a, int b)
{
	return a + b;
}
// �Ű����� ������ �ٸ����
int sum(int a, int b, int c)
{
	return a + b + c;
}
// �Ű������� type�� �ٸ����
int sum(double a, int b, int c)
{
	return a + b + c;
}
// �Ű������� type�� ���Ƶ� ������ �ٸ����
int sum(int a, double b, int c)
{
	return a + b + c;
}
// ���� : return type�� �����ε� �������� �ƴ�
/* 
ex)
int func(int a);
double func(int b);
*/

// ����Ʈ �Ű����� - �Լ� ȣ��� �Ű������� �������� ������쿡 ������ �⺻������ �Լ� ȣ��
// ��ȣ�ϰ� �Լ�ȣ������ �ʰ� ����
int sum(int a, double b, int c = 3)	// ����Ʈ �Ű������� ���� ������ �Ű����� ���� �����Ѵ�. 
{									//   ����) int sum(int a, double b = 3, int c){}
	return a + b + c;
}
int sum(int a, double b = 3, int c) 
{
	return a + b + c;
}

// inline �Լ� - ������ �����Ϸ��� �˾Ƽ� �Ѵ�.(���� �����ʿ����)
// ������带 ���̱����� �Լ�
// �ڵ尡 ���� ���� ȣ�� �� �� ���� �Լ��� ���
inline int Test(int left, int right) { return left > right ? left : right; }

int main()
{
	
}
