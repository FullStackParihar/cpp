//o Explanation: Move all zero elements to the end while maintaining the order of
//non-zero elements.
//o Given Array: {0, 1, 0, 3, 12}
//o Expected Array: {1, 3, 12, 0, 0}


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nums[5] = {0, 1, 0, 3, 12};

    int n = sizeof(nums) / sizeof(nums[0]);
    int i = 0;
    int temp;
    for (int j = 0; j < n; j++)
    {
        if (nums[j] != 0)
        {
            temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
        }
    }

    for (int j = 0; j < n; j++)
    {
        cout << nums[j] << "\t";
    }

    return 0;
}

