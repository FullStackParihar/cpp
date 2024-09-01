o Explanation: Create a stack data structure using an array with push, pop, and top
operations.
o Given Array: {} (initially empty stack)
o Expected Stack Operations:
 Push 1, 2, 3: {1, 2, 3}
 Pop: {1, 2}



#include <bits/stdc++.h>
using namespace std;

int top = -1;
int stk[100];

void push(int x)
{
    if (top == 100)
    {
        cout << "Overflow";
        return;
    }

    top++;
    stk[top] = x;
}

void pop()
{
    if (top == -1)
    {
        cout << "Underflow";
        return;
    }

    top--;
}

int getTop()
{
    return top;
}

int main()
{
    push(1);
    push(2);
    push(3);
    pop();

    for (int i = 0; i <= top; i++)
    {
        cout << stk[top - i] << endl;
    }

    cout <<"Top element : " <<getTop();

    return 0;
}
