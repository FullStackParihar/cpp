#include <iostream>

int main() {
///Implement a C++ function that takes a student's attendance percentage 
//as an argument and returns whether they are eligible for exams using if-else statements.
#include <bits/stdc++.h>
using namespace std;
string check_eligibilty(int attendance){
    if(attendance>=75){
        return "Eligible for exams.";
    }
    else{
        return "Not eligible for exam.";
    }
}
int main(){
    int attendance;
    cout<<"Enter the attendance: ";
    cin>>attendance;
    cout<<"The student is "<<(check_eligibilty(attendance));
    return 0;
}

OUTPUT:

Enter the attendance: 90
The student is Eligible for exams.

    return 0;
}
