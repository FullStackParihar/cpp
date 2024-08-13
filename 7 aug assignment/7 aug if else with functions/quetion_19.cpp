#include <iostream>

int main() {
//Write a C++ function that takes a temperature in Fahrenheit as an argument and returns its 
//equivalent in Celsius, with additional messages if it is freezing or boiling using if-else statements.
#include <bits/stdc++.h>
using namespace std;
string convert_temperature(float fahrenheit){
    float celcius=(fahrenheit-32)*(5.0/9.0);

    if(celcius<=0){
        return " freezing point.";
    }
    else if(celcius>=100){
        return " boiling point.";
    }
    else{
        return " between boiling and freezing point.";
    }
}

int main(){
    float fahrenheit;
    cout<<"Enter temperature in fahrenheit: ";
    cin>>fahrenheit;
    cout<<"The temperature is"<<(convert_temperature(fahrenheit));
    return 0;
}

OUTPUT:
Enter temperature in fahrenheit: -90
The temperature is freezing point.

    return 0;
}
