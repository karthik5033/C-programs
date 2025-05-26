#include <stdio.h>

// Custom function to find string length
long int strlen(char str[]) {
    long int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

int main() {
    char str[20];
    
    printf("Enter a string: ");
    scanf("%s", str);  // This will read input until space

    printf("Length of the string: %ld\n", strlen(str));

    return 0;
}
