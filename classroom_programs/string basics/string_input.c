// // write a program to take input of a string and print it using gets function
// #include <stdio.h>
// int main()
// {
//     char str[100];
//     printf("Enter the string : ");
//     gets(str);
//     printf("The entered string is : %s", &str);
//     return 0;
// }

// write a program to take input of a string and print it using getchar function
#include <stdio.h>
int main()
{
    char str[100];
    char ch;
    int i = 0;
    printf("Enter the string : ");
    ch=getchar();
    while (ch != '\n')
    {
        str[i] = ch;
        i++;
        ch = getchar();
    }
    printf("The entered string is : %s \n",str);
    str[i] = '\0';
    return 0;

}