#include <iostream>

int main() {
//Develop a C++ function that takes a string as an argument and returns 
//whether it is a palindrome (reads the same backward as forward) using if-else statements.
  
  
  #include<bits/stdc++.h>


 using namespace std;

  string palindrome(int num) 
  {
        int temp=num;
        int sum=0,rem=0;
        while(num!=0){
            rem=num%10;
            sum=sum*10+rem;;
            num=num/10;
            
        }
    
   
    if(sum==temp){
       return "palindrome";
    }
    
    
    
    else{
       return "not palindrome";
    }
         
   
}

    
 
int main(){
  
  int num;
  string d;
cout<<"enter a num:\n"; 
 cin>> num ;
 cout<< "your enterd num is:" <<num <<"\n";
 
 d=palindrome(num);
 
 cout<< "is a:" <<d<<"\n";

 

return 0;

 
}


    return 0;
}
