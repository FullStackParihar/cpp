#include <iostream>

int main() {

//Develop a C++ function that takes a temperature in Celsius as an argument 
//and returns the state of water (solid, liquid, gas) at that temperature using if-else statements.
#include <bits/stdc++.h>
using namespace std;
string checkstate(float temperature){
    if (temperature<=0){
        return " solid ";
    }
    else if(temperature<=100){
        return " liquid ";
    }
    else {
        return " gas ";
    }
}
int main(){
    float temperature;
    cout<<"Enter temperature in celsius: ";
    cin>>temperature;
    cout<<"Water is in"<<(checkstate(temperature))<<"state.";
    return 0;
}

OUTPUT:
Enter temperature in celsius: 78
Water is in liquid state.

    return 0;
}
