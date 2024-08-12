#include <iostream>
// ���ڿ��� ���õ� ���
//  - STL -> string -> �޸� ����̳� ���ڿ��� �ٷ� �� �ִ� �Լ����� �����Ѵ�. (string �Ⱦ��� ������ �鿩��)
//  - char 
#include <string>

#include <wchar.h>
// world wide(�����ڵ� ó��) �ٸ� ������ ���ڸ� ������ ?
// wchar_t�� (wide character type)
// ���� 1byte �ѱ� 2byte
// ��Ƽ����Ʈ �������� (�����ڸ� ��) - �޸� ����


using std::cout;
using std::cin;
using std::endl;
using std::string;

#pragma region �Լ�

/*
	�� �Լ�
	 
	 - ������ ���α׷��ֿ� ��ǥ ����

	 - �밭 ����� ���Ǳ� (����� ���Ǳ�� ������� �����ϴ� ���)

	�� �Լ��� ����ϴ� ����

	 - �ߺ� ���� ����

	 - ���� ������
	 
	 - ������ ���
	 
	 - ����

	 ex) �Լ��� �����ϴ� ���

	 ��ȯ �ڷ��� �Լ��̸�(�Է� �ڷ��� (���� or �μ���� �Ҹ���.)
	 {	<- �Լ��� ����
		
		�Լ��� ����

	 }	<- �Լ��� ��

	 void main()
	 {

	 }

	�� ����

	�Լ� �̸� - �� �״�� �Լ��� �̸� (�Լ��� �����Ҷ� ����� �ȴ�.)

	����(�μ�) - (�Լ��� �ؾ� �� ���� ���λ����� �����ϸ� �Լ��� �۾� �Ÿ���� �� �� �ִ�.

	��ȯ �ڷ��� - �Լ��� �����ϴ� ���� ������ ���̸� �Լ��� �۾� ���

	�Լ� ���� - {} �ȿ� �Լ��� ���� �ڵ尡 ����

	- �Լ��� �̸��� "�⺻��"���� �����ؾ� �Ѵ�.
	 - ������ �̸��� �Լ��� N�� �̻� �����ϴ°��� �Ұ����ϴ�.

	�� void�� �Լ���?

	- ����(��ȯ)�� ���� ���� �Լ��̴�.
	- �Լ��� �Է� �Ǵ� ����� ���� ��� void Ű���带 ���ؼ� �ش� ��/����� ���ٴ°��� ����ؾ� �Ѵ�.

	- �츮�� ����� �Լ�?
	 - rand(): �������� �̴� �Լ�
	 - Sleep(1000): 1�ʰ� ���߰� �ϴ� �Լ�

	�� �Լ��� ������ �⺻������ �����Լ� ���ʿ� �Ѵ�.

	�� C / C++ ����� �Լ� ������ �ʿ��� ����
	 
	 - C / C++ ����� �����Ϸ��� �⺻������ ������ ������ ������ �Ʒ��� �ؼ��Ѵ�.
	 
	 - �̶� �����Ϸ��� �̹� ����ģ ���ο��� ���ԵǾ� ���� ���� �Լ��� ȣ�� �� ��� �����Ϸ��� �̿� ���� ������ �𸣱� ������ ������ �߻��Ѵ�.

	 - �׷��� ������ �Լ��� ������ ���ؼ� �����Ϸ����� �ش� �Լ��� ���� ��򰡿� �����Ѵٴ� ���θ� �˷���� �Ѵ�.

	 - ��, �Լ��� ����� ���ǰ� �ݵ�� ������ ���Ͽ� �������� �ʾƵ� �ȴٴ� ���� �ǹ�

	 - ���� �Լ��� ������ �ߺ����� ����ϴ� ���� ���������� �Լ��� ���Ǵ� �ݵ�� �����ؾ� �Ѵ�.

	 �Ծ�
	 - ����Ƽ�� -> ī��� / ��� ���� -> �Ľ�Į ���̽�



*/


#pragma endregion

//�Լ� ����
void OutputValueA(); 

//��Ʈ���� ������ ��ȯ�� ���� �ʴ´�. (void)
void OutputValueB(int numA);
void OutputValueC(int numA, int numB);

// ���ڿ� (��ȯ o / ��ȯ x)
void OutputString(string str);
string GetStringFunc(string strA, string strB);
int CheckingString(string strA, string strB);

// ��ȯ���� ���� (int)
int GetAddValue(int numA, int numB);
int GetSubValue(int numA, int numB);
int GetMultipleValue(int numA, int numB);
float GetDivideValue(int numA, int numB);

void EnemyAttack();
void EnemyAttack();

//		��

namespace NS_A		// namespaceȰ���� ���� �غ���. 
{
	void EnemyAttack() 
	{
		cout << "���� �ٷ� NS_A �Լ�" << endl;
	}
}
namespace NS_B
{
	void EnemyAttack()
	{
		cout << "���� �ٷ� NS_B �Լ�" << endl;
	}
}



