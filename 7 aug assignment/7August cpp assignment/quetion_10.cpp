#include <iostream>

int main() {

//Write a C++ function that takes a person's hourly wage and hours worked as arguments
// and returns their total pay, including overtime pay for hours worked over 40, using if-else statements.
 #include<bits/stdc++.h>
using namespace std;

int wages(int hourlywage,int hoursworked){
    int total_pay;
    if (hoursworked > 40) {
        int regularHours = 40;
        int overtimeHours = hoursworked - regularHours;
        double overtimeWage = hourlywage * 1.5;  

        total_pay = (regularHours * hourlywage) + (overtimeHours * overtimeWage);
    } else {
        
        total_pay = hoursworked * hourlywage;
    }
    return total_pay;
}

int main(){
    int hourlywage,hoursworked;
    cout<<"Enter the hourly wage: ";
    cin>>hourlywage;

    cout<<"Enter number of hours worked: ";
    cin>>hoursworked;

    cout<<"Total amout to be paid is: "<<(wages(hourlywage,hoursworked));
    return 0;
}

OUTPUT:
Enter the hourly wage: 100
Enter number of hours worked: 240
Total amout to be paid is: 34000

    return 0;
}
