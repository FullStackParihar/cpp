#include <iostream>

int main() {
//Write a C++ function that takes two numbers as arguments and returns 
//whether they are equal, or which one is larger using if-else statements and relational operators.

#include<bits/stdc++.h>
using namespace std;

void compareNumbers(double a, double b) {
    if (a == b) {
        cout << "The numbers are equal." ;
    } else if (a > b) {
       cout << a << " is larger than " << b << "." ;
    } else {
       cout << b << " is larger than " << a << ".";
    }
}

int main() {
    double a, b;
    
    std::cout << "Enter the first number: ";
    std::cin >> a;
    
    std::cout << "Enter the second number: ";
    std::cin >> b;
    
    compareNumbers(a, b);
    
    return 0;
}

OUTPUT:
Enter the first number: 78
Enter the second number: 87
87 is larger than 78.

    return 0;
}
