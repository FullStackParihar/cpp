#include <iostream>

int main() {
//Develop a C++ function that takes a character as an argument and returns its ASCII 
 //value category (digit, uppercase letter, lowercase letter, special character) using if-else statements.

 #include <bits/stdc++.h>
 using namespace std;

 string checkcharacter(char c){
    if(isdigit(c)){
        return "digit.";
    }
    else if(islower(c)){
         return "lowecase character";
    }
    else if(isupper(c)){
        return "uppercase character";
    }
    else{
        return "special character";
    }
 }
 int main(){
    char c;
    cout<<"Enter any character: ";
    cin>>c;
    cout<<"The character entered by you is a "<<(checkcharacter(c));
    return 0;
 }

OUTPUT:
Enter any character: 8
The character entered by you is a digit.

    return 0;
}
