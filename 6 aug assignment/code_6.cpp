#include <iostream>

int main() {
//Write a C++ function that takes three numbers as arguments and returns the largest 
//one using if-else statements and relational operators.



  #include<bits/stdc++.h>


 using namespace std;

 int largest(int a,int b, int c)
 {    
       if(a>b && a>c){
     
      return a;
 }
 
 else if(b>c && b>a){

      return b;
 }
 
 else if(c>a && c>b){

      return c;
 }
   return 0;
     
 }  
    
 
int main(){
  
  int a;
  int b;
  int c;
  int d;
cout<<"enter three numbers:\n"; 
 cin>> a>>b>>c;
 cout<< "your enterd numbers is:" <<a<<b<<c<<"\n";
 
d= largest(a,b,c);

cout<<"largest number is: "<<d;

return 0;

 
}

 


    return 0;
}
