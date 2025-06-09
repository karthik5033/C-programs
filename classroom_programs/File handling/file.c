#include <stdio.h>

int main()
{
    FILE *fp = fopen("data.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Hello Karthik!\n");
    fputs("Welcome to file handling in C.\n", fp);

    fclose(fp);
    return 0;
}
