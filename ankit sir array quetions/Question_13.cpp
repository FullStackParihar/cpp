#include <iostream>

void shiftZeroesToEnd(int arr[], int n) {
    int nonZeroIndex = 0;

    
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[nonZeroIndex++] = arr[i];
        }
    }

     
    while (nonZeroIndex < n) {
        arr[nonZeroIndex++] = 0;
    }
}

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    shiftZeroesToEnd(arr, n);

    std::cout << "Array after shifting zeroes to the end: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
