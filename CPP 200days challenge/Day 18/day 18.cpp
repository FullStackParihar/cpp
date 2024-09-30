 
#include <bits/stdc++.h>
using namespace std;

// Overloaded function for 'int' type
int userprint(int a) {
    cout << "Called userprint(int): A" << endl;
    return 0;
}

// Overloaded function for 'float' type
float userprint(float b) {
    cout << "Called userprint(float): B" << endl;
    return 0;
}

// Overloaded function for 'long' type
long userprint(long c) {
    cout << "Called userprint(long): C" << endl;
    return 0;
}

// Overloaded function for 'double' type
double userprint(double d) {
    cout << "Called userprint(double): D" << endl;
    return 0;
}

int main() {
    // Declare variables of different types
    int a = 123;
    float b = 2.3;
    long c = 3456789;
    double d = 345678.4567890;

    // Print the values of the variables
    cout << "Values of the variables: " << a << " " << b << " " << c << " " << d << endl;

    // Call the appropriate overloaded function
    userprint(a);
    userprint(b);
    userprint(c);
    userprint(d);

    return 0;
}
 