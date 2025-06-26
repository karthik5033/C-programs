// create two character array, read two strings and compare two array using pointers 
#include<stdio.h>

    int main()
{
    char str1[100], str2[100];
    char *p1, *p2;
    int isEqual = 1; // Assume equal initially

    // Input two strings
    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Assign base addresses
    p1 = str1;
    p2 = str2;

    // Compare character by character
    while (*p1 != '\0' && *p2 != '\0')
    {
        if (*p1 != *p2)
        {
            isEqual = 0;
            break;
        }
        p1++;
        p2++;
    }

    // Check if both strings ended together
    if (*p1 != *p2)
    {
        isEqual = 0;
    }

    // Output result
    if (isEqual)
        printf("Strings are equal.\n");
    else
        printf("Strings");
    
}
