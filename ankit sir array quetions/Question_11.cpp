// o Explanation: Rotate a matrix 90 degrees clockwise.
// o Given 2D Array:
// 1 2 3
// 4 5 6
// 7 8 9
// o Expected 2D Array:

// 7 4 1
// 8 5 2
// 9 6 3



#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rotatedMatrix[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            rotatedMatrix[i][j] = matrix[2 - j][i];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << rotatedMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

