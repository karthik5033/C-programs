// write a program to find the largest among three numbers
#include <stdio.h>
int greater(int x, int y, int z)
{
    if (x > y && x > z)
        return x;
   else if (y > x && y > z)
        return y;
    else
        return z;
}
int main()
{
    int a,b,c;
    printf("Enter 1st integer : ");
    scanf("%d",&a);
    printf("Enter 2st integer : ");
    scanf("%d", &b);
    printf("Enter 3st integer : ");
    scanf("%d", &c);
    int max=greater( a, b,c);
    printf("the greatest : %d",max);
}