#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "This is RVCE";
    char str1[] = " bullshit college";
    char str2[50];

    // Print length of str
    printf("Length of str: %lu\n", strlen(str));

    // Concatenate str1 to str
    strcat(str, str1);
    printf("Concatenated string: %s\n", str);

    // Copy first 5 characters of str1 to str2
    strncpy(str2, str1, 5);
    str2[5] = '\0';  // Add null terminator manually
    printf("Copied 5 chars: %s\n", str2);

    // Copy first 2 characters of str1 to str2
    strncpy(str2, str1, 2);
    str2[2] = '\0';  // Add null terminator manually
    printf("Copied 2 chars: %s\n", str2);

    // Print length of str1
    printf("Length of str1: %lu\n", strlen(str1));

    return 0;
}
