/*4. Find the Sum of All Even Numbers in an Array 
o Explanation: Sum all even numbers present in the array. 
o Given Array: {1, 2, 3, 4, 5, 6} 
o Expected Result: 12 (Sum of 2, 4, and 6) */

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
