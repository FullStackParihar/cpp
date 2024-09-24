// Sum Calculation: This function calculates the sum of integers from 1 to n using a simple loop.
// User Input: The user inputs a number, and the program computes the sum.

#include <iostream>
using namespace std;

int sumToN(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    cout << "The sum of first " << n << " numbers is: " << sumToN(n) << endl;
    return 0;
}
