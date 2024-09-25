#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 1, b;

    cout << a << " ";

    int count = 1;

    for (int i = 1; i < 10; i++)
    {

        if (i % 2 != 0)
        {
            a = pow(2, count);
            count++;
            cout << a << " ";
        }
        else
        {
            cout << a << " ";
        }
    }
    return 0;
}
