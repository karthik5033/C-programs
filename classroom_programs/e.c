// write a program to find whether the given number is even or odd.
#include <stdio.h>
int main()
{
    int n;
    printf("enter the value of n : ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("%d is even", n);
    }
    else
    {
        printf("%d is odd", n);
    }
}