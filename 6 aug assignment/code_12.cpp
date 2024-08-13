#include <iostream>

int main() {
//Implement a C++ function that takes the quantity of books purchased as an argument and return
//s the total cost after applying discounts based on the quantity using if-else statements.




#include <iostream>

using namespace std;

float discounts(int a) 
{   float basecost=1000;

    if (a >= 100) {
         
        return ((basecost*a)-(((basecost*a)/100)*30));
    } 
    else if (a>=50) {
      return ((basecost*a)-(((basecost*a)/100)*12));}
    else if (a>=25) {
       return ((basecost*a)-(((basecost*a)/100)*5));}
    else {
        return basecost*a;
    }
}

int main() {
    int a;
    int cost;
    cout << "Enter the quantity: ";
    cin >> a;
    
     cost=discounts(a);
    cout << "The total cost after discount: " << cost << endl;
    
    return 0;
}



    return 0;
}
