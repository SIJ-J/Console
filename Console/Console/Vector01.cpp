#include <iostream>
#include<vector>
#include<memory> // ����Ʈ ������ ��� 

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
		cout << "�̸�" << name << " ���ݷ� : " << damage << endl;
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

	cout << "vec�� capacity :" << vec.capacity() << endl; //6
	vec.clear();
	cout << "vec�� capacity(Ŭ������) :" << vec.capacity() << endl; //6

	vector<int>().swap(vec);
	cout << "vec�� capacity(���� ��) :" << vec.capacity() << endl; //6

	vector<int>myVec = { 1,2,3,4,5,6 };
	ShowPrintValue(myVec);

	vector<Weapon>weapon;

	weapon.push_back(Weapon("���", 50));
	weapon.push_back(Weapon("Ȱ", 10));
	weapon.push_back(Weapon("�ܰ�", 100));
	weapon.push_back(Weapon("�����", 600));

	for (const auto& w : weapon)
	{
		w.Print();
	}
	vector<Weapon*>weapon1;
	weapon1.push_back(new Weapon("���", 50));
	weapon1.push_back(new Weapon("Ȱ", 10));
	weapon1.push_back(new Weapon("�ܰ�", 100));
	weapon1.push_back(new Weapon("�����", 600));

	for (auto& w : weapon1)
	{
		delete w;
	}

	
	//����Ʈ ������ (auto_ptr,unique_ptr,shared,shared_ptr,weak_ptr)
	vector<std::unique_ptr<Weapon >> weapon2;
	// std::make_unique;

	/*
		1. �ƹ��ų� Ŭ���� ���� ���Ϳ� �����ϰ� ����ϱ�(�ǽ�)
		2. �����ý���
		�� shop, item
		3. ĳ���� -> �κ��丮,
		4. ��� �ȱ� ���
		5. ������ɰ�Ż�� ���
		6. ���� ����
		7. ���� â Ȯ��
	
	*/

}