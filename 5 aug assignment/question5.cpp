// 5. Calculate the average of 5 numbers.
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4, num5;
    int sum;
    double average;

    cout << "Enter 5 numbers:" << endl;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    sum = num1 + num2 + num3 + num4 + num5;
    average = sum / 5.0;

    cout << "The average of the entered integers is: " << average << endl;
    return 0;
}
