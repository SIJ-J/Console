#include <iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
/*
 STL
 - ���α׷��� �ʿ��� �ڷᱸ���� �˰��� ���ø����� �����ϴ� ���̺귯��.

 - �����̳� (Ŀ�ٶ� â��) : ��ü�� �����ϴ� ��ü. Ŭ���� ���ø��� ���·� �����̵Ǿ�����
 - ������ ���ҿ� ������ �� �ֵ��� �پ��� ����Լ��� ����
 - �����ϴ� ����� ���� �Լ��� ȣ���ϰų�, �ݺ���(iterator)��� ���� �̿��� ����

 - ���ͷ�����(�ݺ���) : �����Ϳ� ����� �������� �����̳� ���Ҹ� ����Ű�� ����Ű�� ���ҿ� �����Ͽ� ���� ���Ҹ� ����Ű�� �ϴ� ���
 
 - �˰��� :  ����, ����, �˻� ���� �ذ��ϴ� �Ϲ�ȭ�� ����� �����ϴ� �Լ� ���ø�
 
 - ������ �����̳�(����) : �����̳� ���Ұ� �ڽŸ��� ������ġ(����)�� ������ �����̳�
	- ��vector ,list, deque


- ���� �����̳�(������) : ������Ұ� ���Լ����� �ٸ��� Ư�� ���ı��ؿ� ����  �ڵ����ĵǴ� �����̳�
	- set, multiset, ��map, multimap

*/

/*
 -vector?
 - ���������� ����, ���������� �����迭�� ����Ͽ� ũ�⸦ �ڵ����� �������ش�.
 - �ε����� ���ؼ� ������ ���ҿ� ���ٰ���(�迭��[], ����Լ� at)



*/



int main()
{
	vector<int> v1; // �� ���� ����
	vector<int>v2(10); //10���� �⺻��(0)���� �ʱ�ȯ�� ���� ����
	vector<int>v3(10, 5); // 10���� ��Ҹ� 5�� �ʱ�ȭ�� ���� ����
	vector<int>v4 = { 1,2,3,4,5,6,7,8,9,10 };


	 //size() ������ ������ ������
	cout << "������ ������ v1 " << v1.size() << endl;
	cout << "������ ������ v1 " << v2.size() << endl;
	cout << "������ ������ v1 " << v3.size() << endl;
	cout << "������ ������ v1 " << v4.size() << endl;

	cout << "=========================================" << endl;

	cout << "������ capacity v1 : " << v1.capacity() << endl;
	cout << "������ capacity v2 : " << v2.capacity() << endl;
	cout << "������ capacity v3 : " << v3.capacity() << endl;
	cout << "������ capacity v4 : " << v4.capacity() << endl;

	//���Ϳ� ���� ���ο� �����͸� �߰��Ѵ�.
	v4.push_back(11);
	cout << "������ capacity v4(Ǫ�ù� ��) : " << v4.capacity() << endl;

	cout << "=========================================" << endl;

	vector<int>v5;
	v5.push_back(1);
	v5.push_back(2);
	v5.push_back(3);
	v5.push_back(4);
	v5.push_back(5);

	for (int i = 0l; i < v5.size(); i++)
	{
		cout << "for������ ���� v5  ��� : " << v5.at(i) << endl;
	}
	for (int& i : v5)
	{
		cout << "for��(�������)���� ���� v5  ��� : " << i << endl;
	}
	for (const auto& i : v5) // auto�� �����Ϸ��� �ڵ����� Ÿ���� �˾Ƽ� ������ش� ������ Ÿ���� ����� ����ϴ°� ���� �� �ʹ� �������� ����
	{
		//i += 1;
	}
	//enpty(): ���Ͱ� ����ִ��� Ȯ��
	//clear() : ���Ͱ� ��� �������
	//at(): ������ ��� ����
	//front() : ������ ù���� ��ҹ�ȯ
	//back() : ������ ������ ��ҹ�ȯ
	//pop_back : ������ ������ ��Ҹ� ����
	//push_back :  ������ ���� ��� �߰�
	//intert() : ������ ��ġ�� ��ҷ� ����
	//erase() : ������ ��ġ�� ��Ҹ� ����
	//reserve() :  ������ �뷮�� ����
	//swap() : �� ���͸� ��ȯ



	vector<int> v6;
	v6.push_back(1);
	v6.push_back(2);
	v6.push_back(3);
	v6.push_back(4);
	v6.insert(v6.begin() + 1, 10); //�ε��� 1�� ����
	v6.erase(v6.begin() + 3); // �ε��� 3�� ��� ����
	v6.pop_back(); // ������ ��� ����

	for (auto& i : v6)
	{
		cout << i << endl;
	}

	// 1 2 3 4
	//1 10 2 3 4
	// 1 10 2 4
	// 1 10 2
	//��� 1 10 2
	cout << "=========================================" << endl;

	//iterator
	//�����Ϳ� ����� �༮. �����̳��� ����� ���Ҹ� ��ȸ�ϰ� �����ϴ� ���
	//begin-> ������ ��Ÿ��(���� ���Ҹ�)
	//end()-> ���� ���Ұ� �ƴ� ���� ��Ÿ��(������ ����� ����)

	vector<int> v7;
	v7.push_back(1);
	v7.push_back(2);
	v7.push_back(3);
	v7.push_back(4);
	v7.push_back(5);
	
	cout << "==�ݺ��ڷ� ���" << endl;
	for (vector<int>::iterator it = v7.begin(); it != v7.end(); ++it)
	{
		cout << *it << endl;
	}
	
	vector<int> v8;
	v8.push_back(1);
	v8.push_back(2);
	v8.push_back(3);
	v8.push_back(4);
	v8.push_back(5);

	cout << "=========================================" << endl;

	vector<int>::iterator iter = v8.begin(); //���� ���Ҹ� ����Ű�� �ݺ���
	cout << iter[0] << endl;
	cout << iter[1] << endl;
	cout << iter[2] << endl;
	cout << iter[3] << endl;
	cout << iter[4] << endl;
	
	iter += 2;
	cout << *iter << endl;

	/*for (vector<int>::reverse_iterator rit = v8.rbegin(); rit != v8.rend(); rit++)
	{

	}
	cout << "=========================================" << endl;

	for (vector<int>::iterator it = v7.begin(); it != v7.end(); ++it)
	{

	}*/

	vector<int>vec = { 10,20,30,40,50 };
	for (auto it = vec.begin(); it != vec.end(); ++it)
	{
		cout << *it << endl;
	}
	cout << "��Ƣ��" << endl;
	for (auto& i : vec)
	{
		i *= 2;
	}
	for (auto it = vec.begin(); it != vec.end(); ++it)
	{
		cout << *it << endl;
	}

}