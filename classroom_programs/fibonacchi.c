#include <stdio.h>
long int fib(int n)
{ int sum=1,x=1;
    if (n == 0 )
        return 1;
        n=sum;
    return n + fib(n - 1);
}
int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d", &n);
    printf("%ld", fib(n));
}


// linear search using recursion

// maximum among n elements using recursion