#include<bits/stdc++.h>

using namespace std;

string evenodd(int b) {
    string d;
    if(b%2 == 0) {
        d = "even";
        return d;
    } else {
        d = "odd";
        return d;
    }
}    

int main() {
    int a; 
    string c;
    cout << "enter a number\n"; 
    cin >> a;
    cout << "number is: " << a << "\n";
    c = evenodd(a);
    cout << "number is " << c;
    return 0;
}
