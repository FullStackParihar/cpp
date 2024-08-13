#include <iostream>

int main() {
//Implement a C++ function that takes a day of the month as an argument and 
//returns the corresponding zodiac sign using if-else statements.
#include <bits/stdc++.h>
using namespace std;

string ZodiacSign(int day, int month) {

    if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
        return "Aries";
    } else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
        return "Taurus";
    } else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) {
        return "Gemini";
    } else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) {
        return "Cancer";
    } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
        return "Leo";
    } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
        return "Virgo";
    } else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
        return "Libra";
    } else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
        return "Scorpio";
    } else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
        return "Sagittarius";
    } else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
        return "Capricorn";
    } else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
        return "Aquarius";
    } else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
        return "Pisces";
    } else {
        return "Invalid date"; 
    }
}

int main() {
    int day, month;

    cout << "Enter the day of the month (1-31): ";
    cin >> day;
    cout << "Enter the month (1-12): ";
    cin >> month;

    cout << "The zodiac sign is: " << (ZodiacSign(day,month));

    return 0;
}

OUTPUT:
Enter the day of the month (1-31): 17
Enter the month (1-12): 9
The zodiac sign is: Virgo

    return 0;
}
