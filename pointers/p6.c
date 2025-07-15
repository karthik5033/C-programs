// Define a array ,pass it as a pointer to function sum,return 
// the sum of all the elements sum to main function as pointers
#include <stdio.h>


int sum(int *arr, int size, int *result)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += *(arr + i);
    }
    *result = total; 
}

int main()
{
    int arr[5];
    int totalSum;

    // Taking input
    printf("Enter 5 elements:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Call sum function
    sum(arr, 5, &totalSum);

    // Print result
    printf("Sum of array elements = %d\n", totalSum);

    return 0;
}
