#include <iostream>
#include <time.h>

using std::cout;
using std::cin;
using std::endl;

// 배열
// 같은 자료형을 가진 연속된 메모리 공간으로 이루어진 자료구조
// 이런 배열은 같은 자료형을 가진 변수들이 여러개 필요할 때 사용
// 많은 양의 데이터를 처리할 때 유용
int main()
{

	int 나는변수 = 10; // <- 쓸수있는데 이렇게 사용하면 안된다.

	// 배열 선언방법
	// 자료형 배열이름[배열길이];

#pragma region 초기화 방법
	/*
		배열 초기화 방법
		
		1. 크기를 명시하고 초기화
		 - int arr[4] = { 1, 2, 3, 4 };

		2. 배열의 크기를 생략하고 초기화
		 - int arr[] = { 1, 2, 3, 4 };

		3. 크기를 명시적으로 지정하고 일부 요소만 초기화
		 - int arr[5] = { 1, 2, 3 };		나머지 요소는 0으로 자동 초기화
	
		4. 모든 요소를 초기화 하지 않음
		 - int arr[5] = {};

		배열 인덱스는 0 부터 시작한다.
		배열은 반복문과 많이 사용된다.
	*/

#pragma endregion

#pragma region 1차원 배열
	int arr[4] = { 1,2,3,4 };

	cout << "arr[0]번째 데이터 : " << arr[0] << endl;
	cout << "arr[1]번째 데이터 : " << arr[1] << endl;
	cout << "arr[2]번째 데이터 : " << arr[2] << endl;
	cout << "arr[3]번째 데이터 : " << arr[3] << endl;
	// cout << "arr[4]번째 데이터 : " << arr[4] << endl;		쓰레기값 출력

	cout << "======================================" << endl;

	cout << arr << endl;			// 배열 이름주소
	cout << &arr[0] << endl;		// 배열 0번째 인덱스 주소
	cout << &arr[1] << endl;
	cout << &arr[2] << endl;
	cout << &arr[3] << endl;

	cout << "for문을 이용한 배열 출력" << endl;
	for (size_t i = 0; i < 4; i++)
	{
		cout << arr[i] << endl;
	}

	int number[5];
	for (size_t i = 0; i < 5; i++)		// for문으로 초기화 진행
	{
		number[i] = i + 1;

		/*
			number[0] = 0 + 1;
			number[1] = 1 + 1;
			number[2] = 2 + 1;
			number[3] = 3 + 1;
			number[4] = 4 + 1;
		*/
	}
	// 만약 10명의 학생성적을 입력 -> 배열에 저장하고 -> 총점과 평균을 구하려면?
	// 구현이 힘들면 의사코드(손 코딩)를 작성
	
	// 점수를 입력받을 배열을 선언
	int grade[10];
	// 점수 합계용
	int total = 0;
	float averige = 0;

	// 입력

	cout << "10명의 학생 성적을 입력" << endl;
	for (size_t i = 0; i < 10; i++)
	{
		cout << i + 1 << "번째 : ";
		cin >> grade[i];
		//total += grade[i];
	}
	// 연산하는 부분
	for (size_t i = 0; i < 10; i++)
	{
		total += grade[i];
	}
	// 결과(출력)
	cout << "총점 : " << total << "\n평균 : " << total / 10.0 << endl;

	//averige = total / 10.0;
	//cout << "총점 : " << total << "\n평균 : " << averige << endl;

#pragma endregion


#pragma region 2차원 배열
	int arr1[4][3];

	arr1[0][0] = 1;
	arr1[0][1] = 2;
	arr1[0][2] = 3;

	arr1[1][0] = 4;
	arr1[1][1] = 5;
	arr1[1][2] = 6;

	arr1[2][0] = 7;
	arr1[2][1] = 8;
	arr1[2][2] = 9;

	arr1[3][0] = 10;
	arr1[3][1] = 11;
	arr1[3][2] = 12;

	cout << endl << endl;

	cout << "0행 출력 결과 " << &arr1[0][0] << " , " << &arr1[0][1] << " , " << &arr1[0][2];
	cout << "0행 출력 결과 " << &arr1[1][0] << " , " << &arr1[1][1] << " , " << &arr1[1][2];
	cout << "0행 출력 결과 " << arr1[2][0] << " , " << arr1[2][1] << " , " << arr1[2][2];
	cout << "0행 출력 결과 " << arr1[3][0] << " , " << arr1[3][1] << " , " << arr1[3][2];

	for (size_t i = 0; i < 4; i++)
	{
		for (size_t k = 0; k < 3; k++)
		{
			cout << arr1[i][k] << endl;
		}
	}

#pragma endregion

	// 1. 지금부터 4교시 종료 까지
	// 배열 활용하기
	// 인풋을 받아서 입력받은 숫자의 구구단 계산 결과를 배열에 저장하고 출력하기

	int gugu[9];
	int input;

	// 입력 받고
	cout << "출력할 구구단 숫자 입력 : ";
	cin >> input;
	// for문 돌려서 구구단 계산 결과를 배열에 저장
	for (int i = 0; i < 9; i++)
	{
		gugu[i] = input * (i + 1);
		cout << input << " * " << i + 1 << " = " << input * ( i + 1 ) << "	gugu[" << i << "] = " << gugu[i] << endl;
		//printf("%d * %d = %d	gugu[%d] = %d\n", input, i + 1, input * (i + 1), i, gugu[i]);
	}
	cout << "========================================" << endl;
	
	/*

	for (size_t i = 0; i < 9; i++)
	{
		cout << "gugu[" << i << "] = " << gugu[i] << endl;
	}
	
	*/


	// 2. 다음 표에서 가로 합과 세로합, 모든 수의 합을 구해라
	/*
		값은 랜덤하게 뽑는다.

		90 78 77 66 55
		90 78 77 66 55
		90 78 77 66 55
		90 78 77 66 55

	*/
	cout << "\n\n";

	srand(time(NULL));

	int cube[5][5];
	int totalRaw[5];
	int totalCol[5] = {};

	int raw = 0;
	int col = 0;
	int total = 0;

	for (size_t i = 0; i < 5; i++)					
	{
		raw = 0;								// raw를 0으로 초기화
		for (size_t k = 0; k < 5; k++)
		{
			cube[i][k] = rand() % 100 + 1;		// 1 ~ 100 사이의 수 저장 
			cout << cube[i][k] << "	";			// 출력
			raw += cube[i][k];					// 같은 행에 저장된 값들을 더해 raw에 저장
			total += cube[i][k];				// cube배열의 모든 요소의 수를 더해 total에 저장
		}
		cout << '\n';
		totalRaw[i] = raw;						// totalRaw배열 인덱스마다 위에서 합한 raw를 일대일 대입
	}
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t k = 0; k < 5; k++)
		{
			totalCol[i] += cube[k][i];			// cube[k][i]의 k만 바꿔가며 totalCol배열 인덱스에 더하기
		}
	}
	cout << "========================================" << endl;

	// 출력
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t k = 0; k < 5; k++)
		{
			cout << cube[i][k] << "	";
		}
		cout << "= " << totalRaw[i] << endl;
	}
	cout << '\n';
	for (size_t i = 0; i < 5; i++)
	{
		cout << totalCol[i] << "	";
	}
	cout << "\n\n";
	cout << "모든 수의 합 : " << total;

}

/*
	오늘의 과제.
	player vs computer

	1. computer는 임의의 숫자 3개를 뽑는다.
	2. player는 차례대로 숫자 3개를 입력한다.
	3. 비교

	C		5, 3, 1
	입력		1, 2, 3		0 strike 2 ball 자리가 다르고 숫자가 동일하다면 ball, 
										자리도 같고 숫자도 동일하면 strike

	종료 조건
	난수발생 범위 1 ~ 10
	1. 유저가 범위 밖의 값 입력시 다시 입력하라고 함(예외처리)
	2. 3strike 이면 out++
	3. 3out 이면 종료
*/


// 원더피플 허민
// 프로그래머스 3단계 문제까지 꾸준히