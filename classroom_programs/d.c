// write a program to find whether the entered character is vowel or consonent

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check for vowels (both lowercase and uppercase)
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("'%c' is a vowel.\n", ch);
    } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        // Check if it's a letter and not a vowel
        printf("'%c' is a consonant.\n", ch);
    } else {
        // Not an alphabet character
        printf("'%c' is not an alphabet character.\n", ch);
    }

    return 0;
}
