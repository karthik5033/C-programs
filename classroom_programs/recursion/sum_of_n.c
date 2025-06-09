#include <stdio.h>
long int sum(int n)
{
    if (n == 0 )
        return 0;
        // break;
    return n + sum(n - 1);
}
int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d", &n);
    printf("sum is : ");
    printf("%ld", sum(n));
}