#include <iostream>

int main() {
 //Develop a C++ function that takes a string as an argument and returns whether it contains only digits using if-else statements.

 #include<bits/stdc++.h>
using namespace std;

bool containsonlydigits(string str){
    for (char ch : str) {
        if (!isdigit(ch)) {
            return false;  
        }
    }
    return true;  
}

int main(){
    string str;
    cout<<"Enter a string.";
    cin>>str;
    if (containsonlydigits(str)) {
        cout << "The string contains only digits." ;
    } else {
        cout << "The string does not contain only digits." ;
    }
    return 0;
}

OUTPUT:
Enter a string.90786GY
The string does not contain only digits.

    return 0;
}
