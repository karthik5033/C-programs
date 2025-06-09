// write a program to swap two variable without the help of third variable
#include <stdio.h>
int main()
{
    int a, b;
    printf("enter the value of a : ");
    scanf("%d", &a);
    printf("enter the value of b : ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("value of a after swapping is %d ", a);
    printf("\nvalue of b after swapping is %d ", b);
    return 0;
}
