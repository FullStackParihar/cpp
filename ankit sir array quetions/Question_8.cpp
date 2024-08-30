#include <iostream>

float computeAverage(int arr[], int n) {
    int sum = 0;
    
   
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    // Calculate the average
    float average = static_cast<float>(sum) / n;
    
    return average;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    float average = computeAverage(arr, n);

    std::cout << "The average is: " << average << std::endl;

    return 0;
}
