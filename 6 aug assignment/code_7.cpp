#include <iostream>

int main() {
//Create a C++ function that takes a character as an argument and returns
//whether it is a vowel or consonant using if-else statements.



  #include<bits/stdc++.h>


 using namespace std;

 string alphabate(char a)
 {    
       if(a=='a'  || a=='e' || a=='i' || a=='o' || a=='u'){
     
      return "vowel";
 }
 
 else  {

      return "consonant";
 }
 
  
   
     
 }  
    
 
int main(){
  
  char a;
  char d;
cout<<"enter any alphbate:\n"; 
 cin>> a ;
 cout<< "your enterd alpha is:" <<a <<"\n";
 
 alphabate(a);
 
 cout<< "your enterd alpha is:" << alphabate(a)<<"\n";

 

return 0;

 
}

 


    return 0;
}
