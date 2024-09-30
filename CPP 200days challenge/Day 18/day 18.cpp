 
#include <bits/stdc++.h>
using namespace std;
 
int userprint(int a) {
    cout << "Called userprint(int): A" << endl;
    return 0;
}
 
float userprint(float b) {
    cout << "Called userprint(float): B" << endl;
    return 0;
}
 
long userprint(long c) {
    cout << "Called userprint(long): C" << endl;
    return 0;
}
 
double userprint(double d) {
    cout << "Called userprint(double): D" << endl;
    return 0;
}

int main() {
    int a = 123;
    float b = 2.3;
    long c = 3456789;
    double d = 345678.4567890;
 
    cout << "Values of the variables: " << a << " " << b << " " << c << " " << d << endl;
 
    userprint(a);
    userprint(b);
    userprint(c);
    userprint(d);

    return 0;
}
 