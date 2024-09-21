// Natural Logarithm: Calculates the log to the base e.
// Logarithm Base 10: Computes the log to the base 10.
// Logarithm Base 2: Computes the log to the base 2, useful in binary systems.

#include <bits/stdc++.h>
using namespace std;

double naturalLog(double x) {
    return log(x);  
}

double logBase10(double x) {
    return log10(x);   
}

double logBase2(double x) {
    return log2(x); 
}

int main() {
    double x;
    cout << "Enter a number to calculate its natural log, log base 10, and log base 2: ";
    cin >> x;

    cout << "Natural Log (ln): " << naturalLog(x) << endl;
    cout << "Log base 10: " << logBase10(x) << endl;
    cout << "Log base 2: " << logBase2(x) << endl;

    return 0;
}
 

 
 