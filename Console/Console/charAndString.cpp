#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	// 'a' �̱����ʹ� ����
	// "a" �������� ���ڿ�
	
	/*
	
	char C = 'a';		// �ƽ�Ű �ڵ尪 97 = a
	char h[3] = "��";	// �� "��"�� const char [4] ũ���ϱ�? <- '\0' (�ι���) �� ����  (���� 3byte ���ڵ� ��� ����)

	// ���ڹ迭
	char str[] = "Hello world";
	cout << str << endl;
	cout << sizeof(str) << endl;

	*/

	char str[50];

	strcpy_s(str, "Hello world");		// "Hello world"���ڿ��� str���� �迭�� ����
//	strcpy(str, "Hello world");			���ȿ� ����ϴٰ� ��������� �� (�����Ϸ���)
	cout << str << endl;
	
	// ���ڿ� ���� ���
	cout << strlen(str) << endl;

	char str1[] = "Hello";

	/*
	for (int i = 0; i < strlen(str); i++)
	{
		cout << "����" << i << " : " << str1[i] << endl;
	}
	*/

	for (int i = 0; str1[i]!= '\0'; i++)		// �ι��ڰ� �ƴѵ��� ��� �ݺ�
	{
		cout << "����" << i << " : " << str1[i] << endl;
	}

	// strcat_s  -> ���ڿ� ���̴� �Լ�
	char str2[50] = "Hello, ";
	char str3[] = "world";

	strcat_s(str2, str3);
	cout << str2 << endl;

	//
	char str4[] = "Hello";
	char str5[] = "Hello";
	char str6[] = "Aorld";
	
	int result1 = strcmp(str4, str5);		// strcmp ���ڿ� 2�� �����ִ� �Լ�
	int result2 = strcmp(str4, str6);

	cout << "str4, str5 ��� : " << result1 << endl;		// 0 -> �� ���ڿ��� ������ ��
	cout << "str4, str6 ��� : " << result2 << endl;		// ASCII ���� ���ؼ� ���� ���ڿ� ���� ũ�� 1 ������ -1 ��ȯ

}