/*5. Merge Two Sorted Arrays 
o Explanation: Combine two sorted arrays into one sorted array. 
o Given Arrays: {1, 3, 5} and {2, 4, 6} 
o Expected Array: {1, 2, 3, 4, 5, 6}*/

#include <iostream>
using namespace std;

int sum(int arr[])
{
  int add=0;

    for (int i = 0; i < 6; i++)
    {
        if (arr[i]%2== 0)
        {
             add=add+arr[i];
        }
    }

    return add;
}

    int main()
    {
        int arr[] = {1, 2, 3, 4, 5, 6};
       

        int newLength = sum(arr);

        cout << newLength;
        

        return 0;
    }
