#include <bits/stdc++.h>

using namespace std;

string categorizeColor(string color){

    transform(color.begin(), color.end(), color.begin(), ::tolower);

    if (color == "red" || color == "blue" || color == "yellow"){
        return "Primary Color";
    }
    else if (color == "green" || color == "orange" || color == "purple"){
        return "Secondary Color";  
        }
    else{
        return "Unknown Color Category";
    }
}

int main(){
    string color;

    cout << "Enter a color: ";
    cin >> color;
    cout << categorizeColor(color) << endl;

    return 0;
}
