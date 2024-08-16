#include <iostream>

int main() {

    using namespace std;
    int num;

   
    cout << "Enter an integer: " << endl;
    cin >> num;

    
    if (num % 2 == 0) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }

    return 0;
}
