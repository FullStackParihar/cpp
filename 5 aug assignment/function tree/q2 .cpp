#include<iostream>
using namespace std;

/* 
Question 2:
- Function D calls I and J.
- Function C calls G and H.
- Function B calls E and F.
- Function A calls B, C, and D.
- Each function is called in a specific order.
*/

void J()
{
    cout << "J started\n"; 
    cout << "J ended\n"; 
}

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
    cout << "E ended\n"; 
}

void D()
{
    cout << "D started\n"; 
    I();
    J();
    cout << "D ended\n";
}

void C()
{
    cout << "C started\n";
    G();
    H();
    cout << "C ended\n"; 
}

void B()
{
    cout << "B started\n"; 
    E();
    F();
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
