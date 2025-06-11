// write a program to count no of lines spaces,characters and others....in file

#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int lines = 0, spaces = 0, chars = 0, others = 0;

    fp = fopen("sample.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        chars++; // Count every character

        if (ch == ' ')
            spaces++;
        else if (ch == '\n')
            lines++;
        else if ((ch < 32 || ch > 126) && ch != '\t') // Exclude tabs, count other non-printables
            others++;
    }

    fclose(fp);

    printf("Total characters: %d\n", chars);
    printf("Total lines     : %d\n", lines);
    printf("Total spaces    : %d\n", spaces);
    printf("Other characters: %d\n", others);

    return 0;
}
