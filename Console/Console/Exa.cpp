#include <iostream>
#include<map>
using std::cout;
using std::endl;
using std::string;
using std::map;


// armor 클래스 - > 맵에 담고 싶다

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
 Scene 클래스 만듬
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
	//씬을 추가하는 ?? (함수)
	void AddScene(const string& name, Scene* scene)
	{
		scenes[name] = scene;
	}
	//씬을 삭제하는 함수
	void RemoveScene(const string& name)
	{
		//씬 이름으로 map에서 찾아야함.
		auto iter = scenes.find(name);
		//씬 이 있으면
		if (iter != scenes.end())
		{
			//지워라
			delete iter->second;
			iter->second = nullptr;
			scenes.erase(iter);
		}
	}

	//현재 씬을 설정
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
			cout << "없음" << endl;
		}
	}
	//현재 Scene을 출력(보여주는)
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
	//씬의 이름을 키, 씬 포인터를 값으로 저장map
	map<string, Scene*>scenes;
	//현재 씬을 가리키는 포인타
	Scene* curScene;
	//현재 씬의 이름
	string cusSceneName;


};


int main()
{
	map<string, Armor> armor;
	armor.insert(std::make_pair("shield", Armor("방패", 10)));
	armor.insert(std::make_pair("smallshield", Armor("작운방패", 10)));
	armor.insert(std::make_pair("greave", Armor("신발", 10)));

	for (const auto& pair : armor)
	{
		cout << "키 : " << pair.first << endl;
		cout << "이름 : " << pair.second.getName() << endl;
		cout << "방어력 : " << pair.second.getDef() << endl;
	}

	SceneManager sceneManager;
	sceneManager.AddScene("menu", new Scene("메뉴씬이다"));
	sceneManager.AddScene("Battle", new Scene("배틀씬이다"));

	sceneManager.SetCurScene("menu");
	sceneManager.ShowCurScene();
	
	sceneManager.SetCurScene("Battle");
	sceneManager.ShowCurScene();
}