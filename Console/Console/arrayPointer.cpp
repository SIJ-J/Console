#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/*
	������ �˻��ϸ� ������ Ű����
		callbyReference
		callbyValue

	���� ���� ���� ( callbyValue )
	 - �Լ��� �μ��� �����Ҷ� �μ��� ���� ����Ǿ� �Լ��� �Ű������� ����
	   �Լ� ���ο��� �Ű������� �����ϴ���, ȣ���� �Լ��� ���� �μ��� ������ ����
*/
void Value(int n); // callbyValue

void Address(int* n); // callbyReference
/*
	�Լ� ȣ��� �μ��� ������ �ּҸ� �����ϴ� ���
	�Լ��� �Ű������� ���� ������ ���� ���� �μ��� ���� ���� ��������
	�Լ� ���ο��� �Ű������� ���� �����ϸ� ȣ���� �Լ��� ���� �μ��� �����
	���� �����ϴ� ��� �ּҸ� ���� -> �޸𸮿� ����ȿ���� ����
	����ü�� Ŭ������ callbyValue�� �Ѱ��ָ� �� ũ�⸸ŭ ���� �޸𸮿� �Ҵ��ϴϱ�
*/
void Reference(int& n); // ����..

// ����
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
		�迭�� �������� ����
		�����ͷε� �迭 ���ҿ� ������ ������!
		�迭 ���ۺκ��� ����Ű�� �����͸� �����ϰ� �����Ϳ�	1�� ���ϸ� �� �������Ҹ� ����Ŵ
														2�� ���ϸ� �� �����������Ҹ� ����Ŵ
	
	*/

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int* parr; // ������ ������
	int i;

	parr = &arr[0];

	for (i = 0; i < 10; i++)
	{
		cout << "arr�� �ּ� :	" << &arr[i] << endl;
		cout << "parr�� �� :	" << parr + i << endl;
	}
	cout << endl;

#pragma endregion �迭�� ������

	// callbyValue
	int num = 30;
	Value(num);
	cout << "num�� �� : " << num << endl;
	cout << "num�� �ּ� �� : " << &num << endl;

	cout << "=======================================" << endl;
	// callbyReference
	int num1 = 30;
	cout << "������ num1�� �� : " << num1 << endl;
	cout << "������ num1�� �ּ� �� : " << &num1 << endl;

	Address(&num1);
	cout << "num1�� �� : " << num1 << endl;
	cout << "num1�� �ּ� �� : " << &num1 << endl;

	int num2 = 30;
	Reference(num2);
	cout << "num2�� �� : " << num2 << endl;
	cout << "num2�� �ּҰ� : " << &num2 << endl;


	// ����
	int num3 = 10;
	int num4 = 20;

	cout << "������ ������ : " << num3 << " , " << num4 << endl;
	Swap(num3,num4);
	cout << "������ ������ : " << num3 << " , " << num4 << endl;
	cout << endl;

	int aNum1 = 10;
	int aNum2 = 20;
	cout << "������ ������ : " << aNum1 << " , " << aNum2 << endl;
	SwapAddress(&aNum1, &aNum2);
	cout << "������ ������ : " << aNum1 << " , " << aNum2 << endl;
	cout << endl;

	int rNum1 = 10;
	int rNum2 = 20;
	cout << "������ ������ : " << rNum1 << " , " << rNum2 << endl;
	SwapReference(rNum1, rNum2);
	cout << "������ ������ : " << rNum1 << " , " << rNum2 << endl;
	cout << endl;

	/*
		void Pointer
		 - �ڷ����� ���� ������ ���� 
		 - � �ڷ����� �ּҵ� ������ ������
		 - ���� �����Ϸ��� ��������ȯ �ʿ�
	*/
	int* p = nullptr;
	void* vp = nullptr;
	int i = 3;
	double d = 3.1;

	vp = &i;
	vp = &d;
	
	// *vp = 10; ���� : ���� �����Ϸ��� ��������ȯ �ʿ�
	// (�ڷ���*)�� �������ν� : ��������ȯ
	*(double*)vp = 10.0;


	/*
	�����Ҵ� - ��Ÿ�ӵ��� �޸𸮰� �Ҵ�Ǵ°�� (�޸� �ݳ��� �ݵ�� �ؾ���)
	�ݳ����� ���� �� �޸� ���� -> �޸𸮰� ��������

	�� �����Ҵ� Ű����
	C - malloc
		free (�޸� ���� Ű����)

	C++ - new
		  delete (�޸� ���� Ű����)
	*/

	int* ptr = (int*)malloc(sizeof(int) * 10); // int�� ���� 10���� �����Ҽ� �ִ� �޸�ũ�⸦ �Ҵ��ض�
	int* ptr1 = new int(10); // int�� 10�� �ʱ�ȭ �ϰ� �����Ҵ��ض�
	delete ptr, ptr1;

	int* array = new int[5]; // 5���� int�� ������ �� �ִ� �迭�� �����Ҵ�

	for (int i = 0; i < 5; i++)
	{
		array[i] = i * 2;
	}
	delete[] array; // array�����Ͱ� ����Ű�� �޸𸮸� ����
	// �̶�, array�����ʹ� ��۸� ������ (dangling pointer)�� �� (����Ű�� �ּҿ� �ƹ��� �����Ͱ� ���� ���)
	array = nullptr; // ����� �� �ϳ� , ����Ʈ �����Ͷ�� �͵� ����
}

// callbyValue
void Value(int n)
{
	n = 10; 
	cout << "n�� �� : " << n << endl;
	cout << "n�� �ּ� �� : " << &n << endl;
}

// callbyReference
void Address(int* n)
{
	*n = 10;
	cout << "n�� �� : " << *n << endl;
	cout << "n�� �ּ� �� : " << &n << endl;
}

void Reference(int& n)
{
	n = 10;
	cout << "n�� �� : " << n << endl;
	cout << "n�� �ּ� �� : " << &n << endl;
}

// ����
void Swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "Swap()�Լ� ������ �� : ";
	cout << a << " , " << b << endl;
}
void SwapAddress(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

	cout << "SwapAddress()�Լ� ������ �� : ";
	cout << *a << " , " << *b << endl;
}
void SwapReference(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "SwapReference()�Լ� ������ �� : ";
	cout << a << " , " << b << endl;
}

/*
	���� 1.
	�����Ҵ�� �����Ҵ��� ������
	�����ؼ� �����(ã�ٺ��� �޸� ������ ����)

	���� 2. 
	Ŭ������ �����ΰ�?

	���� 1, 2 �� �������� ��ǥ��Ŵ

	���� 3.
	����ü�� Ȱ���� �л����� ����ϱ�
	 - �л������� ����ϴ� �Լ�
	 - �л������� �߰��ϴ� �Լ�

	���� ) �Ű������� ����ü�޾� ���� ( ����X , ����O )
	ex) void print(Student & * s)
	{

	}
*/
