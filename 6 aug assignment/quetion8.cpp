#include<bits/stdc++.h>

using namespace std;

string alphabate(int a) {    
    if(a > 60) {
        return "senior";
    } else if(a > 18 && a < 60) {
        return "adult";
    } else if(a > 13 && a < 17) {
        return "teenager";
    } else if(a > 0 && a < 13) {
        return "child";
    } else {
        return "invalid";
    }
}  

int main() {
    int a;
    string d;
    cout << "enter the age:\n"; 
    cin >> a;
    cout << "your entered age is: " << a << "\n";
    cout << "is a: " << alphabate(a) << "\n";
    return 0;
}
