#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

// String Class

void StringLength();
void StringCopy();
void StringCopy(string str);
void StringConnection();
void StringCompare();
void StringSubstr();
void StringReplace();
void StringErase();


int main()
{
	StringLength();
	StringCopy();
	StringConnection();
	StringCompare();
	StringSubstr();
	StringReplace();
	StringErase();
}

void StringLength()
{
	string str = "Hello world";
	cout << "문자열의 길이 " << str.length() << endl;
}

void StringCopy()
{
	string str = "Hello world";
	string dest = str;	// = 대입연산자로 복사
	cout << "복사된 문자열 : " << dest << endl;
}
// 함수 오버로딩
void StringCopy(const string str)
{
	string dest = str;
	cout << "복사된 문자열 : " << dest << endl;
}

void StringConnection()
{
	string str1 = "Hello, ";
	string str2 = "world";
	str1 += str2;	// + 연산자가 string 클래서 내에서 오버로딩이 되어있다.

	cout << "연결된 문자열 : " << str1 << endl;
}

void StringCompare()
{
	string str1 = "Hello";
	string str2 = "Hello";
	string str3 = "world";

	if (str1 == str2)
	{
		cout << "문자열이 같다." << endl;
	}
	if (str1 < str3) cout << "str1dl str3보다 앞에 있음" << endl;
}
void StringSubstr()
{
	string str = "Hello, World";
	string subStr = str.substr(7, 5);	// 문자열을 7(시작)부터 5번째까지 잘라서 반환
	cout << "sub 문자열 : " << subStr << endl;
}
void StringReplace()
{
	string str = "Hello, World";
	str.replace(7, 5, "C++");		// 문자열의 7(시작)부터 5번째까지 새 문자열로 교체함
	cout << "replace 문자열 : " << str << endl;
}
void StringErase()
{
	string str = "Hello, World";
	str.erase(5, 7);				// str.erase(); 다 지움
	cout << "erase 문자열 : " << str << endl;
}