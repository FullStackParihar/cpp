#include <iostream>

int main() {
3.print 1 2 3 6 11 20 ....
    //  a=1 b=2 c=3  d =a+b+c


#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int arr[10];
    arr[0]=1;
    arr[1]=2;
    arr[2]=3;
    
    
    for(int i=3;i<10;i++){
        arr[i]=arr[i-1]+arr[i-2]+arr[i-3];
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}




    return 0;
}
