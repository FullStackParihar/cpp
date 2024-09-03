// 9. Find the Most Frequent Element in an Array 
// o Explanation: Determine the element that appears most often in the array. o Given Array: {1, 3, 2, 1, 4, 1, 5, 2} 
// o Expected Result: 1 /

#include <iostream>

int findMostFrequentElement(int arr[], int n) {
    int maxCount = 0;
    int mostFrequent = arr[0];

   
    for (int i = 0; i < n; i++) {
        int count = 0;

     
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        
        if (count > maxCount) {
            maxCount = count;
            mostFrequent = arr[i];
        }
    }

    return mostFrequent;
}

int main() {
    int arr[] = {1, 3, 2, 1, 4, 1, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findMostFrequentElement(arr, n);

    std::cout << "The most frequent element is: " << result << std::endl;

    return 0;
}
