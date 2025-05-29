#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", str);  // Input without spaces

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;  // Convert to lowercase
        }
        i++;
    }

    printf("Lowercase string: %s\n", str);

    return 0;
}
