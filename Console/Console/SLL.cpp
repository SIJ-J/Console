#include "SLL.h"
#include <iostream>

SLL::SLL() :pHead(nullptr){}


SLL::~SLL()
{
	//헤드가 nullptrd 아닐때까지
	while (pHead!= nullptr)
	{
		node* temp = pHead;

		pHead = pHead->pNext;
	}
}

void SLL::Insert(int num)
{
	//새로운 노드를 만들다.
	node* newNode = new node(num);

	//헤드가 없으면
	if (pHead == nullptr)
	{
		pHead = newNode;
		return;
	}
	else
	{
		node* temp = pHead;
		//순회할 포인터가 nullptr이 아닐떄까지 돌면서
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
	//다음 노드를 가리키는 포인터
	node* pNext = pHead->pNext;
	// 첫번쟤 노드가 삭제하려는 노드라면

	if (pCurrent->value == num)
	{
		pHead = pNext; // phead를 다음 노드로 이동
		delete pCurrent;
		return;
	}
	while (pNext->value!=num)
	{
		pCurrent = pCurrent->pNext;
		// 다음 노드를 그 다음 노드로 이동
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
