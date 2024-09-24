#include <bits/stdc++.h>
using namespace std;

void series(int n) {
 
    int a = 1, b = 2, c = 3;

    cout << a << " " << b << " " << c << " ";

    for (int i = 3; i < n; i++) {
        int d = b * c;  
        cout << d << " ";

        a = b;
        b = c;
        c = d;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    if (n >= 3) {
        series(n);
    }  
    return 0;
}
