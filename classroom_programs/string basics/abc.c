// write a program to take input of a string using fgets function

#include <stdio.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read a line including spaces

    printf("The entered string is: %s", str);

    return 0;
}
