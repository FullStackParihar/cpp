#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4] = {1, 2, 3, 4};
    int nums[4];

    int n = sizeof(arr) / sizeof(arr[0]);

    int prod = 1;
    for (int i = 0; i < n; i++)
    {
        prod *= arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        nums[i] = prod / arr[i];
        cout << nums[i] << " ";
    }

    return 0;
}