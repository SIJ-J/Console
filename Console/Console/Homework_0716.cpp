#include <iostream>
#include <Windows.h>
#include <string>

class introduce {
public:
	std::string name;
	int age;
	std::string pnum;
	std::string adress;
	std::string e_mail;
	std::string resolution;
	std::string company;
	std::string game;
	std::string hobby;
};
// 가나달마ㅏ사마
void main() {

	/*
	과제1. 좋아하는 캐릭터 출력  (좌표계)

	- 캐릭터 양식은 자유

	- 최소 사이즈 40 * 40 지킬것

	- 자질구레한 꼼수x
	*/

	std::cout << "과제 1." << std::endl;
	
	// 48*48  빈칸 : □ , 채색 : ■
	//			  123456789012345678901234567890123456789012345678
	std::cout << "□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□" << std::endl;
	std::cout << "□□□□□□□□□□□□■■■■□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□" << std::endl;
	std::cout << "□□□□□□□□□□□■□□□□■■■□□□□□□□□□□□□□□□□□□□□□□□□□□□□□" << std::endl;
	std::cout << "□□□□□□□□□□□■□□□□□□□■■□□□□□□□□□□□□□□□□□□□□□□□□□□□" << std::endl;
	std::cout << "□□□□□□□□□□□□■□□□□□□□□■□□□□□□□□□□□□□□□□□□□□□□□□□□" << std::endl;
	std::cout << "□□□□□□□□□□□□□■□□□□□□□□■□□□□□□□□□□□□□□□□□□□□□□□□□" << std::endl;
	std::cout << "□□□□□□□■■■■■□□■□□□□□□□□■□□□□□□□□□□□□□□□□□□□□□□□□" << std::endl;
	std::cout << "□□□□■■■□□□□□■■■■□□□□□□□□■□□□□□□□□□□□□□□□□□□□□□□□" << std::endl;
	std::cout << "□□□■□□□□■■■■□□□□■■□□□□□□□■□■■■□□□□□□□□□□□□□□□□□□" << std::endl;
	std::cout << "□□■□□□□■□□□□■■□□□■■■■□□□□■■□□□■■■□□□□□□□□□□□□□□□" << std::endl;
	std::cout << "□□□■■□□□□□□□□□■■□□□■■■□□□□□□□□□□□■■□□□□□□□□□□□□□" << std::endl;
	std::cout << "□□□□□■□□□□□□□□□□■□□□□■□□□□□□□□□□□□□■■□□□□□□□□□□□" << std::endl;
	std::cout << "□□□□□□■■□□□□□□□□□■□□□□□□□□□□□□□□□□□□□■□□□□□□□□□□" << std::endl;
	std::cout << "□□□□□□□□■■■□□□□□□□□□□□□□□□□□□□□□□□□□□□■□□□□□□□□□" << std::endl;
	std::cout << "□□□□□□□□□□□■■■■□□□■□□□□□□□□□□■■□□□□□□□□■□□□□□□□□" << std::endl;
	std::cout << "□□□□□□□□□□□□□□□■■■■■□□□□□□□□□■■□□□□□□□□□■□□□□□□□" << std::endl;
	std::cout << "□□□□□□□□□□□□□□□□□□□■□□□□□□□□□□□□□□□□□□□□■□□□□□□□" << std::endl;
	std::cout << "□□□□□□□□□□□□□□□□□■■■□□□□□□□□□□□□□□□□□□□□■□■□□□□□" << std::endl;
	std::cout << "□□□□□□□□□□□□□□□■■□□□□□□□□□□□□□□□□□□□□□□■□□■□■□□□" << std::endl;
	std::cout << "□□□□□□□□□□□□□■■□□□□□□□□□□□□□□□□□□□□□□□■□□□■■□□□□" << std::endl;
	std::cout << "□□□□□□□□□□□■■□□□□□□□□□□□□□□□□□□□□□□□□■□□□■■□□□□□" << std::endl;
	std::cout << "□□□□□□□□□□■□□□□□□□□□□□□□□□□□□□□□□□□■■□□□□■■□□□□□" << std::endl;
	std::cout << "□□□□□□□□□■□□□□□□□□□□□□□□□□□□□□□□□■■□□□■■■■■■□□□□" << std::endl;
	std::cout << "□□□□□□□□■□□□□□□□□□□□□□□□□□□□□□□□■□□□□□■□□□□■■□□□" << std::endl;
	std::cout << "□□□□□□□■□□□□□□□□□□□□□□□□□□□□□□□□■□□□□■□□□□□□■■□□" << std::endl;	// y24
	std::cout << "□□□□□□■□□□□□□□□□□□□□□□□□□□□□□□□□■□□□■■■□□□□□□■□□" << std::endl;
	std::cout << "□□□□□■□□□□□□□□□□□□□□□□□□□□□□□□□□■□□■□□□■□□■■□■□□" << std::endl;
	std::cout << "□□□□□■□□□□□□□□□□□□□□□□□□□□□□□□□□□■■□□□□□■□□□■■□□" << std::endl;
	std::cout << "□□□□■□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□■□□□□■□□" << std::endl;
	std::cout << "□□□□■□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□■□□□□□■□□" << std::endl;
	std::cout << "□□□□■□□□□□□□□□□□□□□□□□□□■■■■■□□□□□□□□■■□□□■■□■□□" << std::endl;
	std::cout << "□□□■□□□□□□□□□□□□□□□□□□□■□□□□□■■□□□□□■■□□□□□■■■□□" << std::endl;
	std::cout << "□□□■□□□□□□□□□□□□□□□□□□■□□□□□□□□■□□■■□■□□□□□□■■□□" << std::endl;
	std::cout << "□□□■□□□□□□□□□□□□□□□□□□□□□□□□□□□□■■□□□■□□□□□□■□□□" << std::endl;
	std::cout << "□□□■□□□□□□□□□□□□□□□□□□□□□□□□□□□□□■□□□■□□■■□■■□□□" << std::endl;
	std::cout << "□□□■□□□□□□□□□□□□□□□□□□□□□□□□□□□□□■■□□■□□□■■■□□□□" << std::endl;
	std::cout << "□□□■□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□■□□■□□□□■■□□□□" << std::endl;
	std::cout << "□□□■□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□■□□■□□□■■□□□□□" << std::endl;
	std::cout << "□□□■□□□□□□□□□□□□□□□□□□□□□□□□□□□□□■■□□■■■■■□□□□□□" << std::endl;
	std::cout << "□□□□■■■■■□□□□□□□□□□□□□□□□□□□□□□□□■□□□□■■■□□□□□□□" << std::endl;
	std::cout << "□□□□■□□□□■□□□□□□□□□□□□□□□□□□□□□□□■□□□□□□□□□□□□□□" << std::endl;
	std::cout << "□□□■□□□□□□■□□□□□□□□□□□□□□□□□□□□□■■□□□□□□□□□□□□□□" << std::endl;
	std::cout << "□□□■□□□□□□■□□□□□□□□□□□□□□□□□□□□□■□□□□□□□□□□□□□□□" << std::endl;
	std::cout << "□□□■□□□□□□■□□□□□□□□□□□□□□□□□□□□□■□□□□□□□□□□□□□□□" << std::endl;
	std::cout << "□□□■□□□□□□■□□□□□□□□□□□□□□□□□□□□□■■■■■■■□□□□□□□□□" << std::endl;
	std::cout << "□□□□■□□□□■□□□□□□□□□□□□□□□□□□□□□□□□□□□□□■□□□□□□□□" << std::endl;
	std::cout << "□□□□□■■■■■□□□□□□□□□□■■■■■■□□□□□□□□□□□□□■□□□□□□□□" << std::endl;
	std::cout << "□□□□□□□□□□■■■■■■■■■■□□□□□■■■■■■■■■■■■■■■□□□□□□□□" << std::endl;
	std::cout << std::endl;

	/*

	과제2. 자기 소개 출력

	- 이름, 나이, 연락처, 주소, 이메일, 각오, 가고 싶은 회사, 만들고 싶은 게임, 취미

	- 가독성을 본인의 판단하에 잘 만들어 온다.

	*/

	std::cout << "과제 2." << std::endl;
	std::cout << "이름 : 문대호	" << "나이 : 30(95년생)	" << "연락처 : 010-2926-4016" << std::endl;
	std::cout << "주소 : 서울특별시 관악구 신림동 251-506	" << "E-mail : darhorang@gmail.com" << std::endl;
	std::cout << "각오 : 현 수강과정이 최고의 스타트라인이 될 수 있게 노력하겠습니다." << std::endl;
	std::cout << "가고싶은 회사 : KRAFTON의 PUBG,Bluehole	" << std::endl;
	std::cout << "만들고 싶은 게임 : SANDBOX MMORPG	" << "취미 : 지인과 함께 협동 게임" << std::endl << std::endl << std::endl;
	
	
	/*

	도전 과제1. 자기 소개 출력

	- 이름, 나이, 연락처, 주소, 이메일, 각오, 가고 싶은 회사, 만들고 싶은 게임, 취미

	- 항목은 동일

	- 단, 입력한 정보에 대한 단일 출력이 아닌 확장성을 고려한 설계 및 모듈화를 시켜올 것
	 - 객체 ( 추상 클 / 인터페이스) / 컴포넌트 (디자인 패턴) 택 1

	*/

	//https://learn.microsoft.com/ko-kr/cpp/cpp/virtual-functions?view=msvc-170
	// 추상클래스는 개념적으로 인스턴스를 생성할 수 없는 클래스로(인스턴스화 할 수 없는 클래스)\
	, 일반적으로 하나 이상의 순수 가상 함수가 있는 클래스로 구현된다.
	/*
	introduce h1;
	h1.name = "문대호";
	h1.age = 30;
	h1.pnum = "010-2926-4016";
	h1.adress = "서울특별시 관악구 신림동 251-506";
	h1.e_mail = "darhorang@gmail.com";
	h1.resolution = "현 수강과정이 최고의 스타트라인이 될 수 있게 노력하겠습니다.";
	h1.company = "KRAFTON의 PUBG,Bluehole";
	h1.game = "SANDBOX MMORPG";
	h1.hobby = "지인과 함께 협동 게임";

	std::cout << "도전 과제1." << std::endl;

	std::cout << "이름 : " << h1.name << std::endl;
	*/
}