void main()
{

	NS_A::EnemyAttack();
	NS_B::EnemyAttack();

	cout << '\n';

	OutputValueA();
	OutputValueB(5);
	OutputValueC(1, 9);

	OutputString("������ �ʹ� ��մ�.");

	int nResultA = GetAddValue(18, 25);

	// ���� ���·�
	OutputValueB(nResultA);

	string sResultB = GetStringFunc("����", "����");
	OutputString(sResultB);

	nResultA = CheckingString("������ �ʹ� ��մ�.", "������ �ʹ� ��մ�.");
	OutputValueB(nResultA);

	cout << '\n';

	int numL = 0;
	int numR = 0;

	cout << "���� (2��) �Է� : " << endl;

	cin >> numL >> numR;

	// cout�� printf�� �������ҿ� �߾���?
	// ���⸸ ���� �˼��ִ� //
	printf("%d + %d = %d\n", numL, numR, GetAddValue(numL, numR));
	printf("%d - %d = %d\n", numL, numR, GetSubValue(numL, numR));
	printf("%d * %d = %d\n", numL, numR, GetMultipleValue(numL, numR));
	printf("%d / %d = %f\n", numL, numR, GetDivideValue(numL, numR));

	/*
	- ��ó�� �Լ��� �پ��� ������ ���� �� �ִ�.

	C / C++ ����� �Լ� ����
	- �Է� o, ��� o
	- �Է� o, ��� x
	- �Է� x, ��� o
	- �Է� x, ��� x

	ex)
	// �Է�o , ���o
	int Both(int numA, int numB);
	// �Է�o , ���x
	void ShowInfo(int nAge, char psName);
	// �Է�x , ���o
	int AddNum(void);
	// �Է�x , ���x
	void main();
	

	*/
}

void OutputValueA()
{
	cout << "���� �ٷ� �Լ���." << endl;
}
void OutputValueB(int numA)
{
	cout << numA << endl;
}
void OutputValueC(int numA, int numB)
{
	cout << numA << numB << endl;
}
void OutputString(string str)
{
	cout << str << endl;
}
string GetStringFunc(string strA, string strB)
{
	// �Լ��� return Ű���带 ���ؼ� �Լ��� ���� �Ǵ� ��� ���� ��ȯ�ϴ°��� �����ϴ�.
	// �Լ��� ��� ���� �Է°��� �޸� �ϳ��� ������� ��ȯ�� �� �ִ�. (�Լ� ����)

	//?
	// string�� ���ڿ��� �ٷ� �� �ִ� �پ��� ����� �����ϰ� �ִ�. (+ ����ó��)
	cout << strA + strB;	// ���� �ȵȴ�. ����ó���� ������ ������ ���� �����ؼ� ����ϵ��� �Ѵ�.
	//	��
	//return strA.append(strB);	(�ǵ��� ��������)

}
int CheckingString(string strA, string strB)
{
	// ������ 1 / �ٸ��� 0 ��ȯ
	return strA == strB;
}
int GetAddValue(int numA, int numB)
{
	return numA + numB;
}
int GetSubValue(int numA, int numB)
{
	return numA - numB;
}
int GetMultipleValue(int numA, int numB)
{
	return numA * numB;
}
float GetDivideValue(int numA, int numB)
{
	return numA / (float)numB;
}


/*
	- �Ⱓ : �̹���
	���� ����1. ���ڿ� ���� �׽�Ʈ

	- �޾�� ����

	<���� ����>
	C++ ���� Ǯ��� �ϰ� ��ĭ�� �˸°� ä�� �����ÿ�.
	C ��Ÿ�� ���̺귯�� / STL�� ��Ÿ ���̺귯�� �Լ��� ����ϸ� �ȵ˴ϴ�.
	Ư�� STL String�� ���� �ٷ� Ż�� ó���Ǵ� ���� �ٶ��ϴ�.
	�׸��� �ش� ����� ���� �� �׷��� �ۼ��� �ߴ��� ª�� �ּ��� �־� �ּ���.

	����. �־��� ���ڿ��� �ܾ� ������ ������ ������ ����Ͻÿ�.
	ex)
	�Է� ��: "Hello World this is Pearl Abyss"
	��ȯ ��: "Pearl Abyss is this World Hello"

	<����>
	�Է� ���ڿ��� �յڿ� ������ ���ٰ� ����
	��� �ܾ�� ���� �� ĭ���� ���еȴٰ� ����
	
	void ReverseWords(char* output, int outptArraySize, const char* input)
	{
		// �̰��� ä�� �����ÿ�
	}

	�ۼ��� ������ �ð� ���⵵�� ����ϴ� ������ ������ �Լ��� �����ϰ� ���۹�İ� �� �׷��� �ۼ��ߴ��� ����Ͻÿ�.(�л� ���� ���� �� �׽�Ʈ)
*/

/*
	������ �Է� �����Ϳ� ��� �����Ͱ� ������ �ش� ������ �Լ���� ������ �� �ִ�.
	���� C / C++ ���� �Լ� ������ �����ϱ� ������ ��ǻ���� ��ɹ��� �ۼ��ϱ� ���ؼ��� �ݵ�� �ش� ������ �Լ� �ȿ� �ۼ��� ��� �Ѵ�.
*/