#include <iostream>
#include <time.h>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;



void main()
{
	
#pragma region 과제 1.
	srand(time(NULL));

	int comNumber;
	int myNumber;

	cout << "[가위바위보 게임]" << endl << endl;

	for (int i = 0; i < 5; i++)
	{
		comNumber = rand() % 3;

		cout << i + 1 << "번째 판" << endl;
		cout << "치트: 컴퓨터의 선택 (" << comNumber << ")" << endl;
		cout << "가위(0), 바위(1), 보(2) 중에 선택하세요. ";
		cin >> myNumber;

		if (myNumber < 0 || myNumber > 2)
		{
			cout << "잘못된 선택입니다" << endl;
		}
		else if (comNumber == myNumber)
		{
			cout << "비겻습니다." << endl;
		}
		else if ((comNumber+1)%3 == myNumber)
		{
			cout << "[플레이어] 승리." << endl;
		}
		else
		{
			cout << "[컴퓨터] 승리." << endl;
		}
		cout << endl;
	}
	cout << "게임 종료" << endl;
	cout << "===================================" << endl << endl;

#pragma endregion


#pragma region 과제 2.

	/*
		1	  31
		2	  29
		3	  31
		4	  30
		5	  31
		6	  30
		7	  31
		8	  31
		9	  30
		10	  31
		11	  30
		12	  31
	*/

	int month;

	cout << "[일수 출력기]" << endl << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "회차" << endl;
		cout << "출력을 원하는 달(1 ~ 12)을 입력하세요 : ";
		cin >> month;

		switch (month)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout << month << "월은 31일 까지 있습니다." << endl;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			cout << month << "월은 30일 까지 있습니다." << endl;
			break;
		case 2:
			cout << month << "월은 29일 까지 있습니다." << endl;
			break;
		default:
			cout << "1월 부터 12월 중에 골라주세요" << endl;
			break;
		}
		cout << endl;

	}

#pragma endregion

}

/*
	과제1. 가위바위보 게임

	- if문을 사용해서 만든다.
	 - 스위치문 사용금지

	- 게임의 진행 횟수는 총 5판
	 - 이후는 게임 종료

	 - 필수 : 치트

	 ※ 팁을 주자면 코드를 최대한 간결하게 해온게 좋다.


	 과제2. 일수 출력기

	 - if문과 switch문 중에 본인이 판단해 효율적인 것을 선택해서 만든다.

	 - 시작하면 사용자의 입력을 받고 입력한 숫자에 따라 ??일 인지 출력

	 ex) 4를 입력시 -> 4월은 30일까지 있습니다. -> 다시 입력 커맨드 활성화

	 - 1월부터 12월까지 확인이 가능해야 하고 이외의 숫자는 예외처리를 진행한다.

	 - 총 5번을 입력하면 프로그램 종료

	 도전 과제. 함수와 포인터를 활용한 가위바위보


	void* Function(int* a, int** b, int*** c)
	{
		// 내용 작성
	}
	void main()
	{
		// 이외의 코드가 있으면 안된다.
		Function(a, b, c);
	}

	한줄 조사. 함수
	- 노트에 적어온다.

	-비유할 것 생각해 온다. ex) 함수는 000이다. 금속활자다.

*/