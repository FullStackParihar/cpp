#include <iostream>

int main() {

//Write a C++ function that takes a credit score as an argument and returns its category
//("Excellent," "Good," "Fair," "Poor") using if-else statements.

#include<bits/stdc++.h>


 using namespace std;

 string creditscore(int a)
 {    
       if(a>800){
     
      return " Excellent";
 }
  else if(a>800 || a>700){
     
      return " good";
 }
 
  else if(a>700 || a>600){
     
      return " fair";
 }
 
  else if(a<500){
     
      return " poor";
 }
 
 
 
 else{
      return "invalid";
 }
  
   return 0;
     
 }  
    
 
int main(){
  
  int a;
  string d;
cout<<"enter value :\n"; 
 cin>> a ;
 cout<< "your enterd value is:" <<a <<"\n";
 
 creditscore(a);
 
 cout<< ":" <<   creditscore(a)<<"\n";

 

return 0;

 
}



    return 0;
}
