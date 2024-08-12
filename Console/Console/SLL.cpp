#include "SLL.h"
#include <iostream>

SLL::SLL() :pHead(nullptr){}


SLL::~SLL()
{
	//��尡 nullptrd �ƴҶ�����
	while (pHead!= nullptr)
	{
		node* temp = pHead;

		pHead = pHead->pNext;
	}
}

void SLL::Insert(int num)
{
	//���ο� ��带 �����.
	node* newNode = new node(num);

	//��尡 ������
	if (pHead == nullptr)
	{
		pHead = newNode;
		return;
	}
	else
	{
		node* temp = pHead;
		//��ȸ�� �����Ͱ� nullptr�� �ƴҋ����� ���鼭
		while (temp->pNext!=nullptr)
		{
			temp = temp->pNext;

		}
		temp->pNext = newNode;
	}

}

void SLL::Delete(int num)
{
	node* pCurrent = pHead;
	//���� ��带 ����Ű�� ������
	node* pNext = pHead->pNext;
	// ù���� ��尡 �����Ϸ��� �����

	if (pCurrent->value == num)
	{
		pHead = pNext; // phead�� ���� ���� �̵�
		delete pCurrent;
		return;
	}
	while (pNext->value!=num)
	{
		pCurrent = pCurrent->pNext;
		// ���� ��带 �� ���� ���� �̵�
		pNext = pNext->pNext;

		if (pNext == nullptr)return;
	}
	pCurrent->pNext = pNext->pNext;
	delete pNext;
}

void SLL::Print()
{
	node* temp = pHead;

	std::cout << "=====================================" << std::endl;

	while (temp != nullptr)
	{
		std::cout << temp->value << " ";
		temp = temp->pNext;
	}
	std::cout << std::endl;
}
