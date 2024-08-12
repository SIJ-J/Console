#include <iostream>
#include<map>
using std::cout;
using std::endl;
using std::string;
using std::map;


// armor Ŭ���� - > �ʿ� ��� �ʹ�

class Armor
{
public:
	Armor() :name(""),def(0){}

	Armor(const string&n, int d):name(n),def(d){}
public:
	string getName()const
	{
		return name;
	}
	int getDef()const
	{
		return def;
	}
private:
	string name;
	int def;
};
/*
 Scene Ŭ���� ����
*/
class Scene
{
public:
	Scene():desc(""){}
	Scene(const string& s):desc(s){}

	string GetDesc()const
	{
		return desc;
	}
private:
	string desc;
};

class SceneManager
{

public:
	SceneManager() : curScene(nullptr),cusSceneName(""){}
	~SceneManager()
	{
		for (auto& i : scenes)
		{
			delete i.second;
			i.second = nullptr;
		}
	}
public:
	//���� �߰��ϴ� ?? (�Լ�)
	void AddScene(const string& name, Scene* scene)
	{
		scenes[name] = scene;
	}
	//���� �����ϴ� �Լ�
	void RemoveScene(const string& name)
	{
		//�� �̸����� map���� ã�ƾ���.
		auto iter = scenes.find(name);
		//�� �� ������
		if (iter != scenes.end())
		{
			//������
			delete iter->second;
			iter->second = nullptr;
			scenes.erase(iter);
		}
	}

	//���� ���� ����
	void SetCurScene(const string& name)
	{
		auto iter = scenes.find(name);
		if (iter != scenes.end())
		{
			curScene = iter->second;
			cusSceneName = name;
		}
		else
		{
			cout << "����" << endl;
		}
	}
	//���� Scene�� ���(�����ִ�)
	void ShowCurScene()const
	{
		if (cusSceneName.empty())
		{
			return;
		}
		cout << cusSceneName << endl;
		cout << curScene->GetDesc() << endl;
	}

private:
	//���� �̸��� Ű, �� �����͸� ������ ����map
	map<string, Scene*>scenes;
	//���� ���� ����Ű�� ����Ÿ
	Scene* curScene;
	//���� ���� �̸�
	string cusSceneName;


};


int main()
{
	map<string, Armor> armor;
	armor.insert(std::make_pair("shield", Armor("����", 10)));
	armor.insert(std::make_pair("smallshield", Armor("�ۿ����", 10)));
	armor.insert(std::make_pair("greave", Armor("�Ź�", 10)));

	for (const auto& pair : armor)
	{
		cout << "Ű : " << pair.first << endl;
		cout << "�̸� : " << pair.second.getName() << endl;
		cout << "���� : " << pair.second.getDef() << endl;
	}

	SceneManager sceneManager;
	sceneManager.AddScene("menu", new Scene("�޴����̴�"));
	sceneManager.AddScene("Battle", new Scene("��Ʋ���̴�"));

	sceneManager.SetCurScene("menu");
	sceneManager.ShowCurScene();
	
	sceneManager.SetCurScene("Battle");
	sceneManager.ShowCurScene();
}