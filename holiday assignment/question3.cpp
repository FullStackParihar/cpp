// matrix with user-input.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[2][2];
int sumarray[][];

    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {
            cout << "enter the value at " << i << " and " << j << " ";
            cin >> arr[i][j];
        }

        cout << endl;
    }

 int sumarray[2][2];
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 2; j++)
        {
            sumarray[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {

            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}