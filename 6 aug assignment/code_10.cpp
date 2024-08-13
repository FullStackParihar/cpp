#include <iostream>

int main() {
//Write a C++ function that takes age and time of day as arguments and returns
//the ticket price for a movie after applying discounts for children and seniors using if-else statements.


#include <iostream>
#include <string>

using namespace std;

float getticketprice(int age, string timeofday) {
    float standardprice = 200;
    float ticketprice = standardprice;
    
    
    if (age < 12) {
       
        ticketprice = standardprice * 0.5;
    } else if (age >= 65) {
       
        ticketprice = standardprice * 0.7;
    } else {
        ticketprice = standardprice;
    }
 
    if (timeofday == "morning" || timeofday == "afternoon") {
     
        ticketprice = ticketprice * 0.8;
    }
    
    return ticketprice;
}

int main() {
    int age;
    string timeofday;
    
    cout << "Enter your age: ";
    cin >> age;
    
    cout << "Enter the time of day (e.g., 'morning', 'afternoon', 'evening'): ";
    cin >> timeofday;
    
    float price = getticketprice(age, timeofday);
    cout << "The ticket price is: ₹" << price << endl;
    
    return 0;
}



    return 0;
}
