#include<iostream>
using namespace std;

/* 
Question 5:
- Function G calls I.
- Function E calls F, G, and H.
- Function C calls E.
- Function A calls B, C, and D.
- Each function is executed in a specific sequence.
*/

void I()
{
    cout << "I started\n"; 
    cout << "I ended\n"; 
}

void H()
{
    cout << "H started\n"; 
    cout << "H ended\n"; 
}

void G()
{
    cout << "G started\n"; 
    I();
    cout << "G ended\n"; 
}

void F()
{
    cout << "F started\n"; 
    cout << "F ended\n"; 
}

void E()
{
    cout << "E started\n";
    F();
    G();
    H();
    cout << "E ended\n"; 
}

void D()
{
    cout << "D started\n"; 
    cout << "D ended\n";
}

void C()
{
    cout << "C started\n";
    E();
    cout << "C ended\n"; 
}

void B()
{
    cout << "B started\n"; 
    cout << "B ended\n"; 
}

void A()
{
    cout << "A started\n"; 
    B();
    C();
    D();
    cout << "A ended\n"; 
}

int main()
{
    cout << "Main started\n"; 
    A();
    cout << "Main ended\n"; 
    return 0;
}
