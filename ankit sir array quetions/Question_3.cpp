// 3. Remove Duplicates from a Sorted Array 
// o Explanation: Remove duplicates and return the unique elements. o Given Array: {1, 1, 2, 3, 3, 4} 
// o Expected Array: {1, 2, 3, 4} 

#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n)
{
    if (n == 0)
        return 0;

    int uniqueIndex = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[uniqueIndex])
        {
            uniqueIndex++;
            arr[uniqueIndex] = arr[i];
        }
    }

    return uniqueIndex + 1;
}

    int main()
    {
        int arr[] = {1, 1, 2, 3, 3, 4};
        int n = sizeof(arr) / sizeof(arr[0]);

        int newLength = removeDuplicates(arr, n);

        cout << "Expected Array: ";
        for (int i = 0; i < newLength; i++)
        {
            cout << arr[i] << " ";
        }

        return 0;
    }
