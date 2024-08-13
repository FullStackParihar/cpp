#include <iostream>

int main() {
//Write a C++ function that takes a person's age as an argument and returns 
//their age group (child, teenager, adult, senior) using if-else statements.



  #include<bits/stdc++.h>


 using namespace std;

 string alphabate(int a)
 {    
       if(a>60){
     
      return "senior";
 }
 
 else if  (a>18 && a<60){

      return "adult";
 }
 
 else if  (a>13 && a<17){

      return "teenager";
 }
  else if  (a>0 && a<13){

      return "child";
 }
  
   return 0;
     
 }  
    
 
int main(){
  
  int a;
  string d;
cout<<"enter the age:\n"; 
 cin>> a ;
 cout<< "your enterd age is:" <<a <<"\n";
 
 alphabate(a);
 
 cout<< "is a:" <<   alphabate(a)<<"\n";

 

return 0;

 
}

 

    return 0;
}
