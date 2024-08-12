#include <iostream>
#include <time.h>

// 편하다. -> 무겁다.
using namespace std;
//using 지시자 : 지정된 네임스페이스의 모든 명칭을 이 선언이 있는 영역으로
//				가져와 소속 지정없이 사용하겠다.

using std::cin;
using std::cout;
using std::endl;

namespace A 
{
	namespace B 
	{
		namespace C 
		{
			int EnemyAttack;
		}
	}
}

namespace ABC = A::B::C;

#pragma region 자료형 + 변수 선언
/*
자료형
 -변수의 종류를 의미하며 기초 자료형(Data Type)이라고 생각하면 된다.

- 변수란?

- 변할 수 있는 숫자나 데이터를 의미
- 컴퓨터로 하여금 값을 저장할 수 있는 메모리 공간에 붙는 이름이 되겠다.
- 변수를 이용하면 특정 값을 저장 후 해당 값을 이용한 여러가지 연산이 가능하다. (혹은 처리할 수 있다.)

-자료형의 종류 (C, C++)

- 정수형 (소수점이 없는 수를 표현하기 위한 자료형)
- 실수형 (소수점이 존재하는 수를 표현하기 위한 자료형)
- 문자형 (문자를 표현하기 위한 자료형)
- 논리형 (참 / 거짓을 판별하는 자료형)

- 자료형의 종류 (정수형)

- short			(2 bite)	범위: 32767
- int			(4 bite)	범위: 약 +-21억
★ - long		(4 ~ 8 bite)확장성을 고려해서 나온 자료형 32bit운영체제에선 4bite / 64bit운영체제에서는 8bite
- long long		(8 bite)

- 자료형의 종류 (실수형)

- float		(4 bite) 6 ~ 8자리(0.0000000) 컴파일러버전 따라 바뀜
- double	(8 bite) 14 ~ 16자리

※ decimal  언리얼가면 있는 자료형 (쓰지마라)


- 자료형의 종류 (문자형)

- char		(1 bite)

- 자료형의 종류 (논리형)

- bool		(1 bite -> 0(거짓) / 1(참)을 나타내는 자료형)
 - bool 자료형은 정수가 와야 할 위치에 오게 되면 각각 1과 0으로 반환이 될뿐 각각 정수를 의미하는게 아니다.

- 기본적으로 C언어는 논리형에 해당하는 참 / 거짓이라는 자료형이 별도로 존재하지 않았다.
 그렇기 때문에 정수 0을 거짓 / 0을 제외한 정수는 참으로 인지 시켰다.
 현재는 C언어에도 bool 자료형이 존재하니 헷갈리지 말 것 #include <stdbool.h>

- C++로 넘어 오면서 참 또는 거짓을 나타내는 키워드를 추가했고 이게 true / false가 되겠다.

- 그리고 C / C++ 자료형은 기본적으로 음수를 표현하는것이 가능하지만 경우에 따라 음수를 표현하지 않는 대신에 양수를 좀더 크게
표현하는 방법이있다.(signed(음) / unsigned(양))

- 자료형의 크기

1. 정수형

자료형 타입			크기				범위								
short				2bite		-32767 ~ 32767								
unsigned short		2bite		0 ~ 65535				
int					4bite		-21억 ~ 21억								
unsigned int		4bite		0 ~ 약 43억								
long				4bite(32)	-21억 ~ 21억		
																
2. 실수형	
float				4bite		소수점 아래 6 or 8
double				8bite		소수점 아래 14 or 16

3. 문자형

char				1bite		정수를 담는다. (문자)
usigned char		1bite		양의 정수를 담는다. (문자)

4. 논리형

bool				1bite		0 (거짓) / 1(참)



○ 변수 선언
 - 변수 선언이란?
  값을 저장할 수 있는 메모리 공간에 이름을 정의하는걸 뜻한다.

 EX: 기본 형식 -> 변수 형태(종류) 변수명
  - int number;

 EX: int number = 20;
 - 변수의 선언으로 인해서 number 라는 이름으로 메모리 공간이 할당이 되었다.
 - int number = 20; 은 단순히 number에 20을 저장하는게 아닌 number가 의미하는 메모리 공간에 20을 넣어라 라는 의미.
*/



#pragma endregion


