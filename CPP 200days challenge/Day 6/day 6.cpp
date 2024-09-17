// Character Counting: Analyzes a string to count the number of letters, digits, and other characters.
// Output: Displays the counts for each category, providing a clear breakdown of the input string.

#include <bits/stdc++.h>
using namespace std;

void countCharacters(const string &str, int &letterCount, int &digitCount, int &otherCount)
{
    letterCount = 0;
    digitCount = 0;
    otherCount = 0;

    for (char ch : str)
    {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            letterCount++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            digitCount++;
        }
        else
        {
            otherCount++;
        }
    }
}

int main()
{
    string input;
    int letterCount, digitCount, otherCount;

    cout << "Enter a string: ";
    getline(cin, input);

    countCharacters(input, letterCount, digitCount, otherCount);

    cout << "Number of letters: " << letterCount << endl;
    cout << "Number of digits: " << digitCount << endl;
    cout << "Number of other characters: " << otherCount << endl;

    return 0;
}
