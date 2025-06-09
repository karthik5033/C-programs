// write a program to find whether the given number is positive negative or zero
#include <stdio.h>
int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("the number is positive");
    }
    else if (n < 0)
    {
        printf("the number is negative");
    }
    else
    {
        printf("the value is null");
    }
}