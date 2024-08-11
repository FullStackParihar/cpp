// 7. Take an input from the user and check whether it is positive, negative, or zero.
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter an integer: " << endl;
    cin >> num;

    if (num > 0) {
        cout << "The number is positive." << endl;
    } else if (num < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }
    return 0;
}
