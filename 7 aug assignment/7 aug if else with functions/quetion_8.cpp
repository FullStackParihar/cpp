#include <iostream>

int main() {
//Write a C++ function that takes a person's weight and height as arguments and returns their Body Mass
// Index (BMI) category (Underweight, Normal weight, Overweight, Obese) using if-else statements
#include<bits/stdc++.h>
using namespace std;

string BMICalculator(double weight, double height) {
    double bmi = weight / (height * height);
    cout<<bmi;
    if (bmi < 18.5) {
        return "Underweight";
    } else if (bmi >= 18.5 && bmi < 24.9) {
        return "Normal weight";
    } else if (bmi >= 25.0 && bmi < 29.9) {
        return "Overweight";
    } else {
        return "Obese";
    }
}

int main() {
    double weight, height;
    
    cout << "Enter weight (in kilograms): ";
    cin >> weight;
    
    cout << "Enter height (in meters): ";
    cin >> height;
    
    if (height <= 0) {
        cout<< "Height must be greater than 0." ;
        return 1;
    }
    cout << "\nBMI Category: " << BMICalculator(weight, height);
    
    return 0;
}
OUTPUT:
Enter weight (in kilograms): 57
Enter height (in meters): 1.53
24.3496
BMI Category: Normal weight

    return 0;
}
