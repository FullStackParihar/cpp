o Explanation: List all possible subarrays of the given array.
o Given Array: {1, 2}
o Expected Subarrays: {1}, {2}, {1, 2}




#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2};
    vector<vector<int>> subarr;

    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        vector<int> tempsubarr;
        for (int j = i; j < n; j++)
        {
            tempsubarr.push_back(arr[j]);
            subarr.push_back(tempsubarr);
        }
    }

    for (int i = 0; i < subarr.size(); i++)
    {
        for (int j = 0; j < subarr[i].size(); j++)
        {
            cout << subarr[i][j] << "\t";
        }
        cout << endl;
    }
}

