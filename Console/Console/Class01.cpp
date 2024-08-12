#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

/*
	class
	- ��ü���� ���α׷���(OOP)?
	 - �츮�� ����ִ� �������谡 ��ü��� �����Ǿ� �ִ°�ó�� ����Ʈ��� ��ü�� �����ϴ� ���
	 - ���, TV, ��Ź��, ����� ��� ���� ��ü�� ������
	 - ������ ��ɵ��� �����ϰ� �ٸ� ��ü��� ��ȣ�ۿ� ��

	�� ��ü
	 - Ŭ���� -> 'Ʋ'�̳� '���赵' -> ��ü�� �����ϴ� Ʋ�̳� ���赵
	 - ��ü�� ���赵�� ������� ��üȭ ��Ű�� ��

*/

// ����ü
struct Circle
{
//public:  �Ϲ������� �� ����
	int radius;
	string color;

	double calArea()
	{
		return 3.14 * radius * radius;
	}
};

// Ŭ����
class Circle1
{
//private:  �Ϲ������� �� ����
	int radius = 1;
	string color;

	double calArea()
	{
		return 3.14 * radius * radius;
	}
};

class Student
{
private:

public:
	void Print()
	{
		cout << "Student class ����Ʈ �Լ�";
	}
	void Print(int a, int b)
	{

	}
	void Print(string str = "����Ʈ �Ű�����")
	{
		cout << str << endl;
	}

	// Ŭ���� ���ο� �Լ� ������ ����
	int Sum(int a, int b);
};

class Rectangle
{
public:
	void Extent()
	{
		cout << "�� �簢���� ���̴� : " << width * height << endl;
	}
	
private:
	int width = 10;
	int height = 20;
};

int main()
{
	// ����ü
	Circle c;
	c.radius = 5;
	 
	// Ŭ����
	Circle1 c1;
	//c1.radius = 5;  // ������ X

	/*
		����üȭ Ŭ������ ���̴� ����Ʈ �������������ڰ� �ٸ���.
		private, protected, public
		 - private : Ŭ���� ���ο����� ��������
		  - ���ܾ��� �������
		 - public : ����Լ� , ������, �Ҹ���

		  ��������		Ŭ��������		Ŭ�����ܺ�		���Ŭ����
		  private			o				x				x
		  public			o				o				o
		  protected			o				x				o
	*/
	
	Rectangle rec;
	rec.Extent();
}

int Student::Sum(int a, int b)
{
	return 0;
}

/*
	�簢���� Ŭ������ ��������
	- ����Լ��δ� �簢���� ���̸� ��� ���
*/