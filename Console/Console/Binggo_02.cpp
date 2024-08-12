#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));

    int Bingo[5][5]; // 빙고판
    int count = 1; // 1~25넣기 위한 변수

    int Bingo_count = 0; // 빙고 카운트
    int select; // 입력숫자

    // 빙고판 채우기
    for (int i = 0; i < 5; i++) {

        for (int j = 0; j < 5; j++) {
            Bingo[i][j] = count++;
        }
    }
    // 셔플
    for (int k = 0; k < 100; k++) {
        int i1, i2, j1, j2;
        i1 = rand() % 5;
        j1 = rand() % 5;
        i2 = rand() % 5;
        j2 = rand() % 5;

        int change;
        change = Bingo[i1][j1];
        Bingo[i1][j1] = Bingo[i2][j2];
        Bingo[i2][j2] = change;
    }

    //완성된 빙고판
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (Bingo[i][j] < 10)
                cout << " ";
            cout << Bingo[i][j] << " ";
        }
        cout << endl;
    }

    //게임 시작
    while (Bingo_count < 3) {
        Bingo_count = 0;
        cin >> select;

        if (select > 0 && select < 26) {

            //입력한 번호 찾아서 0 만들기
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++) {
                    if (Bingo[i][j] == select)
                        Bingo[i][j] = 0;
                }
            }

            //검색시작
            for (int i = 0; i < 5; i++) {
                switch (i)
                {
                case 0:
                case 4:
                    //대각선 빙고확인(좌상-우하 / 좌하-우상)
                    for (int j = 0; j < 5; j++) {
                        if ((Bingo[j][j] > 0) && i == 0 || (Bingo[j][4 - j] > 0) && i == 4)
                            break;
                        else if (j == 4)
                            Bingo_count++;
                    }
                default:
                    //가로줄 빙고확인
                    for (int j = 0; j < 5; j++) {
                        if (Bingo[i][j] > 0)
                            break;
                        else if (j == 4)
                            Bingo_count++;
                    }
                }
            }
            //세로줄 빙고확인
            for (int j = 0; j < 5; j++) {
                for (int i = 0; i < 5; i++) {

                    if (Bingo[i][j] > 0)
                        break;
                    else if (i == 4)
                        Bingo_count++;
                }
            }
        }

        else {
            cout << "다시 입력하세요" << endl;
        }
        
        system("cls");
        cout << Bingo_count << "빙고" << endl;
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (Bingo[i][j] < 10)//라인 맞추려고
                    cout << " ";
                if (Bingo[i][j] == 0)
                    cout << "* ";
                else
                    cout << Bingo[i][j] << " ";
            }
            cout << endl;
        }

    }

}