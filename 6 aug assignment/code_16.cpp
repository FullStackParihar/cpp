#include <iostream>

int main() {
//Develop a C++ function that takes an integer as an argument and returns 
//whether it is divisible by both 3 and 5 using logical operators.

#include<bits/stdc++.h>


 using namespace std;

 string check(int a)
 {    
       if(a%3==0 && a%5==0){
     
      return "divisible by both 3 and 5  ";
 }
 
 else{
      return "not divisible by both 3 and 5 ";
 }
  
   return 0;
     
 }  
    
 
int main(){
  
  int a;
  string d;
cout<<"enter value :\n"; 
 cin>> a ;
 cout<< "your enterd value is:" <<a <<"\n";
 
 check(a);
 
 cout<< ":" <<   check(a)<<"\n";

 

return 0;

 
}



    return 0;
}
