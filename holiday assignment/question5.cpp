#include <bits/stdc++.h>
using namespace std;

// Function to multiply two matrices
void mul(int arr1[][], int arr2[][], int a, int b, int c, int d) {
    int result[a][d];

    // Initialize the result matrix with 0
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < d; j++) {
            result[i][j] = 0;
        }
    }

    // Matrix multiplication logic
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < d; j++) {
            for (int k = 0; k < b; k++) {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    // Display the resultant matrix
    cout << endl << "The resultant matrix after multiplication is:" << endl;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < d; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int a, b, c, d;
    cout << "Enter the size of matrix 1 (rows and columns): ";
    cin >> a >> b;
    int arr1[a][b]; // Adjusted to use a fixed size array
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << "Enter the value at " << i << " and " << j << ": ";
            cin >> arr1[i][j];
        }
        cout << endl;
    }

    cout << "Matrix 1:" << endl;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter the size of matrix 2 (rows and columns): ";
    cin >> c >> d;
    int arr2[c][d]; // Adjusted to use a fixed size array

    for (int i = 0; i < c; i++) {
        for (int j = 0; j < d; j++) {
            cout << "Enter the value at " << i << " and " << j << ": ";
            cin >> arr2[i][j];
        }
        cout << endl;
    }

    cout << "Matrix 2:" << endl;
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < d; j++) {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    if (b == c) {
        // Call the multiplication function
        mul(arr1, arr2, a, b, c, d);
    } else {
        cout << "Matrix multiplication cannot be performed as the number of columns in matrix 1 is not equal to the number of rows in matrix 2.";
    }

    return 0;
}
