#include <stdio.h>


int Max(int arr[], int len)
{
   
    if (len == 1)
        return arr[0];

    
    int max = Max(arr, len - 1);


    if (arr[len - 1] > max)
        return arr[len - 1];
    else
        return max;
}

int main()
{
    int len;
    printf("Enter the number of elements: ");
    scanf("%d", &len);

    int arr[len];
    printf("Enter %d numbers: ", len);
    for (int i = 0; i < len; i++)
        scanf("%d", &arr[i]);

    int max = Max(arr, len);
    printf("The maximum number is: %d\n", max);

    return 0;
}