#include <iostream>

int main() {
//Create a C++ program that takes a floating-point number as input and prints whether it is positive,
// negative, or zero using if-else statements (without return, with argument)

#include<bits/stdc++.h>
using namespace std;

void classifyNumber(double number) {
    if (number > 0) {
        cout << number << " is positive." ;
    } else if (number < 0) {
        cout << number << " is negative." ;
    } else {
        cout << number << " is zero." ;
    }
}

int main() {
    double num;
    
    cout << "Enter a floating-point number: ";
    cin >> num;
    
    classifyNumber(num);
    
    return 0;
}

OUTPUT:
Enter a floating-point number: 8.9
8.9 is positive.

    return 0;
}
