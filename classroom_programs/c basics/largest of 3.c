//  write a program to find largest of three numbers using if-else statements
// #include <stdio.h>
// int main()
// {
//     int a, b, c;
//     printf("enter the three numbers : ");
//     scanf("%d %d %d", &a, &b, &c);

//     if (a > b && a > c)
//     {
//         printf(" the largest among the following is %d", a);
//     }
//     else if (b > a && b > c)
//     {
//         printf(" the largest among the following is %d", b);
//     }
//     else
//     {
//         printf(" the largest among the following is %d", c);
//     }
// }


// using ternary operator
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    (a > b && a > c) ? printf("The largest among the following is %d\n", a) :
    (b > c) ? printf("The largest among the following is %d\n", b) :
             printf("The largest among the following is %d\n", c);

    return 0;
}
