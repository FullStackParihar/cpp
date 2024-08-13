#include <iostream>

int main() {

//Implement a C++ function that takes a student's grades as arguments and returns
//whether the student is eligible for a scholarship using if-else statements.

#include<bits/stdc++.h>


 using namespace std;

 string grade(char a)
 {    
       if(a=='a' || a=='b' || a=='c'){
     
      return " eligible";
 }
   
 
 
 else{
      return "not eligible";
 }
  
   return 0;
     
 }  
    
 
int main(){
  
  char a;
  string d;
cout<<"enter grade :\n"; 
 cin>> a ;
 cout<< "your enterd grade is:" <<a <<"\n";
 
 grade(a);
 
 cout<< ":" <<   grade(a)<<"\n";

 

return 0;

 
}




    return 0;
}
