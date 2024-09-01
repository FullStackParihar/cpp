// o Explanation: Identify a pair of elements that sum up to a specified value.
// o Given Array: {1, 4, 5, 3, 2}
// o Sum Value: 7
// o Expected Pair: {4, 3}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 4,5,3,2};
    int sum=7;

    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i=0;i<5;i++){
        for(int j=1;j<i;j++){
            if(arr[i]+arr[j]==7){
                 cout<<arr[i]<<arr[j]<<endl;
            }
            
        }
    }

    return 0;
}
