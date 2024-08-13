#include<bits/stdc++.h>

using namespace std;

int largest(int a, int b, int c) {    
    if(a > b && a > c) {
        return a;
    } else if(b > c && b > a) {
        return b;
    } else {
        return c;
    }
}  

int main() {
    int a, b, c, d;
    cout << "enter three numbers:\n"; 
    cin >> a >> b >> c;
    cout << "your entered numbers are: " << a << " " << b << " " << c << "\n";
    d = largest(a, b, c);
    cout << "largest number is: " << d;
    return 0;
}
