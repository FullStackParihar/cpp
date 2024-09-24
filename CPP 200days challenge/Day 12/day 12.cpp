#include <bits/stdc++.h>
using namespace std;
 
int sumOfPrimeFactors(int n) {
    int sum = 0;

    while (n % 2 == 0) {
        sum += 2;
        n /= 2;
    }
 
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            sum += i;
            n /= i;
        }
    }

    if (n > 2) {
        sum += n;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "The sum of prime factors of " << n << " is: " << sumOfPrimeFactors(n) << endl;
    return 0;
}
