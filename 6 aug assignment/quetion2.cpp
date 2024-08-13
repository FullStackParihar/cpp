#include<bits/stdc++.h>

using namespace std;

string persentage(int a) {    
    if(a >= 90) {
        return "A";
    } else if(a >= 60) {
        return "B";
    } else if(a >= 30) {
        return "C";
    } else {
        return "fail";
    }
}  

int main() {
    int a; 
    string c;
    cout << "enter your percentage:\n"; 
    cin >> a;
    cout << "your percentage is: " << a << "\n";
    c = persentage(a);
    cout << "your grade is: " << c;
    return 0;
}
