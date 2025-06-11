// write a program to append two files
#include <stdio.h>
int main()
{
    FILE *fp1, *fp2;
    fp1 = fopen("file1.txt", "a");
    fp2 = fopen("file2.txt", "r");
    char ch;
    while ((ch = fgetc(fp2)) != EOF)
    {
        fputc(ch, fp1);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}