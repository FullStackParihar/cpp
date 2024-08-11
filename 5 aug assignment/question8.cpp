// 8. Take input from the user and check whether it is even or odd.
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter an integer: " << endl;
    cin >> num;

    if (num % 2 == 0) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }
    return 0;
}
