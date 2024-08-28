/*2. Reverse an Array 
o Explanation: Reverse the order of elements in the array. 
o Given Array: {1, 2, 3, 4, 5} 
o Expected Array: {5, 4, 3, 2, 1}  */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a[] ={1, 2, 3, 4, 5};

    int rev;
    int j=4;
    for (int i = 0; i < 2; i++)
    {
          rev=a[i];
          a[i]=a[j];
          a[j]=rev;
    j--;
    }
    
    for(int i=0;i<5;i++)
    {
        cout<<a[i];
    }

    return 0;
}