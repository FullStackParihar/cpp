#include <iostream>

int main() {
#include <iostream>

using namespace std;

bool isPowerOfTwo(int num) {
    if (num <= 0) {
        return false;
    } else if ((num & (num - 1)) == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    if (isPowerOfTwo(num)) {
        cout << num << " is a power of two." << endl;
    } else {
        cout << num << " is not a power of two." << endl;
    }
    
    return 0;
}






    return 0;
}
