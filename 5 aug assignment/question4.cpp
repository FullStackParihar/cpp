// 4. Subtract a from b and make the result positive if it is negative.
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter two integers (a and b):" << endl;
    cin >> a >> b;

    c = a - b;

    if (c < 0) {
        c = -c;
    }

    cout << "The positive result of the subtraction is: " << c << endl;
    return 0;
}
