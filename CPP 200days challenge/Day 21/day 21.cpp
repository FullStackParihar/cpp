#include <bits/stdc++.h>
using namespace std;

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "After swapping: " << a << ", " << b << endl;
}

void swap(float a, float b) {
    float temp = a;
    a = b;
    b = temp;
    cout << "After swapping: " << a << ", " << b << endl;
}

void swap(char a, char b) {
    char temp = a;
    a = b;
    b = temp;
    cout << "After swapping: " << a << ", " << b << endl;
}

int main() {
    int int1 = 10, int2 = 20;
    float float1 = 1.5f, float2 = 2.5f;
    char char1 = 'A', char2 = 'B';

    cout << "Before swapping:" << endl;
    cout << "Integers: " << int1 << ", " << int2 << endl;
    cout << "Floats: " << float1 << ", " << float2 << endl;
    cout << "Characters: " << char1 << ", " << char2 << endl;

    swap(int1, int2);
    swap(float1, float2);
    swap(char1, char2);

    return 0;
}
