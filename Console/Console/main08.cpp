#include <iostream>
#include <list>
#include <map>
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::map;
/*
- ���Ϳ� ����Ʈ�� �������� �ݵ�� �˾� ����
*/

/*
 push_back : ����Ʈ ���� �߰�
 push_front : ����Ʈ �տ� �߰�
 pop_back : ����Ʈ �� ��� ����
 pop_front : ����Ʈ �� ��� ����
 insert : ������ ��ġ�� ��� ����
 erase : ������ ��ġ�� ��� ����
 clear : ��� ��� ����
 size : ����Ʈ ��� ���� ��ȯ
 front : ù��° ��� ��ȯ
 back : ������ ��� ��ȯ
 remove : ������ ���� ������ ��� ��� ����
 reverse : ����Ʈ ���� ������
 sort : ����

*/

/*
 Map
 - ���������̳� �߿� ���� ����ϴ� �����̳�.
 -key, value�� ������ ����(pair) / key�� �����̳� �ߺ����� ���� �Ұ���. /���� �˻� Ʈ���� �Ǿ� �ִ�
 -key���� �����̳ʿ� �ߺ� ������ �ɼ� ����.




*/






int main()
{
	//std::list<int> lst = { 3,1,45,7,10 };
	//lst.push_back(9);

	//for (auto& i : lst)
	//{
	//	cout << i << endl;

	//}
	//lst.push_front(6);//����Ʈ ����

	//std::list<int>::iterator iter = lst.begin();

	map<string, int>data;
	//�ݺ���
	map<string, int>::iterator iter;


	/*
		pair
		�ΰ��� ���� ��� �ϳ��� ��ü�� ����ϴ� ���ø� Ŭ����
		�ΰ��� ���� �ٸ� Ÿ���� ���� �Բ� ���尡��
		���� �ΰ��� ����� ������ �մ�.
		first, second
	*/

	//1. value_typ�� �̿��� ���
	// �⺻���� Ű-���� �� Ÿ���� ��Ÿ����. pair ��ü�� ������ ������ insert�� ����
	// �������� ������
	data.insert(map<string, int>::value_type("�ٺ�", 1));

	//2.maker_pair : pair��ü�� �����ϴ� �Լ� ���ø�
	//make_pair : -> std::pair<stirng, int>
	//���ø� ���ڸ� �ڵ����� �߷���

	data.insert(std::make_pair("����", 5));

	//3. pair�� �̿��� ���
	data.insert(std::pair<string, int>("BTS", 10));
	data.insert(std::pair<string, int>("����", 30));
	data.insert(std::pair<string, int>("������", 170));
	data.insert(std::pair<string, int>("���켺", 400));
	data.insert(std::pair<string, int>("�𸮾�", 20));

	//4.��ü�� ���� �����ϴ� ���
	std::pair<string, int>pt1("���ѹα�",10);
	data.insert(pt1);

	data.erase("���켺");

	for (auto& pair : data)
	{
		cout << "Ű�� : " << pair.first << ", ������ : " << pair.second << endl;
	}

	map<string, int>m;
	m.insert(std::pair<string, int>("Apple", 1));
	m.insert(std::pair<string, int>("Banana", 2));
	m.insert(std::make_pair("Apple", 1));

	auto res = m.insert(std::make_pair("Banana", 10));

	if (!res.second)
	{
		cout << "�ٳ����� ������ : " << res.first->second << endl;
	}
	auto iter = m.find("Apple");
	if (iter != m.end())
	{
		cout << "ã��" << iter->second << endl;

	}
	else
	{
		cout << "����" << endl;
	}
	//count
	cout << "Apple : " << m.count("Apple") << endl; //1

	//clear:��� ��Ҹ� ������
	//empty : ����ֳ�?
	//size :

	for (auto it = m.begin(); it != m.end(); ++it)
	{

	}
	//����
	for (auto it = m.rbegin(); it != m.rend(); ++it)
	{

	}
}