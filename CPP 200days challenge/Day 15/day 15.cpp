 #include <bits/stdc++.h>
using namespace std;
 
void convertToUpper(string &text) {
    transform(text.begin(), text.end(), text.begin(), [](char c) {
        return toupper(c);
    });
}
 
int countVowels(const string &text) {
    int count = 0;
    for (char c : text) {
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || 
            tolower(c) == 'o' || tolower(c) == 'u') {
            count++;
        }
    }
    return count;
}
 
int countDigits(const string &text) {
    int count = 0;
    for (char c : text) {
        if (isdigit(c)) {
            count++;
        }
    }
    return count;
}

int main() {
 
    string text = "hello world 123!";
 
    convertToUpper(text);
    cout << "Uppercase Text: " << text << endl;

    int vowelCount = countVowels(text);
    cout << "Number of Vowels: " << vowelCount << endl;
 
    int digitCount = countDigits(text);
    cout << "Number of Digits: " << digitCount << endl;

    return 0;
}
