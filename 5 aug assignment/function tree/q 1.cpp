#include<iostream>
using namespace std;

/* 
Question 1:
- Function D is called by C.
- Function C is called by B.
- Function B is called by A.
- Function A is called by main.
*/

void D()
{
    cout << "D started\n"; 
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
    C();
    cout << "B ended\n"; 
}

void A()
{
    cout << "A started\n"; 
    B();
    cout << "A ended\n"; 
}

int main()
{
    cout << "Main started\n"; 
    A();
    cout << "Main ended\n"; 
    return 0;
}
