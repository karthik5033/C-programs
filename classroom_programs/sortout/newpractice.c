#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;

    // Try to open the file in read mode
    fp = fopen("data.txt", "r");

    // Check if the file exists (fp is NULL if it doesn't)
    if (fp == NULL)
    {
        printf("File does not exist.\n");
        return 1; // Exit the program
    }

    printf("File opened successfully. Reading contents:\n");

    // Read character by character until EOF
    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }

    // Check if end of file was reached
    if (feof(fp))
    {
        printf("\nReached end of file.\n");
    }
    else
    {
        printf("\nStopped reading before EOF (possible error).\n");
    }

    // Close the file
    fclose(fp);

    return 0;
}
