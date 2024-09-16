#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

string checkDivisibilityAndPrime(int num) {
    if (num % 4 == 0 || num % 5 == 0 || num % 6 == 0) {
        if (isPrime(num)) {
            return "Divisible by 4, 5, or 6 and is a Prime Number";
        } else {
            return "Divisible by 4, 5, or 6 but not a Prime Number";
        }
    } else {
        return "Not Divisible by 4, 5, or 6";
    }
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    string result = checkDivisibilityAndPrime(num);
    cout << result << endl;

    return 0;
}