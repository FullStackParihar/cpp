#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}

int sum(int a, int b, int c, int d) {
    return a + b + c + d;
}

int main() {
    int a, b, c, d;
    cout << "Enter four values:" << endl;
    cin >> a >> b >> c >> d;
    int e = sum(a, b, c, d);
    cout << "Sum of four values: " << e << endl;

    if (e > 0) {
        int digitSum = sumOfDigits(e);
        cout << "Sum of digits of the sum: " << digitSum << endl;
    } else if (e == 0) {
        cout << "Squares of the four values: " << endl;
        cout << a * a << " " << b * b << " " << c * c << " " << d * d << endl;
    } else {
        int reversed = reverseNumber(abs(c));
        cout << "Reversed 3rd number (absolute): " << reversed << endl;
    }

    return 0;
}
