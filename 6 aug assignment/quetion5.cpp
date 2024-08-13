#include<bits/stdc++.h>

using namespace std;

void checknumber(int a) {    
    if(a > 0) {
        cout << "positive";
    } else if(a == 0) {
        cout << "zero";
    } else {
        cout << "negative";
    }
}  

int main() {
    int a;
    cout << "enter any number:\n"; 
    cin >> a;
    cout << "your entered number is: " << a << "\n";
    checknumber(a);
    return 0;
}
