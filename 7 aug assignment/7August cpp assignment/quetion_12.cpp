#include <iostream>

int main() {
// Implement a C++ function that takes the number of hours a car is parked
// as an argument and returns the parking fee based on hourly rates using if-else statements.

 #include<bits/stdc++.h>
using namespace std;
 int parking_fee(int hourscarparked, int hourlyfees){
    int parking_fee;
    parking_fee=hourscarparked*hourlyfees;
    return parking_fee;
 }
int main(){
    int hourscarparked,hourlyfees;
   cout<<"Enter the hours the car was parked for: ";
   cin>>hourscarparked;
   cout<<"Enter the hourly fees :";
   cin>>hourlyfees;
    cout<<"total parkin fees= "<<(parking_fee(hourscarparked,hourlyfees));
    return 0;
}

OUTPUT:
Enter the hours the car was parked for: 8
Enter the hourly fees :10
total parkin fees= 80

    return 0;
}
