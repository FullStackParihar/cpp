// Question 9
#include<iostream>
using namespace std;

void D() {
    cout << "D started\n"; 
    cout << "D ended\n";
}

void C() {
    cout << "C started\n";
    D();
    cout << "C ended\n"; 
}

void B() {
    cout << "B started\n"; 
    D(); 
    cout << "B ended\n"; 
}

void A() {
    cout << "A started\n"; 
    B();
    C();
    cout << "A ended\n"; 
}

int main() {
    cout << "Main started\n"; 
    A();
    cout << "Main ended\n"; 
    return 0;
}
