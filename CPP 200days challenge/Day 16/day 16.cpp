#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the number of chocolates: ";
    cin >> n;
    cout << "Enter the number of children: ";
    cin >> m;

    if (m > n || m < 0)
    {
        cout << "Not possible";
        return 0;
    }

    int children[m];
 
    for (int i = 0; i < m; i++)
    {
        children[i] = n / m;
    }
    n = n % m;
    int j = 0;
    while (n > 0)
    {
        children[j]++;
        j++;
        n--;
    }

    cout << "Chocolates distributed as follows: ";
    for (int i = 0; i < m; i++)
    {
        cout << children[i] << "\t";
    }

    return 0;
}
 