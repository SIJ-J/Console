#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::string;



/*
 ���� �������� �ʴ� �����͸� ���ؼ� �Լ��� Ŭ������ �����ִ� �Լ� ���ø� Ŭ���� ���ø�
 Template 
 - �ſ� ���� �༮�̴�
 - �Ϲ������� ����, �Լ��� Ư�� �����͸� ����ϴ� ��ü���� ��κ��� �����ϱ⸦ ���Ѵ�
 - ������ ������ ���� �޶������� ������ �ڵ带 ���� ��찡 ����.
 - ���� �� ��Ÿ ��� ���� ���� �����͸� ������ ������ �����Ѵٸ� ����ϴ� ���������� �޶������� �ڵ�� ���� ������
 - �ܼ� �����ϰ� ������ ������ ����ؼ� ������ �� �ֱ� ������
 - ������ ���� ������ ����ؼ� �����Ѵٸ� �ᱹ�� ���� �Ǽ��� �ݺ��� �� �ִ�.
 - ���� ���������� �� ���� �˰����� �ִ��� ���� �Ǽ��� �ϰ� �ɼ��� �ְ� ������ �ᱹ�� ���� ���� �ִ�.


 - �׷��� ���ø��̶�� ������ ����ϸ� ������ �ذ��� �� �ִ�.
 1. ���� �������� ���� �پ��� ���������� ���ؼ� �Լ��� Ŭ������ ������ �� �ִ�.
 2. ���ø��� ����ϸ� ������, ����� ���������� ���ڷ� �˸���.
 3.

 �Լ� ���ø�
 - �Լ��� �ʿ��� �ڷ����� �����ϰ� �Լ� ȣ��� �ڷ����� ȣ��� �ڷ����� ����Ѵ�
 - ���ø����� �ۼ��� �Լ��� ȣ���Ѵ� ���� �ڷ��� �´� �Լ��� ������


 Ŭ���� ���ø�
 - �پ��� ������ Ÿ���� �����ϴ� Ŭ������ ���� �� �� �ְ� ���ش�
 - ���ø� �Ű������� ���� Ŭ������ ��������� ����Լ��� Ÿ���� �Ϲ�ȭ �� �� �ִ�
 - Ŭ������ �ʿ��� �ڷ����� �����ϰ� Ŭ���� �ڷ����� �����Ѵ�
 - ���ø����� �ۼ��� Ŭ������ ȣ���� �� �ڷ����� �´� Ŭ������ �����Ѵ�
*/

int GetMax(int x, int y)
{
	if (x > y)return x;
	else return y;
}

float GetMax(float x, float y)
{
	if (x < y)return x;
	else return y;
}

template < typename T>
T GetMax(const T x, const T y)
{
	if (x > y)return x;
	else return y;
}

template <typename T>
T const& max(T const& a, T const& b)
{
	return a < b ? b : a;

}

int const& max(int const& a, int const& b)
{
	return a < b ? b : a;
}

template <typename T>
void Output(const T data) 
{
	cout << "������ : " << data << endl;
}

template <typename T1, typename T2>
void Output(T1 a, T2 b)
{
	cout << a << "," << b << endl;
}


template <typename T>
class Box
{
private:
	T data;
public:
	void SetData(T data) { this->data = data; }
	T Getdata() { return data; }

	// void print()
};

template <typename T1, typename T2>
class Box2
{
private:
	T1 firstData;
	T2 secondData;
public:
	T1 GetFirstData();
	T2 GstSecondData();

	void setFirst(T1 val) { firstData = val; }
	void SetSecondData(T2 val) { secondData = val; }
};

int main()
{
	Output(1);
	Output(2.5);
	Output(1, 1);
	Output(1, 1.5);


	Box<int>box;
	box.SetData(100);
	cout << box.Getdata() << endl;
	Box<double>box;
	cout << box.Getdata() << endl;

	Box2<int, double>box2;
	box2.GetFirstData();
	box2.SetSecondData(10.5);
	cout << box2.GetFirstData() << "," << box2.GstSecondData() << endl;
}

template<typename T1, typename T2>
T1 Box2<T1, T2>::GetFirstData()
{

	return firstData;
}

template<typename T1, typename T2>
T2 Box2<T1, T2>::GstSecondData()
{
	return secondData;
}
