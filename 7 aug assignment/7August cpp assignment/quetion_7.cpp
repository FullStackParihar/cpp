#include <iostream>

int main() {
//Create a C++ function that takes a character as an argument and returns 
//whether it is an uppercase letter or not using if-else statements.
#include<bits/stdc++.h>
using namespace std;
bool checkuppercase(char u){
    if (u >= 'A' && u <= 'Z') {
        return true;  
    } else {
        return false;
    }
}

int main() {
    char u;

    cout << "Enter a character: ";
    cin >> u;
    
    // Check if the entered character is uppercase
    if (checkuppercase(u)) {
        cout << u << " is an uppercase letter." ;
    } else {
        cout << u << " is not an uppercase letter.";
    }
    return 0;
}

OUTPUT:
Enter a character: K
K is an uppercase letter.

    return 0;
}
