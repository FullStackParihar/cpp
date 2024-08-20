 //Create a 2x2 matrix and a 2x2 matrix with user-defined values.
 
 #include <bits/stdc++.h>
using namespace std;

int main()
{  int arr[2][2];
 
 
 
 for(int i=0; i<2; i++)
 {
      
      for(int j=0; j<2; j++)
      {
      
     cout<<"enter the value at "<< i <<" and "<< j <<" ";
      cin>>arr[i][j];
       }
 
    cout<<endl;
}

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