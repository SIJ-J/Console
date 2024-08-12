#include <iostream>

// �θ� - �ڽ�
// Ŭ�������� ��Ӱ��踦 ���� ���� ������ ����� ���� Ŭ������ ���� �־� �ٸ� Ŭ������ Ȯ���� �� �ְ� �ϴ°��� ����
// ���� Ŭ�������� ���� ����� �Ǵ� ������ ���� �ڵ带 ������ �ִٸ� �ش� �ڵ带 ���� Ŭ������ ���� ���°��� ����ϴ°� ����.

//EX
// Player
// -> �̸�, ���ݷ�, ���� �� �Ӽ�
// �����ϱ�, ��ų, �������� ��� �ൿ
// monster
// -> �̸�, ���ݷ�, ���� �� �Ӽ�
// �����ϱ�, ��ų, �������� ��� �ൿ


using std::cout;
using std::cin;
using std::endl;
#pragma region ����� ���� ���� ��
class Warror
{
	std::string name;
	int health;
public:
	Warror(const std::string& n, const int h):name(n),health(h){}

	void attck()
	{
		cout << name << "��(��) Į�� �ֵθ��ϴ�" << endl;

	}
	void TakeDamage(const int damage)
	{
		health -= damage;
		cout << name << "�̰�" << damage << "��ŭ ������ ����! ü�� : " << health << endl;
	}
};

class Mage
{
	std::string name;
	int health;
public:
	Mage(const std::string& n, const int h) : name(n), health(h){}

	void CastSkill()
	{
		cout << name << "��(��) ���� ����" << endl;
	}
	void TakeDamage(const int damage)
	{
		health -= damage;
		cout << name << "�̰�" << damage << "��ŭ ������ ����! ü�� : " << health << endl;
	}
};

#pragma endregion

#pragma region ����� ���� ��

class Character
{
public:
	std::string name;
	int health;

	Character(const std::string& n, const int h): name(n),health(h){}

	void TakeDamage(const int damage)
	{
		health -= damage;
		cout << name << "��(��)" << damage << "��ŭ ������ ����! ü�� : " << endl;
	}
};
class Warrior : public Character
{public:
	//Character(n,h) :  �ڽ� Ŭ������ Warrior���� �θ� Ŭ������ Character�� �����ڸ� ȣ��
	// �θ� -> �ڽ�

	Warrior(const std:: string& n, const int h ): Character(n,h){}
	void Attack()
	{
		cout << name << "�̰� Į�� �ֵθ��ϴ�" << endl;
	}
};

class Mage : public Character
{
public:
	Mage(const std::string& n, const int h) : Character(n,h){}

	void CastSkill()
	{
		cout << name << "��(��) ���� ����" << endl;
	}
	
};

#pragma endregion

class Wapon{};

//is-a
class Sw : public Wapon
{
public:
	void use()
	{
		cout << "���" << endl;

	}
};


//has-a
class Cahr
{
	Sw* s;
public:
	void Attack()
	{
		s->use();
	}
};


//�θ� �ڽ�
class Parent
{public:

	int publicValue;
	int protectedValue;
	int privateValue;

	Parent() :publicValue(1), protectedValue(2), privateValue(3){}
	
	void ShowValyes() 
	{
		cout << "�θ� Ŭ���� public�� : " << publicValue << endl;
		cout << "�θ� Ŭ���� public�� : " << protectedValue << endl;
		cout << "�θ� Ŭ���� public�� : " << privateValue << endl;
	}

protected:

	int publicValue;

private:

	int privateValue;

};
//��� ���
//�ڽ� : �������������� �θ�Ŭ����
class ChildPublic : public Parent
{
public:
	void ShowValue()
	{
		cout << "�ڽ� Ŭ���� public�� : " << publicValue << endl;
		cout << "�ڽ� Ŭ���� protected�� :" << protectedValue << endl;
		// �ڽ� ���ٺҰ� 
		// cout << " �ڽ� Ŭ���� private�� : " << privateValye << endl;
	}
};

class ChiledProtected : protected Parent
{
public:
	void ShowValue()
	{
		cout << "�ڽ� Ŭ���� public�� : " << publicValue << endl;
		cout << "�ڽ� Ŭ���� protected�� :" << protectedValue << endl;
		// �ڽ� ���ٺҰ� 
		// cout << " �ڽ� Ŭ���� private�� : " << privateValye << endl;
	}
};

class ChuledPrivate : private Parent
{
public:
	void ShowValue()
	{
		cout << "�ڽ� Ŭ���� public�� : " << publicValue << endl;
		cout << "�ڽ� Ŭ���� protected�� :" << protectedValue << endl;
		// �ڽ� ���ٺҰ� 
		// cout << " �ڽ� Ŭ���� private�� : " << privateValye << endl;
	}
};

int main()
{
	ChildPublic c1;
	c1.ShowValyes();
	cout << c1.publicValue << endl;
	

	cout << c1.protectedValue << endl;
	ChiledProtected c2;



	/*
	 public ���:
	 �θ� Ŭ������ public ����� �ڽ� Ŭ������ public ����
	 �θ� Ŭ������ protrcted ����� �ڽ� Ŭ������ protected��
	 �θ� Ŭ������ private ����� �ڽ� Ŭ���� ����x
	
	 protected ���:
	*/


	Warrior* w = new Warrior("����", 100);
	w->Attack(); //�ڽĿ� ���ǵ� �Լ�
	w->TakeDamage(10); //  �θ�

	Mage* m= new Mage("������", 100);
	m->CastSkill();
	m->TakeDamage(22);
}