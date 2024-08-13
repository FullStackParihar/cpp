#include <iostream>

int main() {
//Write a C++ function that takes an employee's years of service as 
//an argument and returns their bonus percentage using if-else statements.
#include <bits/stdc++.h>
using namespace std;
string bonus(int years_of_experience){
    if(years_of_experience<=2){
        return "N0 bonus.";
    }
    else if(years_of_experience<=5){
        return "5% Bonus.";
    }
    else if(years_of_experience<=10){
        return "10% Bonus";
    }
    else{
        return "15% Bonus";
    }
}
int main(){
    int years_of_experience;
    cout<<"Enter years of experience: ";
    cin>>years_of_experience;
    cout<<(bonus(years_of_experience));
    return 0;
}

OUTPUT:
Enter years of experience: 14
15% Bonus

    return 0;
}
