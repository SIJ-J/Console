#include <iostream>
#include <string>
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;

struct Student
{
	string name;
	int id;
	int age;
};

void Add(Student* arr,int& count);
void Print(Student* arr, int& count);

int main()
{
	int input = 0;
	int count = 0;
	
	cout << "ũ�� �Է� : ";
	cin >> input;

	Student* sArr = new Student[input];

	/*
	cout << sArr << endl;
	sArr
	cout << sArr << endl;
	*/

	while (true)
	{
		cout << "�߰�(a), ���(p), ����(q)" << endl;
		char input = _getch();
		if (input == 'a')
		{
			Add(sArr, count);
		}
		if (input == 'p')
		{
			Print(sArr, count);
		}
		if (input == 'q')
		{
			break;
		}
	}
}

void Add(Student* arr, int& count)
{
	
	cout << "�߰��� �̸� �Է� : ";
	getline(cin, arr[count].name);
	cout << "�߰��� �л�id : ";
	cin >> arr[count].id;
	cout << "�߰��� �л� ���� : ";
	cin >> arr[count].age;
	count++;

	cout << "�߰� �Ǿ����ϴ�." << endl;
}

void Print(Student* arr, int& count)
{
	for (int i = 0; i <= count; i++)
	{
		cout << "==================================" << endl;
		cout << "�л� �̸� : " << arr[i].name << endl;
		cout << "�л� id : " << arr[i].id << endl;
		cout << "�л� ���� : " << arr[i].age << endl;
		cout << "==================================" << endl;
	}
}

/*
	���� 3.
	����ü�� Ȱ���� �л����� ����ϱ�
	 - �л������� ����ϴ� �Լ�
	 - �л������� �߰��ϴ� �Լ�

	���� ) �Ű������� ����ü�޾� ���� ( ����X , ����O )
	ex) void print(Student & * s)
	{

	}
*/