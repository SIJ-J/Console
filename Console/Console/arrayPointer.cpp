#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/*
	포인터 검색하면 나오는 키워드
		callbyReference
		callbyValue

	값에 의한 전달 ( callbyValue )
	 - 함수에 인수를 전달할때 인수의 값이 복사되어 함수의 매개변수로 전달
	   함수 내부에서 매개변수를 변경하더라도, 호출한 함수의 실제 인수는 변하지 않음
*/
void Value(int n); // callbyValue

void Address(int* n); // callbyReference
/*
	함수 호출시 인수로 변수의 주소를 전달하는 방식
	함수가 매개변수로 받은 참조를 통해 실제 인수의 값을 직접 수정가능
	함수 내부에서 매개변수의 값을 변경하면 호출한 함수의 실제 인수도 변경됨
	값을 복사하는 대신 주소를 전달 -> 메모리와 성능효율이 좋음
	구조체나 클래스를 callbyValue로 넘겨주면 그 크기만큼 새로 메모리에 할당하니까
*/
void Reference(int& n); // 별명..

// 예제
void Swap(int a, int b);
void SwapAddress(int* a, int* b);
void SwapReference(int& a, int& b);

int main()
{
#pragma region
	/*
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++)
	{
		cout << &arr[i] << endl;
	}
	*/

	/*
		배열과 포인터의 관계
		포인터로도 배열 원소에 접근이 가능함!
		배열 시작부부을 가리키는 포인터를 정의하고 포인터에	1을 더하면 그 다음원소를 가리킴
														2를 더하면 그 다음다음원소를 가리킴
	
	*/

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int* parr; // 정수형 포인터
	int i;

	parr = &arr[0];

	for (i = 0; i < 10; i++)
	{
		cout << "arr의 주소 :	" << &arr[i] << endl;
		cout << "parr의 값 :	" << parr + i << endl;
	}
	cout << endl;

#pragma endregion 배열과 포인터

	// callbyValue
	int num = 30;
	Value(num);
	cout << "num의 값 : " << num << endl;
	cout << "num의 주소 값 : " << &num << endl;

	cout << "=======================================" << endl;
	// callbyReference
	int num1 = 30;
	cout << "변경전 num1의 값 : " << num1 << endl;
	cout << "변경전 num1의 주소 값 : " << &num1 << endl;

	Address(&num1);
	cout << "num1의 값 : " << num1 << endl;
	cout << "num1의 주소 값 : " << &num1 << endl;

	int num2 = 30;
	Reference(num2);
	cout << "num2의 값 : " << num2 << endl;
	cout << "num2의 주소값 : " << &num2 << endl;


	// 예제
	int num3 = 10;
	int num4 = 20;

	cout << "스왑전 데이터 : " << num3 << " , " << num4 << endl;
	Swap(num3,num4);
	cout << "스왑후 데이터 : " << num3 << " , " << num4 << endl;
	cout << endl;

	int aNum1 = 10;
	int aNum2 = 20;
	cout << "스왑전 데이터 : " << aNum1 << " , " << aNum2 << endl;
	SwapAddress(&aNum1, &aNum2);
	cout << "스왑후 데이터 : " << aNum1 << " , " << aNum2 << endl;
	cout << endl;

	int rNum1 = 10;
	int rNum2 = 20;
	cout << "스왑전 데이터 : " << rNum1 << " , " << rNum2 << endl;
	SwapReference(rNum1, rNum2);
	cout << "스왑후 데이터 : " << rNum1 << " , " << rNum2 << endl;
	cout << endl;

	/*
		void Pointer
		 - 자료형이 없는 포인터 변수 
		 - 어떤 자료형의 주소든 저장이 가능함
		 - 값을 참조하려면 강제형변환 필요
	*/
	int* p = nullptr;
	void* vp = nullptr;
	int i = 3;
	double d = 3.1;

	vp = &i;
	vp = &d;
	
	// *vp = 10; 오류 : 값을 참조하려면 강제형변환 필요
	// (자료형*)을 붙임으로써 : 강제형변환
	*(double*)vp = 10.0;


	/*
	동적할당 - 런타임동안 메모리가 할당되는경우 (메모리 반납을 반드시 해야함)
	반납하지 않을 시 메모리 누수 -> 메모리가 부족해짐

	언어별 동적할당 키워드
	C - malloc
		free (메모리 해제 키워드)

	C++ - new
		  delete (메모리 해제 키워드)
	*/

	int* ptr = (int*)malloc(sizeof(int) * 10); // int형 변수 10개를 저장할수 있는 메모리크기를 할당해라
	int* ptr1 = new int(10); // int형 10을 초기화 하고 동적할당해라
	delete ptr, ptr1;

	int* array = new int[5]; // 5개의 int를 저장할 수 있는 배열을 동적할당

	for (int i = 0; i < 5; i++)
	{
		array[i] = i * 2;
	}
	delete[] array; // array포인터가 가리키는 메모리를 해제
	// 이때, array포인터는 댕글링 포인터 (dangling pointer)가 됨 (가리키는 주소에 아무런 데이터가 없는 경우)
	array = nullptr; // 예방법 중 하나 , 스마트 포인터라는 것도 있음
}

// callbyValue
void Value(int n)
{
	n = 10; 
	cout << "n의 값 : " << n << endl;
	cout << "n의 주소 값 : " << &n << endl;
}

// callbyReference
void Address(int* n)
{
	*n = 10;
	cout << "n의 값 : " << *n << endl;
	cout << "n의 주소 값 : " << &n << endl;
}

void Reference(int& n)
{
	n = 10;
	cout << "n의 값 : " << n << endl;
	cout << "n의 주소 값 : " << &n << endl;
}

// 예제
void Swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "Swap()함수 내부의 값 : ";
	cout << a << " , " << b << endl;
}
void SwapAddress(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

	cout << "SwapAddress()함수 내부의 값 : ";
	cout << *a << " , " << *b << endl;
}
void SwapReference(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "SwapReference()함수 내부의 값 : ";
	cout << a << " , " << b << endl;
}

/*
	과제 1.
	정적할당과 동적할당의 차이점
	조사해서 써오기(찾다보면 메모리 영역도 나옴)

	과제 2. 
	클래스란 무엇인가?

	과제 1, 2 는 무작위로 발표시킴

	과제 3.
	구조체를 활용한 학생정보 출력하기
	 - 학생정보를 출력하는 함수
	 - 학생정보를 추가하는 함수

	조건 ) 매개변수로 구조체받아 쓰기 ( 복사X , 참조O )
	ex) void print(Student & * s)
	{

	}
*/
