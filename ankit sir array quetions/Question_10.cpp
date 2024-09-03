// 0. Find the Median of a Sorted Array 
// o Explanation: Compute the middle value or average of middle values in a sorted  array. 
// o Given Array: {1, 3, 3, 6, 7, 8, 9} 
// o Expected Result: 6

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
