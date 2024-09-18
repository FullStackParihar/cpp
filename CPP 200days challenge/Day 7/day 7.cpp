#include <iostream>

int sumOfNumbers(int n) {
    int sum = 0;

    // Loop through numbers from 1 to n
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    return sum;
}

int main() {
    int n = 5; // Example input
    
    int result = sumOfNumbers(n);
    std::cout << "The sum of the first " << n << " numbers is: " << result << std::endl;

    return 0;
}
