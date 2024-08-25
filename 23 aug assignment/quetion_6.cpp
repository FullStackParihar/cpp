#include <iostream>

int main() {
6.print there are four variables a = 1 b= 2 c= 3 c=4
//    formulate  1 2 3 4 5 7 9 12 16  and so on

#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int arr[10];
    arr[0]=1;
    arr[1]=2;
    arr[2]=3;
    arr[3]=4;
    
    for(int i=4;i<10;i++){
         arr[i] = arr[i-3]+arr[i-2];
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}
    return 0;
}
