#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	// 'a' 싱글쿼터는 문자
	// "a" 더블쿼터 문자열
	
	/*
	
	char C = 'a';		// 아스키 코드값 97 = a
	char h[3] = "ㅁ";	// 왜 "ㅁ"이 const char [4] 크기일까? <- '\0' (널문자) 가 들어가서  (ㅁ이 3byte 인코딩 방식 차이)

	// 문자배열
	char str[] = "Hello world";
	cout << str << endl;
	cout << sizeof(str) << endl;

	*/

	char str[50];

	strcpy_s(str, "Hello world");		// "Hello world"문자열을 str문자 배열에 복사
//	strcpy(str, "Hello world");			보안에 취약하다고 쓰지말라고 함 (컴파일러가)
	cout << str << endl;
	
	// 문자열 길이 출력
	cout << strlen(str) << endl;

	char str1[] = "Hello";

	/*
	for (int i = 0; i < strlen(str); i++)
	{
		cout << "문자" << i << " : " << str1[i] << endl;
	}
	*/

	for (int i = 0; str1[i]!= '\0'; i++)		// 널문자가 아닌동안 계속 반복
	{
		cout << "문자" << i << " : " << str1[i] << endl;
	}

	// strcat_s  -> 문자열 붙이는 함수
	char str2[50] = "Hello, ";
	char str3[] = "world";

	strcat_s(str2, str3);
	cout << str2 << endl;

	//
	char str4[] = "Hello";
	char str5[] = "Hello";
	char str6[] = "Aorld";
	
	int result1 = strcmp(str4, str5);		// strcmp 문자열 2개 비교해주는 함수
	int result2 = strcmp(str4, str6);

	cout << "str4, str5 결과 : " << result1 << endl;		// 0 -> 두 문자열이 동일할 때
	cout << "str4, str6 결과 : " << result2 << endl;		// ASCII 값을 비교해서 앞의 문자열 값이 크면 1 작으면 -1 반환

}