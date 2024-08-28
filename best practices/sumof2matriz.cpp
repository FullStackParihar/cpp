// Create a 2x2 matrix and a 2x2 matrix with user-defined values.

#include <bits/stdc++.h>
using namespace std;

 
int main()
{
    int arr1[2][2];
    int arr2[2][2];
    int arr[2][2];

    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {

            cout << "enter the value at " << i << " and " << j << " ";
            cin >> arr1[i][j];
        }

        cout << endl;
    }

    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {

            cout << arr1[i][j] << " ";
        }

        cout << endl;
    }

    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {

            cout << "enter the value at " << i << " and " << j << " ";
            cin >> arr2[i][j];
        }

        cout << endl;
    }

    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {

            cout << arr2[i][j] << " ";
        }

        cout << endl;
    }

   int res[2][2];
    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {
            res[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

     for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {

            cout << res[i][j] << " ";
        }
        cout << endl;
    }
   

    return 0;
}