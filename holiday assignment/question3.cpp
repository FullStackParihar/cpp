 //Create a 2x2 matrix and a 2x2 matrix with user-defined values.
 
 #include <bits/stdc++.h>
using namespace std;

int main()
{  int arr[3][3];
 
 arr[0][0]=2;
 arr[0][1]=2;
 arr[1][0]=4;
 arr[1][1]=4;
 
 
 for(int i=0; i<2; i++)
 {
      
      for(int j=0; j<2; j++)
      {
      
     cout<<arr[i][j]<<" ";
      
       }
 
    cout<<endl;
}

    return 0;
}