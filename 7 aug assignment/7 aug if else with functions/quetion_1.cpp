#include <iostream>

int main() {
//Write a C++ function that takes an integer as an argument and uses an if-else statement to
// determine whether the number is prime or not, then returns the result.

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int number) {
    if (number <= 1) {
        return false; 
    }
    if (number == 2) {
        return true; 
    }
    if (number % 2 == 0) {
        return false; 
    }
    
    for (int i = 3; i * i <= number; i += 2) {
        if (number % i == 0) {
            return false; 
        }
    }
    
    return true; 
}

int main() {
    int num;
    
    cout << "Enter an integer: ";
    cin >> num;
    
    if (isPrime(num)) {
        cout << num << " is a prime number.";
    } else {
        cout << num << " is not a prime number." ;
    }
    
    return 0;
}

output:Enter an integer: 8
8 is not a prime number.

    return 0;
}
