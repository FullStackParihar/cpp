#include <iostream>

int main() {
//Create a C++ function that takes a student's score as an
// argument and returns whether the score is in the top 10% using logical operators.

#include <bits/stdc++.h>
using namespace std;
bool studentscore(int score){
    if(score>90){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int score;
    cout<<"Enter the students score: ";
    cin>>score;
    if (studentscore(score)){
        cout<<"In top 10%.";
    }
    else{
        cout<<"Not in top 10%.";
    }
    return 0;
}

OUTPUT:

Enter the students score: 95
In top 10%.

    return 0;
}
