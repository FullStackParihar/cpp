// Count Digits: The code first calculates the number of digits in the input number.
// Power Calculation: It then raises each digit to the power of the number of digits.
// Armstrong Check: Finally, it checks if the sum of these powers equals the original number.

#include <bits/stdc++.h>
using namespace std;

int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        count++;
        num /= 10;
    }
    return count;
}

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

bool isArmstrong(int num) {
    int originalNum = num;
    int numDigits = countDigits(num);
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += power(digit, numDigits); 
        num /= 10;
    }

    return sum == originalNum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
