#include <iostream>

using namespace std;


int main()
{
    int arr1[] = { 5,4,5,10 };
    int arr2[] = { 5,4,5,5,10 };
    int arr3[] = { 5,4,5,20 };

    // �迭 1�� ���� ª�ٰ� �����ϰڽ��ϴ�.
    int checkedNums[4] = {};    // üũ�� �� ���� �迭
    int idx = 0;
    for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) // �迭 1 
    {
        bool isAlreadyFound = false;
        for (int c = 0; c < idx; c++) // �ߺ�ȸ��
        {
            if (checkedNums[c] == arr1[i])
            {
                isAlreadyFound = true;
                break;
            }
        }
        if (isAlreadyFound)
        {
            continue;
        }

        bool checked2 = false;
        for (int k = 0; k < sizeof(arr2) / sizeof(arr2[0]); k++) // �迭 2
        {
            if (arr1[i] == arr2[k])
            {
                checked2 = true;
                break;
            }

        }


        bool checked3 = false;
        for (int j = 0; j < sizeof(arr3) / sizeof(arr3[0]); j++) // �迭 3
        {
            if (arr1[i] == arr3[j])
            {
                checked3 = true;
                break;
            }
        }
        if (checked2 && checked3)
        {
            checkedNums[idx++] = arr1[i];
        }
    }
    //cout << a << endl;
    //cout << checkNum[0] << " ";

    for (int i = 0; i < idx; i++)
    {
        cout << checkedNums[i] << " ";
    }
}
