#include <iostream>

using std::cout;
using std::cin;
using std::endl;


void main()
{
	/*
        과제1. 구구단 구현

    - 3종의 반복문을 이용해서 구구단 구현
     - for / while / do ~ while
    */

    //변수 선언
    int i;
    int j;

#pragma region 구구단

    // for문 
    cout << "for문 구구단 출력" << endl;
    for (i = 1; i < 10; i++)
    {
        cout << i << "단" << endl;
        for (j = 1; j < 10; j++)
        {
            cout << i << " * " << j << " = " << i * j << endl;
        }
        cout << endl;
    }
    cout << "=====================================================" << endl;
    cout << endl;

    // 다시 초기화
    i = 1;
    
    // while문
    cout << "while문 구구단 출력" << endl;
    while (i < 10)
    {
        cout << i << "단" << endl;
        j = 1;
        while (j < 10)
        {
            cout << i << " * " << j << " = " << i * j << endl;
            j++;
        }
        i++;
        cout << endl;
    }
    cout << "=====================================================" << endl;
    cout << endl;

    // 다시 초기화
    i = 1;

    // do while문
    cout << "do ~ while문 구구단 출력" << endl;
    do
    {
        cout << i << "단" << endl;
        j = 1;
        do
        {
            cout << i << " * " << j << " = " << i * j << endl;
            j++;
        } while (j < 10);
        i++;
    } while (i < 10);
    
    cout << endl;
    cout << endl;

#pragma endregion

    /*
    과제2. 연산자 활용

    - a. 두개의 정수를 받아서 두 수의 덧샘과 뺄샘의 결과를 출력하는 프로그램 작성

    - b. 3개의 정수 (num1, num2, num3)를 받아서 다음 연산의 결과를 출력하는 프로그램 작성
     ex) (num1 + num2) * (num3 + num1) % num1 = ?

    - c. 입력 받은 두 정수를 나누었을때 얻게 되는 몫과 나머지를 출력하는 프로그램 작성
     ex) 7과 2가 입력 -> 몫으로 3 / 나머지는 1이 출력되면 된다.
    */

    // a.
    
    int num = 0;
    int num2 = 0;
    int num3 = 0;

    cout << "두개의 정수를 입력 하세요: " << endl;
    cin >> num;
    cin >> num2;

    cout << "덧샘 : " << num + num2 << endl;
    cout << "뺄샘 : " << num - num2 << endl;

    cout << endl;
    cout << endl;

    // b.

    cout << "세개의 정수를 입력 하세요: " << endl;
    cin >> num;
    cin >> num2;
    cin >> num3;

    cout << "(" << num << " + " << num2 << ") * (" << num3 << " + " << num << ") % " << num << " = " << (num + num2) * (num3 + num) % num << endl;
    cout << endl;
    

    // c.

    cout << "두개의 정수를 입력 하세요: " << endl;
    cin >> num;
    cin >> num2;

    cout << num << "과 " << num2 << "의 나눗셈 결과 -> 몫: " << num / num2 << " 나머지 : " << num % num2;
    cout << endl;

    /*
        과제3. 반복문 출력

    - for / while / do ~ while문 모두 사용

    - 1부터 20까지 출력하시오.
     - 짝수만

    - 20에서 1까지 출력하시오.
    */

    cout << "Q. 1부터 20까지 출력하시오.(짝수만)" << endl;
    cout << endl;

    // for문
    cout << "for문" << endl;
    for (i = 1; i <= 10; i++)
    {
        cout << i * 2 << " ";
    }
    cout << endl;
    cout << endl;
    
    // while문
    i = 1; // i에 1대입
    cout << "while문" << endl;
    while (i <= 10) 
    {
        cout << i * 2 << " ";
        i++;
    }
    cout << endl;
    cout << endl;

    // do while문
    i = 1; // i에 1대입
    cout << "do while문" << endl;
    do
    {
        cout << i * 2 << " ";
        i++;
    } while (i <= 10);
    cout << endl;
    cout << endl;

    cout << "Q. 20에서 1까지 출력하시오." << endl;
    cout << endl;

    // for문
    cout << "for문" << endl;
    for (i = 20; i > 0; i--)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    // while문
    cout << "while문" << endl;
    i = 20; // i에 20 대입
    while (i > 0)
    {
        cout << i << " ";
        i--;
    }
    cout << endl;
    cout << endl;

    // do while문
    cout << "do while문" << endl;
    i = 20; // i에 20 대입
    do
    {
        cout << i << " ";
        i--;
    } while (i > 0);
    cout << endl;
    cout << endl;

    /*
        과제4. 반복문 숙달

    - 본인 판단하에 가장 적합한 반복문을 사용할것.
    - 정수 하나를 입력 받아 -5씩 반복적으로 연산이 되는 식을 만든다.
     - 종료 조건 : -15를 넘어가면 탈출
     - 조건 : 입력 받는 값은 -10 ~ 10 사이의 숫자여야 하고 이외의 값을 입력시 프로그램을 종료를 시킨다.

     ※ 조건식과 논리 연산자를 잘 보고 조건식을 만들어 반복문이 돌아가게 만드는게 포인트.
    */

    
    int input = 0;
    
    cout << "-10 ~ 10 사이의 정수 입력 (이외의 값 입력시 프로그램 종료)" << endl;
    cin >> input;

    while (input >= -10 && input <= 10)
    {
        while (input >= -15)
        {
            cout << input << " - 5 = ";
            input -= 5;
            cout << input << endl;
        }
    }
    cout << "최종: " << input << "로 종료" << endl;
    cout << endl;


    /*
         과제5. 별찍기
    */
    for (int i = 5; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 1; i < 6; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = i; j < 5; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 1; i < 6; i++)
    {
        for (int j = i; j < 5; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    
    // 마름모
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 6; i < j; j--)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "**";
        }
        cout << endl;
    }
    for (int i = 1; i < 6; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 6; j > i; j--)
        {
            cout << "**";
        }
        cout << endl;
    }

    /*
         도전과제1. 마름모 찍기 (힌트 : 나머지 연산자를 잘쓰면 된다)

        - 조건 : for문 1번 + 1줄
        - 배운것 이외에는 사용 금지 (해금)
    */

    for (i = 1; i < 12; i++)
    {
        cout << " " << "*" << endl;
        // 공백을 6 - i%6만큼? 이것도 역순?
        // **을 i 1~6,5~1
    }

}