void main()
{
	A::B::C::EnemyAttack;
	ABC::EnemyAttack;

	// cout << endl;
	
	// 효율적이다. -> 개발자가 고통 받는다.
	// std::cout << std::endl;

	// 1번 케이스
	// int EnemyAttack;	// 같은이름으로 변수 선언했을때 문제 찾아보기
	int EnemyAttack;	// 힌트 할당은된다. 유도리 없다.

	int TestNumA = true;
	int TestNumB = false;
	int TestResult = TestNumA + TestNumB;

	
	cout << "boolean: " << TestResult << endl << endl;

	// 변수 초기화 -> 다양한 방법이 존재한다.
	
	// 선언 이후 할당
	// A : 방어적 프로그래밍
	int Num0;	// 아무것도 안넣으면 시스템 내부적으로 쓰레기값 저장
	Num0 = 10;

	// 변수 초기화
	// B : 공격적 프로그래밍
	int Num1 = 3;
	int Num2 = 6;
	
	
	int Total;

	int Num3;
	int Num4;
	int Num5;
	int Num6, Num7, Num8;
	Num6 = Num7 = Num8 = 100;

	// sizeof() : 키워드의 한 종류로 변수 또는 자료형의 크기를 계산하는 것이 가능하다.
	cout << "정수 사이즈 : " << sizeof(1) << endl;
	cout << "정수 사이즈 : " << sizeof(2) << endl;
	cout << "true 사이즈 : " << sizeof(true) << endl;
	cout << "false 사이즈 : " << sizeof(false) << endl;

	cout << endl;

	int nValue = 0;

	// C++
	cout << "숫자 입력 " << endl;
	cin >> nValue;

	cout << "내가 입력한 숫자: " << nValue << endl;

	cout << endl;

	// C
	printf("정수 입력: ");
	scanf_s("%d", &nValue);
	
	cout << endl;

	short ValueA = 10;
	int ValueB = 20;
	long ValueC = 30;
	long long ValueD = 40;

	cout << "C++ Short: " << ValueA << ", " << "사이즈: " << sizeof(ValueA) << endl;
	cout << "C++ int: " << ValueB << ", " << "사이즈: " << sizeof(ValueB) << endl;
	cout << "C++ long: " << ValueC << ", " << "사이즈: " << sizeof(ValueC) << endl;
	cout << "C++ long long: " << ValueD << ", " << "사이즈: " << sizeof(ValueD) << endl << endl;

	printf("C언어 short: %d, %d \n", ValueA, sizeof(ValueA));
	printf("C언어 int: %d, %d \n", ValueB, sizeof(ValueB));
	printf("C언어 long: %ld, %ld \n", ValueC, sizeof(ValueC));
	printf("C언어 long long: %lld, %lld \n", ValueD, sizeof(ValueD));

	/*
		-변수 표기법
		
		1. 헝가리안 (언리얼에서 씀)
		 - 예전 절차지향적인 방식으로 코딩을 할때 많이 사용된 표기법
		  - 이 변수가 어떤 변수인지 알기 위하여 서로 약속하듯이 앞에 그 변수형태가 뜻하는 약자를 붙인다.
		  ex)
		  int num		<->	nNum;
		  float ValueA	<-> fValueA;
		  double ValueA <-> dbValueA;
		  char ValueA	<-> chValueA;
		  bool ValueA	<-> bValueA;

		  - 현재 네이티브 코딩 방식에서는 거의 채용되지 않는다.
			- 객체지향을 사용하기 때문

		2. 카멜식
		 - 객체지향적인 방식의 코딩으로 전환이 되면서 가독성을 챙긴 표기법
		 ex)
		 int playerselctnum	<->	playerSelectNum

		3. 파스칼 표기법 (Pascal case) (언리얼 기본표기법)

		 int playerselctnum	<->	PlayerSelectNum

		4. 스네이크

		 int playerselctnum	<->	Player_Select_Num


		5. 레스 (권장 안함, 중화권에서 많이 씀)

		 int playerselctnum	<->	PlSelN


		- 변수 이름의 특징
		 - 기본적으로 변수의 이름은 알파벳, 숫자, _로 구성된다.
		 - C언어는 대소문자를 구분하며 Num과 num은 다른 변수 이름이다.

		 a. 변수의 이름은 숫자로 시작할 수 없다.
		 b. 키워드 역시 변수 이름으로 사용할 수 없다.
		 c. 이름 사이에 공백이 삽입 될 수 없다.

		 int Num100;
		 int Num101;
		 int _Num102;
		 int 6Num103;	x 숫자로 시작
		 int 6Num;		x 숫자로 시작
		 int Num look;	x 공백 삽입
		 int bool;		x 키워드 

	*/

	// 랜덤시드 초기화
	srand(time(NULL));

	int numR;

	// 0, 1, 2, 3, 4
	numR = rand() % 5;		// rand 불완전난수
	cout << numR << endl;

	int weaponA = 0;
	weaponA = rand() % 6 + 20; // 0 ~ 5 + 20

	// 20 ~ 25
	cout << "이번에 나온 무기의 공격력 : " << weaponA << endl;

}