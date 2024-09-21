// For Day 10 of my 200-day C++ coding challenge, I explored logarithmic functions in C++.
//  The challenge was to calculate both the natural logarithm (ln) and 
//  the logarithm base 10 of a given number using built-in C++ math functions.

#include <bits/stdc++.h>
 
using namespace std;

double naturalLog(double x) {
    return log(x);  // Natural logarithm (base e)
}

double logBase10(double x) {
    return log10(x);  // Logarithm (base 10)
}

int main() {
    double x;
    cout << "Enter a number to calculate its natural log and log base 10: ";
    cin >> x;

    cout << "Natural Log (ln): " << naturalLog(x) << endl;
    cout << "Log base 10: " << logBase10(x) << endl;

    return 0;
}
 