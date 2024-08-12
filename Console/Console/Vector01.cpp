#include <iostream>
#include<vector>
#include<memory> // 스마트 포인터 헤더 

using std::cout;
using std::cin;
using std::endl;
using std::vector;


class Weapon
{
public:
	Weapon(const std::string name, int damage)
		:name(name),damage(damage){}

	void Print()const
	{
		cout << "이름" << name << " 공격력 : " << damage << endl;
	}
private:

	std::string name;
	int damage;
};

void ShowPrintValue(vector<int>vec)
{
	for (int i : vec)
	{
		cout << i << endl;
	}
}

int main()
{
	vector<int>vec;
	vec.push_back(1);
	vec.push_back(1);
	vec.push_back(1);
	vec.push_back(1);
	vec.push_back(1);
	vec.push_back(1);

	cout << "vec의 capacity :" << vec.capacity() << endl; //6
	vec.clear();
	cout << "vec의 capacity(클리어후) :" << vec.capacity() << endl; //6

	vector<int>().swap(vec);
	cout << "vec의 capacity(스왑 후) :" << vec.capacity() << endl; //6

	vector<int>myVec = { 1,2,3,4,5,6 };
	ShowPrintValue(myVec);

	vector<Weapon>weapon;

	weapon.push_back(Weapon("장검", 50));
	weapon.push_back(Weapon("활", 10));
	weapon.push_back(Weapon("단검", 100));
	weapon.push_back(Weapon("집행검", 600));

	for (const auto& w : weapon)
	{
		w.Print();
	}
	vector<Weapon*>weapon1;
	weapon1.push_back(new Weapon("장검", 50));
	weapon1.push_back(new Weapon("활", 10));
	weapon1.push_back(new Weapon("단검", 100));
	weapon1.push_back(new Weapon("집행검", 600));

	for (auto& w : weapon1)
	{
		delete w;
	}

	
	//스마트 포인터 (auto_ptr,unique_ptr,shared,shared_ptr,weak_ptr)
	vector<std::unique_ptr<Weapon >> weapon2;
	// std::make_unique;

	/*
		1. 아무거나 클래스 만들어서 벡터에 저장하고 출력하기(실습)
		2. 상점시스템
		ㄴ shop, item
		3. 캐릭터 -> 인벤토리,
		4. 사고 팔기 기능
		5. 장착기능과탈착 기능
		6. 수량 제한
		7. 스탯 창 확인
	
	*/

}