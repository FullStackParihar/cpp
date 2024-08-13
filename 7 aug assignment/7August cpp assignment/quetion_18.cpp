#include <iostream>

int main() {
// . Develop a C++ function that takes the quantity of items purchased as an argument 
//and returns the total cost after applying a discount based on the quantity using if-else statements

#include <bits/stdc++.h>
using namespace std;
int totalprice(int quantity){
    int cost_of_item=50;
    int cost=quantity*cost_of_item;
    float discount;
    if(quantity<=5){
        discount=0.05*cost;
    }
    else if(quantity<=10){
        discount=0.1*cost;
    }
    else{
        discount=0.2*cost;
    }
    int total_cost=cost-discount;
    return total_cost;
}
int main(){
    int quantity;
    cout<<"Enter the quantity ";
    cin>>quantity;
    cout<<"Total cost of items purchased="<<(totalprice(quantity));
    return 0;
}

OUTPUT:
Enter the quantity 15
Total cost of items purchased=600

    return 0;
}
