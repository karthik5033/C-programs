// write a program to read 10 numbers and then find their sum
#include <stdio.h>
int main()
{
    int n, a, i, sum = 0;
    printf("enter the number of elements :");
    scanf("%d", &n);

    printf("enter the values");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a);
        sum += a;
    }
    printf("sum equals : %d", sum);
}