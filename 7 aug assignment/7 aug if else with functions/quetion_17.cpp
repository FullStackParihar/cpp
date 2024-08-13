#include <iostream>

int main() {
//Develop a C++ function that takes an integer as an argument and returns whether it is a perfect square using logical operators.
#include<bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int x) {
    if (x < 0) return false;  
    int s = static_cast<int>(sqrt(x));
    return (s * s == x);  
}

int main(){
    int num;
    cout<<"Enter any number ";
    cin>>num;
    if(isPerfectSquare(num)){
        cout<<num<<" is a perfect square";
    }
    else{
        cout<<num<<" is not a perfect square";
    }
    return 0;
}

OUTPUT:
Enter any number 89
89 is not a perfect square

    return 0;
}
