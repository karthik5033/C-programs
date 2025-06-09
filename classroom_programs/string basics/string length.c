#include <stdio.h>

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
    scanf("%s", str);  

    printf("Length of the string: %ld\n", strlen(str));

    return 0;
}
