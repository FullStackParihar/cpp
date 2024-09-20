🚀 Day 9 of 200: C++ Challenge Update! 🚀

Hello LinkedIn community! 👋

For Day 9 of my 200-day C++ coding challenge, I explored implementing a custom power function using nested loops. This code calculates the result of raising a number a to the power of b using iterative addition—a unique approach to understanding multiplication and powers at a more granular level.

Here’s the code:

cpp
Copy code
#include <bits/stdc++.h>
using namespace std;

/* Works only if a >= 0 and b >= 0 */
int pow(int a, int b) { 
    if (b == 0) 
        return 1; 
    int answer = a; 
    int increment = a; 
    int i, j; 
    for(i = 1; i < b; i++) { 
        for(j = 1; j < a; j++) { 
            answer += increment; 
        } 
        increment = answer; 
    } 
    return answer; 
} 

int main() { 
    cout << pow(5, 3);  // Example: 5 raised to the power of 3
    return 0; 
} 
🔍 What It Does:

Power Calculation: This function uses nested loops to compute powers through repeated addition.
Output: For example, 5 raised to the power of 3 returns 125.
📈 Time Complexity:

The time complexity is O(a * b), where a is the base and b is the exponent, making this an unconventional but insightful approach.
Big shoutout to [Mentor's Name] and Regex Software Services for guiding me through this challenge!

Excited to continue learning and building more algorithms over the next days. Feel free to share your feedback or experiences with different power function implementations! 💪

#CPlusPlus #CodingChallenge #Programming #SoftwareDevelopment #TechJourney #Day9of200 #RegexSoftwareServices #MentorSupport