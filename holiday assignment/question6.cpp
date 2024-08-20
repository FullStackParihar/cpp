#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b, c, d;
    cout << "enter the size of matrix 1 :";
    cin >> a >> b;
    int arr1[a][b];
    for (int i = 0; i < a; i++)
    {

        for (int j = 0; j < b; j++)
        {

            cout << "enter the value at " << i << " and " << j << " ";
            cin >> arr1[i][j];
        }

        cout << endl;
    }

    for (int i = 0; i < a; i++)
    {

        for (int j = 0; j < b; j++)
        {

            cout << arr1[i][j] << " ";
        }

        cout << endl;
    }
    cout << "enter the size of matrix 2 :";
    cin >> c >> d;
    int arr2[c][d];

    for (int i = 0; i < c; i++)
    {

        for (int j = 0; j < d; j++)
        {

            cout << "enter the value at " << i << " and " << j << " ";
            cin >> arr2[i][j];
        }

        cout << endl;
    }

    for (int i = 0; i < c; i++)
    {

        for (int j = 0; j < d; j++)
        {

            cout << arr2[i][j] << " ";
        }

        cout << endl;
    }

    if (a == c && b == d)
    {
        int res[a][b];
        for (int i = 0; i < a; i++)
        {

            for (int j = 0; j < b; j++)
            {
                res[i][j] = arr1[i][j] + arr2[i][j];
            }
        }

        cout<<endl<<"the resultant matrix after addition :"<<endl;

        for (int i = 0; i < 3; i++)
        {

            for (int j = 0; j < 3; j++)
            {

                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }

    if (b == c)
    {

        int arr[a][d];
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < d; j++)
            {
                arr[i][j] = 0;
                for (int k = 0; k < b; k++)
                {
                    arr[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }

        cout << endl
             << "the resultant matrix after multipilcation is :" << endl;

        for (int i = 0; i < a; i++)
        {

            for (int j = 0; j < d; j++)
            {

                cout << arr[i][j] << " ";
            }

            cout << endl;
        }
    }

    else
        cout << "the multiplication could not done ";

    return 0;
}