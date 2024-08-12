// Question 10
#include<iostream>
using namespace std;

void F() {
    cout << "F started\n"; 
    cout << "F ended\n"; 
}

void E() {
    cout << "E started\n";
    F();
    cout << "E ended\n"; 
}

void D() {
    cout << "D started\n"; 
    F();
    cout << "D ended\n";
}

void C() {
    cout << "C started\n";
    E();
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