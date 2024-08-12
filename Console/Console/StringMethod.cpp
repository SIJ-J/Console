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
	cout << "���ڿ��� ���� " << str.length() << endl;
}

void StringCopy()
{
	string str = "Hello world";
	string dest = str;	// = ���Կ����ڷ� ����
	cout << "����� ���ڿ� : " << dest << endl;
}
// �Լ� �����ε�
void StringCopy(const string str)
{
	string dest = str;
	cout << "����� ���ڿ� : " << dest << endl;
}

void StringConnection()
{
	string str1 = "Hello, ";
	string str2 = "world";
	str1 += str2;	// + �����ڰ� string Ŭ���� ������ �����ε��� �Ǿ��ִ�.

	cout << "����� ���ڿ� : " << str1 << endl;
}

void StringCompare()
{
	string str1 = "Hello";
	string str2 = "Hello";
	string str3 = "world";

	if (str1 == str2)
	{
		cout << "���ڿ��� ����." << endl;
	}
	if (str1 < str3) cout << "str1dl str3���� �տ� ����" << endl;
}
void StringSubstr()
{
	string str = "Hello, World";
	string subStr = str.substr(7, 5);	// ���ڿ��� 7(����)���� 5��°���� �߶� ��ȯ
	cout << "sub ���ڿ� : " << subStr << endl;
}
void StringReplace()
{
	string str = "Hello, World";
	str.replace(7, 5, "C++");		// ���ڿ��� 7(����)���� 5��°���� �� ���ڿ��� ��ü��
	cout << "replace ���ڿ� : " << str << endl;
}
void StringErase()
{
	string str = "Hello, World";
	str.erase(5, 7);				// str.erase(); �� ����
	cout << "erase ���ڿ� : " << str << endl;
}