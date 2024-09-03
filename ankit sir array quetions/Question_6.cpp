// 6. Find the Index of the First Occurrence of a Value 
// o Explanation: Return the index of the first appearance of a specified value. o Given Array: {10, 20, 30, 40, 50} 
// o Search Value: 30 
// o Expected Result: 2

#include <iostream>
using namespace std;

int occurindex(int arr[], int n)
{
    if (n == 0)
        return 0;

     
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 30)
        {
           
             return i;
        }
    }

    return 0;
}

    int main()
    {
        int arr[] = {10, 20, 30, 40, 50};
        int n = sizeof(arr) / sizeof(arr[0]);

        int firstoccur = occurindex(arr, n);

        cout << "Expected result: "<< firstoccur;
         

        return 0;
    }