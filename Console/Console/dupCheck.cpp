#include <iostream>

using namespace std;


int main()
{
    int arr1[] = { 5,4,5,10 };
    int arr2[] = { 5,4,5,5,10 };
    int arr3[] = { 5,4,5,20 };

    // 배열 1이 가장 짧다고 가정하겠습니다.
    int checkedNums[4] = {};    // 체크된 수 넣을 배열
    int idx = 0;
    for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) // 배열 1 
    {
        bool isAlreadyFound = false;
        for (int c = 0; c < idx; c++) // 중복회피
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
        for (int k = 0; k < sizeof(arr2) / sizeof(arr2[0]); k++) // 배열 2
        {
            if (arr1[i] == arr2[k])
            {
                checked2 = true;
                break;
            }

        }


        bool checked3 = false;
        for (int j = 0; j < sizeof(arr3) / sizeof(arr3[0]); j++) // 배열 3
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
