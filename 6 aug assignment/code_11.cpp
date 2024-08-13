#include <iostream>

int main() {
#include <iostream>

using namespace std;

string Category(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return "uppercase letter";
    } else if (ch >= 'a' && ch <= 'z') {
        return "lowercase letter";
    } else if (ch >= '0' && ch <= '9') {
        return "digit";
    } else {
        return "special character";
    }
}

int main() {
    char ch;
    
    cout << "Enter a character: ";
    cin >> ch;
    
    string category = Category(ch);
    cout << "The character is a: " << category << endl;
    
    return 0;
}



    return 0;
}
