/*2. Reverse an Array 
o Explanation: Reverse the order of elements in the array. 
o Given Array: {1, 2, 3, 4, 5} 
o Expected Array: {5, 4, 3, 2, 1}  */

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

  
    for(int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    cout << "\nReversed array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
