#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));

    int Bingo[5][5]; // ������
    int count = 1; // 1~25�ֱ� ���� ����

    int Bingo_count = 0; // ���� ī��Ʈ
    int select; // �Է¼���

    // ������ ä���
    for (int i = 0; i < 5; i++) {

        for (int j = 0; j < 5; j++) {
            Bingo[i][j] = count++;
        }
    }
    // ����
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

    //�ϼ��� ������
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (Bingo[i][j] < 10)
                cout << " ";
            cout << Bingo[i][j] << " ";
        }
        cout << endl;
    }

    //���� ����
    while (Bingo_count < 3) {
        Bingo_count = 0;
        cin >> select;

        if (select > 0 && select < 26) {

            //�Է��� ��ȣ ã�Ƽ� 0 �����
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++) {
                    if (Bingo[i][j] == select)
                        Bingo[i][j] = 0;
                }
            }

            //�˻�����
            for (int i = 0; i < 5; i++) {
                switch (i)
                {
                case 0:
                case 4:
                    //�밢�� ����Ȯ��(�»�-���� / ����-���)
                    for (int j = 0; j < 5; j++) {
                        if ((Bingo[j][j] > 0) && i == 0 || (Bingo[j][4 - j] > 0) && i == 4)
                            break;
                        else if (j == 4)
                            Bingo_count++;
                    }
                default:
                    //������ ����Ȯ��
                    for (int j = 0; j < 5; j++) {
                        if (Bingo[i][j] > 0)
                            break;
                        else if (j == 4)
                            Bingo_count++;
                    }
                }
            }
            //������ ����Ȯ��
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
            cout << "�ٽ� �Է��ϼ���" << endl;
        }
        
        system("cls");
        cout << Bingo_count << "����" << endl;
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (Bingo[i][j] < 10)//���� ���߷���
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