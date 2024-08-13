#include <iostream>

int main() {
// Write a C++ function that takes a number as an argument and returns whether it is a Fibonacci number or not using if-else statements.

#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int x)
{
    if (x < 0)
        return false;
    int s = static_cast<int>(sqrt(x));
    return (s * s == x);
}

bool isFibonacciNumber(int n)
{
    int num1 = n * n * 5 + 4;
    int num2 = n * n * 5 - 4;
    if (n < 0)
    {
        return false;
    }
    else if (isPerfectSquare(num1) || isPerfectSquare(num2))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int num;
    cout << "Enter any number ";
    cin >> num;
    if (isFibonacciNumber(num))
    {
        cout << num << " is a fibonacci number";
    }
    else
    {
        cout << num << " is not a fibonacci number";
    }
    return 0;
}

OUTPUT:

Enter any number 55
55 is a fibonacci number

    return 0;
}
