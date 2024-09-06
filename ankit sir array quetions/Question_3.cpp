// 3. Remove Duplicates from a Sorted Array 
// o Explanation: Remove duplicates and return the unique elements. o Given Array: {1, 1, 2, 3, 3, 4} 
// o Expected Array: {1, 2, 3, 4} 

#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& arr)
{
    if (arr.size() == 0)
        return 0;

    int uniqueIndex = 0;
    for (int i = 1; i < arr.size(); i++)
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
    vector<int> arr = {1, 1, 2, 3, 3, 4};

    int newLength = removeDuplicates(arr);

    cout << "Expected Array: ";
    for (int i = 0; i < newLength; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}