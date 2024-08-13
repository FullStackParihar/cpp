#include <iostream>

int main() {
#include<bits/stdc++.h>


 using namespace std;

 string persentage(int a)
 {    
       if(a>=90){
     
      return "A";
 }
 
 else if(a>=60){

      return "B";
     }
     
     else if(a>=30){

      return "c";
     }
     else 
     return "fail";
     
 }  
    
 
int main(){
  
  int a; 
  string c;
cout<<"enter your persentage:\n"; 
 cin>> a;
 cout<< "your persentage is:" <<a<<"\n";
 
c= persentage(a);

cout<<"your grade is: "<<c;

return 0;

 
}



    return 0;
}
