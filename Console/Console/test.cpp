#include <iostream>
#include <random>

using namespace std;

using std::cout;
using std::cin;
using std::endl;

// �׽�Ʈ

int main()
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(1, 10);

	int comArr[3];
	int playerArr[3];
	int input = 0;

	while (input < 10000)
	{
		for (int i = 0; i < 3; i++)
		{
			comArr[i] = dist(gen);
			for (int k = 0; k < i; k++)
			{
				if (comArr[i] == comArr[k])
				{
					i--;
				}
			}
		}
		for (int i = 0; i < 3; i++)
		{
			for (int k = 0; k < 3; k++)
			{
				if (i == k)
				{

				}
				else if (comArr[i] == comArr[k])
				{
					cout << "�ߺ�" << endl;
				}
			}
		}
		
		cout << endl;
		input++;
	}
}
/*
	CS ����
	�ڷᱸ�� - list, dictionary, Queue
	 - �ٸ� �ڷᱸ���� �����ѵ� �� �̰� ����ߴ��� (�ð����⵵ ����ϸ� ����)
	 - ������ �����ƴ��� ( ��ġ�ڷ� ������ ����)
	�ڵ� ������ �� ������������ (OOP)
	 - �����ϱ� �󸶳� ���������� (�������̽� �� ��������� , �� �߻�Ŭ��������)
	 - �ٸ� �����ڵ鵵 �Ǽ��ϱ� �����, ������ �ڵ�����
	�޸� ���ɰ���

	��� ���������� ���������� ������ ������ ������ ��, ������Ʈ�� �ٽɱ��, ��ǥ���� ���, ���� �ڽ��ִ� ��ɸ� ��ü������ �ִ°��� ����

	���Կ��� �ٶ�� ����
	 - �ڷᱸ��
	  - �����迭, ���Ḯ��Ʈ, ����,ť, Ʈ��,�ؽ����̺������ �Ϻ���
	  - Ž�� ���� ���� �ð����⵵�� �������� ������ �˾ƾ���
	 - �޸�


	���� 
	���α׷��ӽ� ���� �ڵ��
	����Ǫ�¼���
	1. ���Ʈ ����
	2. �ڷᱸ�� ( �ؽ� -> ����/ť -> �켱���� ť[heap]����
	3.

*/