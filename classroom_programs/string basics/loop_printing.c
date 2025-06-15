#include <stdio.h>
#include <conio.h>
int main()
{
    char str[] = "HELLO";
    for (int i = 2; i <= strlen(str); i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c ", str[j]);
        }
        printf("\n");
    }
    for (int i = 4; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c ", str[j]);
        }
        printf("\n");
    }
}