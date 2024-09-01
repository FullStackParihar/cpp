// o Explanation: Identify all unique triplets in the array that sum up to zero.
// o Given Array: {-1, 0, 1, 2, -1, -4}
// o Expected Triplets: {-1, -1, 2} and {-1, 0, 1}





#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {-1, 0, 1, 2, -1, -4};

    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        int j = i + 1;
        int k = arr.size() - 1;

        while (j < k)
        {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum < 0)
            {
                j++;
            }
            else if (sum > 0)
            {
                k--;
            }
            else
            {
                cout << arr[i] << "\t" << arr[j] << "\t" << arr[k] << endl;
                j++;
                k--;
            }
        }
    }

    return 0;
}