/*
    과제1. 구구단 구현

    - 3종의 반복문을 이용해서 구구단 구현
     - for / while / do ~ while

    과제2. 연산자 활용

    - a. 두개의 정수를 받아서 두 수의 덧샘과 뺄샘의 결과를 출력하는 프로그램 작성

    - b. 3개의 정수 (num1, num2, num3)를 받아서 다음 연산의 결과를 출력하는 프로그램 작성
     ex) (num1 + num2) * (num3 + num1) % num1 = ?

    - c. 입력 받은 두 정수를 나누었을때 얻게 되는 몫과 나머지를 출력하는 프로그램 작성
     ex) 7과 2가 입력 -> 몫으로 3 / 나머지는 1이 출력되면 된다.

    과제3. 반복문 출력

    - for / while / do ~ while문 모두 사용

    - 1부터 20까지 출력하시오.
     - 짝수만

    - 20에서 1까지 출력하시오.

    과제4. 반복문 숙달

    - 본인 판단하에 가장 적합한 반복문을 사용할것.
    - 정수 하나를 입력 받아 -5씩 반복적으로 연산이 되는 식을 만든다.
     - 종료 조건 : -15를 넘어가면 탈출
     - 조건 : 입력 받는 값은 -10 ~ 10 사이의 숫자여야 하고 이외의 값을 입력시 프로그램을 종료를 시킨다.

     ※ 조건식과 논리 연산자를 잘 보고 조건식을 만들어 반복문이 돌아가게 만드는게 포인트.

    과제5. 별찍기

    - 본인이 판단한 효율적인 반복문 1종을 선정해서 사용할것

    *****
    ****
    ***
    **
    *
    ---------------
    *
    **
    ***
    ****
    *****
    ---------------
    *****
     ****
      ***
       **
        *
    ---------------
        *
       **
      ***
     ****
    *****

   ---------------

        **
       ****
      ******
     ********
    **********
   ************
    **********
     ********
      ******
       ****
        **


    도전과제1. 마름모 찍기 (힌트 : 나머지 연산자를 잘쓰면 된다)

    - 조건 : for문 1번 + 1줄
     - 배운것 이외에는 사용 금지 (해금)


    한줄 조사. 조건문

    - 노트에 적어온다.

    - 비유할 것 생각해 온다. (ex: 조건문은 000이다.)

*/