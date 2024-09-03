/*5. Merge Two Sorted Arrays 
o Explanation: Combine two sorted arrays into one sorted array. 
o Given Arrays: {1, 3, 5} and {2, 4, 6} 
o Expected Array: {1, 2, 3, 4, 5, 6}*/

#include <iostream>

void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2, int mergedArray[]) {
    int i = 0, j = 0, k = 0;

     
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            mergedArray[k++] = arr1[i++];
        } else {
            mergedArray[k++] = arr2[j++];
        }
    }

 
    while (i < size1) {
        mergedArray[k++] = arr1[i++];
    }

 
    while (j < size2) {
        mergedArray[k++] = arr2[j++];
    }
}

int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int mergedArray[size1 + size2]; 

    mergeSortedArrays(arr1, size1, arr2, size2, mergedArray);

    std::cout << "Merged Array: ";
    for (int i = 0; i < size1 + size2; i++) {
        std::cout << mergedArray[i] << " ";
    }

    return 0;
}
