#include <iostream>

int main() {

//Create a C++ function that takes a student's score and total possible score as 
//arguments and returns their percentage and grade using if-else statements.
#include <bits/stdc++.h>
using namespace std;
char checkgrades(float student_score,float total_possible_score){
    float division=static_cast<float> (student_score/total_possible_score);
    float percentage=division*100;
    if(percentage>=90){
        return 'A';
    }
    else if(percentage>=75){
        return 'B';
    }
    else if(percentage>=60){
        return 'C';
    }
    else if(percentage>=40){
        return 'D';
    }
    else{
        return 'E';
    }
}

int main(){
    int student_score, total_possible_score;
    cout<<"Enter the students score: ";
    cin>>student_score;
    cout<<"Enter the total possible score: ";
    cin>>total_possible_score;
    cout<<"The grade of student is: "<<(checkgrades(student_score,total_possible_score))<<".";
    return 0;
}

OUTPUT:
Enter the students score: 89
Enter the total possible score: 100
The grade of student is: B.

    return 0;
}
