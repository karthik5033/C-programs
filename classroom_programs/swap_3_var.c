// write a program to swap two numbers using third variable
#include <stdio.h>
int main()
{
    int x, y, temp;
    printf("enter the value of x : ");
    scanf("%d", &x);
    printf("enter the value of y : ");
    scanf("%d", &y);
    // note:give temp=x as first line or it will store a garbage value in place of x
    temp = x;   
    x = y;
    y = temp;
    printf("value of x after swapping is %d ", x);
    printf("\nvalue of y after swapping is %d ", y);
    return 0;
}