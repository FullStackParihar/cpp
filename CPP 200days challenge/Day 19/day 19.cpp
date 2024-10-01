#include <bits/stdc++.h>
using namespace std;

int main() {
 
    int arr[5] = {10, 20, 30, 40, 50};
    
    cout << "Array elements:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
 
    vector<int> vec = {60, 70, 80, 90, 100};
    
    cout << "Vector elements:" << endl;
    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
 
    vec.push_back(110);
    vec.push_back(120);
    
    cout << "Vector after adding elements:" << endl;
    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}
