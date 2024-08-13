#include <iostream>

int main() {
//Write a C++ function that takes a person's age as an argument and returns their 
//life stage (infant, toddler, child, adolescent, adult, senior) using if-else statements.
#include <bits/stdc++.h>
using namespace std;
string lifestage(int age){
    if(age<=2){
        return "infant";
    }
    else if(age<=5){
        return "toddler";
    }
    else if(age<=9){
        return "child";
    }
    else if(age<=16){
        return "adolescent";
    }
    else if(age<=59){
        return "adult";
    }
    else{
        return "senior";
    }
}

int main(){
    int age;
    cout<<"Enter the age of the person: ";
    cin>>age;
    cout<<"The person is a "<<(lifestage(age))<<".";
    return 0;
}

OUTPUT:

Enter the age of the person: 89
The person is a senior.
    return 0;
}
