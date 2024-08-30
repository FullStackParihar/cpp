#include <iostream>

void reverse(int arr[], int start, int end) {
    while (start < end) {
     
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }
}

void rotateArray(int arr[], int n, int k) {
    
    k = k % n;

    
    reverse(arr, 0, n - 1);

    
    reverse(arr, 0, k - 1);

  
    reverse(arr, k, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    rotateArray(arr, n, k);

    std::cout << "Array after rotating " << k << " steps to the right: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
