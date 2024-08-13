#include <iostream>

int main() {
//Write a C++ function that takes a month as an argument and returns
// whether it has 30 days, 31 days, or 28/29 days using if-else statements.

#include<bits/stdc++.h>
using namespace std;

string DaysInMonth(int month) {
    if (month == 2) {
        return "28 or 29 days"; 
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return "30 days";
    } else if (month >= 1 && month <= 12) {
        return "31 days"; 
    } else {
        return "Invalid month";
    }
}

int main() {
    int month;
    
    cout << "Enter month number (1-12): ";
    cin >> month;
    
    cout << "The month has: " << DaysInMonth(month);
    
    return 0;
}

OUTPUT:
Enter month number (1-12): 8
The month has: 31 days

    return 0;
}
