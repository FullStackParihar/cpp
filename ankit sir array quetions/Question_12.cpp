// o Explanation: Identify common elements between two arrays.
// o Given Arrays: {1, 2, 2, 1} and {2, 2}
// o Expected Array: {2, 2}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[]= {1, 2,2,1};
    int arr2[]= {2,2};
    //  int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<4;i++){
        for(int j=1;j<2;j++){
             if(arr1[i]==arr2[j]){
                 cout<< arr2[j];
        
     }
        }
    }
     
    

    return 0;
}
