#include <iostream>

int main() {
//Develop a C++ function that takes three sides of a triangle as arguments 
//and returns whether the triangle is equilateral, isosceles, or scalene using if-else statements.

#include<bits/stdc++.h>
using namespace std;

string classifyTriangle(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0 || (a + b <= c) || (a + c <= b) || (b + c <= a)) {
        return "Invalid triangle"; 
    }

    if (a == b && b == c) {
        return "Equilateral";
    } else if (a == b || b == c || a == c) {
        return "Isosceles"; 
    } else {
        return "Scalene"; 
    }
}

int main() {
    int a,b,c;
    
    cout << "Enter the lengths of the three sides of the triangle:\n";
    cout << "Side 1: ";
    cin >> a;
    cout << "Side 2: ";
    cin >> b;
    cout << "Side 3: ";
    cin >> c;
    
    cout << "The triangle is: " << classifyTriangle(a,b,c);
    
    return 0;
}

OUTPUT:
Side 1: 7
Side 2: 8 
Side 3: 8
The triangle is: Isosceles

    return 0;
}
