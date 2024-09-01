// o Explanation: Sort an array containing only 0s, 1s, and 2s in linear time.
// o Given Array: {2, 0, 1, 2, 1, 0}
// o Expected Array: {0, 0, 1, 1, 2, 2}



#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6] = {2, 0, 1, 2, 1, 0};

    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}

