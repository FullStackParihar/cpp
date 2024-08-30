#include <iostream>

int findMedian(int arr[], int n) {
     
    if (n % 2 != 0) {
        return arr[n / 2];  
    } else {
         
        return (arr[(n / 2) - 1] + arr[n / 2]) / 2;
    }
}

int main() {
    int arr[] = {1, 3, 3, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int median = findMedian(arr, n);

    std::cout << "The median is: " << median << std::endl;

    return 0;
}
