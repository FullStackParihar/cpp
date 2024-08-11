// 1. Take 15 integer inputs from the user and print them.
#include <iostream>

int main() {
    using namespace std;
    int num1, num2, num3, num4, num5;
    int num6, num7, num8, num9, num10;
    int num11, num12, num13, num14, num15;

    cout << "Enter 15 integers:" << endl;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    cin >> num6 >> num7 >> num8 >> num9 >> num10;
    cin >> num11 >> num12 >> num13 >> num14 >> num15;

    cout << "15 integers are:" << endl;
    cout << num1 << " " << num2 << " " << num3 << " " << num4 << " " << num5 << " ";
    cout << num6 << " " << num7 << " " << num8 << " " << num9 << " " << num10 << " ";
    cout << num11 << " " << num12 << " " << num13 << " " << num14 << " " << num15 << endl;

    return 0;
}
