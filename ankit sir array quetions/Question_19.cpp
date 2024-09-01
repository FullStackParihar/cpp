// o Explanation: Count the number of inversions (pairs where the earlier element is
// greater than the later one).
// o Given Array: {2, 4, 1, 3, 5}
// o Expected Result: 3




#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {2, 4, 1, 3, 5};

    int count = 0;

    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
                count++;
        }
    }

    cout << count;

    return 0;
}

