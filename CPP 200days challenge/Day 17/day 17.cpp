 #include <bits/stdc++.h>
using namespace std;
 
int gcd(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}
 
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;
 
    cout << "Enter two integers to find their LCM: ";
    cin >> num1 >> num2;
 
    int result = lcm(num1, num2);
    cout << "The LCM of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}
 