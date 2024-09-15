
#include <bits/stdc++.h>
using namespace std;

long factorial(int num)
{
    if (num < 0)
        return 0;
    if (num == 0 || num == 1)
        return 1;
    cout << "Calculating factorial(" << num << ") = " << num << " * factorial(" << num - 1 << ")" << endl;
    return num * factorial(num - 1);
}

int main()
{
    int num = 5;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}
