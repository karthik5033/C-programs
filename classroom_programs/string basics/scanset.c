// #include<stdio.h>
// int main(){
//     char str[100];
//     printf("Enter the string : ");
//     scanf("%[aeiou]",str);
//     printf("The entered string is : %s",str);
// }

// Write a program that reads only uppercase characters in given string
#include<stdio.h>
int main(){
    char str[100];
    printf("Enter the string : ");
    scanf("%[A-Z]",str);
    printf("uppercase characters are : %s",str);
}