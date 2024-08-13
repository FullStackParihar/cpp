#include<bits/stdc++.h>

using namespace std;

string alphabate(char a) {    
    if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
        return "vowel";
    } else {
        return "consonant";
    }
}  

int main() {
    char a;
    cout << "enter any alphabet:\n"; 
    cin >> a;
    cout << "your entered alphabet is: " << a << "\n";
    cout << "it is a: " << alphabate(a) << "\n";
    return 0;
}
