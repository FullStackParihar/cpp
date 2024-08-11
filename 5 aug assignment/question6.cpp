// 6. Swap the values of a and b.
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two integers (a and b):" << endl;
    cin >> a >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping, a = " << a << " and b = " << b << endl;
    return 0;
}
