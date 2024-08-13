#include <iostream>

int main() {
 //Create a C++ function that takes a student's score as an argument and returns whether the score is valid
 //(between 0 and 100) and whether the student passed (score >= 50) or failed using logical operators.
 
#include<bits/stdc++.h>


 using namespace std;

 string score(int a)
 {    
       if(a>=50 && a<=100){
     
      return "student is pass";
 }
 
 else{
      return "invalid";
 }
  
   return 0;
     
 }  
    
 
int main(){
  
  int a;
  string d;
cout<<"enter score :\n"; 
 cin>> a ;
 cout<< "your enterd score is:" <<a <<"\n";
 
 score(a);
 
 cout<< "is a:" <<   score(a)<<"\n";

 

return 0;

 
}

 

    return 0;
}
