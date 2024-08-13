#include <iostream>

int main() {
//Implement a C++ function that takes a day of the week as an argument and returns
//whether it's a weekday or a weekend day using if-else statements.

#include<bits/stdc++.h>


 using namespace std;

 string day(string a)
 {    
       if(a=="monday" || a=="tuesday" || a=="wednesday" || a=="thrusday" || a=="friday" || a=="saturday"){
     
      return " weekday";
 }
   
 
 
 else{
      return "weekend";
 }
  
   return 0;
     
 }  
    
 
int main(){
  
  string a;
  string d;
cout<<"enter day :\n"; 
 cin>> a ;
 cout<< "your enterd day is:" <<a <<"\n";
 
 day(a);
 
 cout<< ":" <<   day(a)<<"\n";

 

return 0;

 
}



    return 0;
}
