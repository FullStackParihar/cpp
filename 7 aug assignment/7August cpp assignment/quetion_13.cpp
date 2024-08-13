#include <iostream>

int main() {
//Implement a C++ function that takes a person's income as an argument and returns their tax bracket using if-else statements
#include<bits/stdc++.h>
using namespace std;


int calculateTax(int salary) {
   float tax = 0;

    if (salary <= 10000) {
        tax = 0;
    } else if (salary <= 50000) {
        tax = salary * 0.10;
    } else if (salary <= 100000) {
        tax = salary* 0.20 ;
    } else {
        tax = salary*0.30 ;
    }

    return tax;
}

int main() {
    int salary;

    cout << "Enter your salary: ";
    cin >> salary;


    float totalTax = calculateTax(salary);

    std::cout << "The total tax on a salary of INR " << salary << " is INR " << totalTax;

    return 0;
}

OUTPUT:
Enter your salary: 80000
The total tax on a salary of INR 80000 is INR 16000

    return 0;
}
