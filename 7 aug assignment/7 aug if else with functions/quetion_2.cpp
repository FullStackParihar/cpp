#include <iostream>

int main() {
//. Create a C++ function that takes a temperature in Celsius as an argument 
//and returns the corresponding category (Cold, Warm, Hot) using if-else statements.

#include<bits/stdc++.h>
using namespace std;


string categorizeTemperature(float celsius) {
    if (celsius < 10.0) {
        return "Cold";
    } 
    else if (celsius >= 10.0 && celsius < 25.0) {
        return "Warm";
    } 
    else {
        return "Hot";
    }
}

int main() {
    float celsius;
    
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    
    
    cout << "The temperature is: " << categorizeTemperature(celsius);
    
    return 0;
}

OUTPUT:
Enter temperature in Celsius: 78
The temperature is: Hot

    return 0;
}
