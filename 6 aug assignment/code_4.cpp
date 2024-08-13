#include <iostream>

int main() {
#include<bits/stdc++.h>


 using namespace std;

 string triangle(int a,int b, int c)
 {    
       if((a<90 && b<90 && c<90)&&a+b+c==180){
     
      return "acute";
 }
 
 else if((a==90 || b==90 || c==90)&&a+b+c==180){

      return "right-angled";
 }
 
 else if((a>90 || b>90 || c>90 )&&a+b+c==180){

      return "obtuse";
 }
    else 
     return "invalid";
     
 }  
    
 
int main(){
  
  int a;
  int b;
  int c;
  string d;
cout<<"enter three angles:\n"; 
 cin>> a>>b>>c;
 cout<< "your enterd yesr is:" <<a<<b<<c<<"\n";
 
d= triangle(a,b,c);

cout<<"this is a: "<<d;

return 0;

 
}


    return 0;
}
