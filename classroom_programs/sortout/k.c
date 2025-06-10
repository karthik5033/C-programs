#include <stdio.h>

// User-defined function to copy a string
void str_copy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';  // Null-terminate the destination
}

// User-defined function to concatenate two strings
void str_concat(char dest[], char src[]) {
    int i = 0, j = 0;

    // Move i to the end of the destination string
    while (dest[i] != '\0') {
        i++;
    }

    // Append src to dest
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';  // Null-terminate the final string
}

int main() {
    char str1[100], str2[50], result[150];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Copy str1 to result
    str_copy(result, str1);
    printf("After copying str1 into result: %s\n"); 

    return 0;
}