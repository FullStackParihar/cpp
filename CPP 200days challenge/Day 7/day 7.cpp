// Sum Calculation: Loops through numbers from 1 to n and adds them together.
// Output: Displays the sum of the first n numbers.

#include <iostream>

int sumOfNumbers(int n)
{
    int sum = 0;

    for (int i = 1; i <= n; ++i)
    {
        sum += i;
    }

    return sum;
}

int main()
{
    int n = 5;

    int result = sumOfNumbers(n);
    std::cout << "The sum of the first " << n << " numbers is: " << result << std::endl;

    return 0;
}
