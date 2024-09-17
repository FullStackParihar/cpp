// Input Handling: Takes a positive integer from the user.
// Perfect Number Check: Determines if the number is a perfect number by summing its proper divisors.
// Output: Informs whether the number is perfect or not.

#include <iostream>
using namespace std;

bool isPerfectNumber(int num) {
    if (num < 2) return false;
    int sum = 0;
    for (int i = 1; i <= num / 2; i++)
        if (num % i == 0) sum += i;
    return sum == num;
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    if (num <= 0) {
        cout << "The number must be positive!" << endl;
        return 0;
    }
    if (isPerfectNumber(num))
        cout << num << " is a perfect number." << endl;
    else
        cout << num << " is not a perfect number." << endl;
    return 0;
}
