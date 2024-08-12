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
	
	cout << "크기 입력 : ";
	cin >> input;

	Student* sArr = new Student[input];

	/*
	cout << sArr << endl;
	sArr
	cout << sArr << endl;
	*/

	while (true)
	{
		cout << "추가(a), 출력(p), 종료(q)" << endl;
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
	
	cout << "추가할 이름 입력 : ";
	getline(cin, arr[count].name);
	cout << "추가할 학생id : ";
	cin >> arr[count].id;
	cout << "추가할 학생 나이 : ";
	cin >> arr[count].age;
	count++;

	cout << "추가 되었습니다." << endl;
}

void Print(Student* arr, int& count)
{
	for (int i = 0; i <= count; i++)
	{
		cout << "==================================" << endl;
		cout << "학생 이름 : " << arr[i].name << endl;
		cout << "학생 id : " << arr[i].id << endl;
		cout << "학생 나이 : " << arr[i].age << endl;
		cout << "==================================" << endl;
	}
}

/*
	과제 3.
	구조체를 활용한 학생정보 출력하기
	 - 학생정보를 출력하는 함수
	 - 학생정보를 추가하는 함수

	조건 ) 매개변수로 구조체받아 쓰기 ( 복사X , 참조O )
	ex) void print(Student & * s)
	{

	}
*/