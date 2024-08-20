// Create a 2x2 matrix and a 2x2 matrix with user-defined values.

#include <bits/stdc++.h>
using namespace std;

int add(int arr1[3][3], int arr2[3][3])
{

    int res[3][3];
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            res[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

     for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

int main()
{
    int arr1[3][3];
    int arr2[3][3];
    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            cout << "enter the value at " << i << " and " << j << " ";
            cin >> arr1[i][j];
        }

        cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            cout << arr1[i][j] << " ";
        }

        cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            cout << "enter the value at " << i << " and " << j << " ";
            cin >> arr2[i][j];
        }

        cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            cout << arr2[i][j] << " ";
        }

        cout << endl;
    }

    add(arr1, arr2);

   

    return 0;
}