#include <iostream>

int main() {
//Write a C++ function that takes the number of days a book is overdue and returns the fine using if-else statements.
 #include<bits/stdc++.h>
using namespace std;

int finecalculator(int days,int fineperday){
    int total_fine=fineperday*days;
    return total_fine;
}
int main(){
    int days,fineperday;
    cout<<"Enter number of days book is overdue: ";
    cin>>days;
    cout<<"Enter fine per day: ";
    cin>>fineperday;
    cout<<"Fine for "<<days<<" days is "<<(finecalculator(days,fineperday));
}

OUTPUT:Enter number of days book is overdue: 7
Enter fine per day: 15
Fine for 7 days is 105

    return 0;
}
