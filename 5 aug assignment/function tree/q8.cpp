#include<iostream>
using namespace std;

/* 
Question 8:
- Function G calls H.
- Function F calls G.
- Function E calls H.
- Function D calls E.
- Function C calls D.
- Function B calls F.
- Function A calls B and C.
*/

void H()
{
    cout << "H started\n"; 
    cout << "H ended\n"; 
}

void G()
{
    cout << "G started\n"; 
    H();
    cout << "G ended\n"; 
}

void F()
{
    cout << "F started\n"; 
    G();
    cout << "F ended\n"; 
}

void E()
{
    cout << "E started\n";
    H(); 
    cout << "E ended\n"; 
}

void D()
{
    cout << "D started\n"; 
    E();
    cout << "D ended\n";
}

void C()
{
    cout << "C started\n";
    D();
    cout << "C ended\n"; 
}

void B()
{
    cout << "B started\n"; 
    F();
    cout << "B ended\n"; 
}

void A()
{
    cout << "A started\n"; 
    B();
    C();
    cout << "A ended\n"; 
}

int main()
{
    cout << "Main started\n"; 
    A();
    cout << "Main ended\n"; 
    return 0;
}
