/*1. Find the Maximum Value in an Array
o Explanation: Identify the largest value in the array.
o Given Array: {3, 1, 4, 1, 5, 9, 2}
o Expected Result: 9 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a[7] = { 3,
                 1,
                 4,
                 1,
                 5,
                 9,
                 2 };

    int max = a[0];

    for (int i = 0; i < 7; i++)
    {

        if (max < a[i]){            
            max = a[i];
    }
    }
    cout<<max;

    return 0;
}