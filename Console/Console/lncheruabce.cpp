#include <iostream>

// 부모 - 자식
// 클래스간에 상속관계를 맺을 때는 공통의 기능을 상위 클래스에 묶어 넣어 다른 클래스로 확장할 수 있게 하는것이 목적
// 만약 클래스들이 서로 비슷한 또는 완전히 같은 코드를 가지고 있다면 해당 코드를 상위 클래스로 묶어 내는것을 고려하는게 좋다.

//EX
// Player
// -> 이름, 공격력, 방어력 등 속성
// 공격하기, 스킬, 도망가기 등등 행동
// monster
// -> 이름, 공격력, 방어력 등 속성
// 공격하기, 스킬, 도망가기 등등 행동


using std::cout;
using std::cin;
using std::endl;
#pragma region 상속을 쓰지 않을 때
class Warror
{
	std::string name;
	int health;
public:
	Warror(const std::string& n, const int h):name(n),health(h){}

	void attck()
	{
		cout << name << "이(가) 칼을 휘두릅니다" << endl;

	}
	void TakeDamage(const int damage)
	{
		health -= damage;
		cout << name << "이가" << damage << "만큼 데미지 먹음! 체력 : " << health << endl;
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
		cout << name << "이(가) 얼음 공격" << endl;
	}
	void TakeDamage(const int damage)
	{
		health -= damage;
		cout << name << "이가" << damage << "만큼 데미지 먹음! 체력 : " << health << endl;
	}
};

#pragma endregion

#pragma region 상속을 썻을 떄

class Character
{
public:
	std::string name;
	int health;

	Character(const std::string& n, const int h): name(n),health(h){}

	void TakeDamage(const int damage)
	{
		health -= damage;
		cout << name << "이(가)" << damage << "만큼 데미지 먹음! 체력 : " << endl;
	}
};
class Warrior : public Character
{public:
	//Character(n,h) :  자식 클래스인 Warrior에서 부모 클래스인 Character의 생성자를 호출
	// 부모 -> 자식

	Warrior(const std:: string& n, const int h ): Character(n,h){}
	void Attack()
	{
		cout << name << "이가 칼을 휘두릅니다" << endl;
	}
};

class Mage : public Character
{
public:
	Mage(const std::string& n, const int h) : Character(n,h){}

	void CastSkill()
	{
		cout << name << "이(가) 얼음 공격" << endl;
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
		cout << "사용" << endl;

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


//부모 자식
class Parent
{public:

	int publicValue;
	int protectedValue;
	int privateValue;

	Parent() :publicValue(1), protectedValue(2), privateValue(3){}
	
	void ShowValyes() 
	{
		cout << "부모 클래스 public값 : " << publicValue << endl;
		cout << "부모 클래스 public값 : " << protectedValue << endl;
		cout << "부모 클래스 public값 : " << privateValue << endl;
	}

protected:

	int publicValue;

private:

	int privateValue;

};
//상속 방법
//자식 : 접근제어지시자 부모클래스
class ChildPublic : public Parent
{
public:
	void ShowValue()
	{
		cout << "자식 클래스 public값 : " << publicValue << endl;
		cout << "자식 클래스 protected값 :" << protectedValue << endl;
		// 자식 접근불가 
		// cout << " 자식 클래스 private값 : " << privateValye << endl;
	}
};

class ChiledProtected : protected Parent
{
public:
	void ShowValue()
	{
		cout << "자식 클래스 public값 : " << publicValue << endl;
		cout << "자식 클래스 protected값 :" << protectedValue << endl;
		// 자식 접근불가 
		// cout << " 자식 클래스 private값 : " << privateValye << endl;
	}
};

class ChuledPrivate : private Parent
{
public:
	void ShowValue()
	{
		cout << "자식 클래스 public값 : " << publicValue << endl;
		cout << "자식 클래스 protected값 :" << protectedValue << endl;
		// 자식 접근불가 
		// cout << " 자식 클래스 private값 : " << privateValye << endl;
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
	 public 상속:
	 부모 클래스의 public 멤버는 자식 클래스의 public 으로
	 부모 클래스의 protrcted 멤버는 자식 클래스의 protected로
	 부모 클래스의 private 멤버는 자식 클래스 접근x
	
	 protected 상속:
	*/


	Warrior* w = new Warrior("전사", 100);
	w->Attack(); //자식에 정의된 함수
	w->TakeDamage(10); //  부모꺼

	Mage* m= new Mage("마법사", 100);
	m->CastSkill();
	m->TakeDamage(22);
}