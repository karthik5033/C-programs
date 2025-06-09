#include <stdio.h>
#include <ctype.h>  // for toupper()

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", str);  // Takes input without spaces

    while (str[i] != '\0') {
        str[i] = toupper(str[i]);
        i++;
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}
