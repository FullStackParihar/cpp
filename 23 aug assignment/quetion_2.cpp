#include <iostream>

int main() {
2.print 1 2 2 4 8 32 ....
//    a=1 b=2 c =a*b

#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int arr[10];
    arr[0]=1;
    arr[1]=2;
    
    
    for(int i=2;i<10;i++){
        arr[i]=arr[i-1]*arr[i-2];
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}





    return 0;
}
