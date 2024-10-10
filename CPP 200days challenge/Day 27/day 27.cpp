#include <iostream>
int missingnum(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] + 1 != arr[i + 1])
        {
            return arr[i] + 1;
        }
    }
    return 0;
}

int main()
{
    int arr[] = {1, 2, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int missing = missingnum(arr, n);

    std::cout << "The missing no. is: " << missing << std::endl;
    return 0;
}
