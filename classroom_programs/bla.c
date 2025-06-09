#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    FILE *in, *out;
    char c;
    int USN = 10, Marks = 75;
    char filename[50],str[50];
    char Name[10] = "Ram", Course[] = "BE";

    gets(filename);

    in = fopen("Newfile", "w");
    out = fopen(filename, "r");

    if (out == NULL)
    {
        printf("File not found");
        return 0;
    }
    else
        printf("File found\n");

    while (fgets(str, 50, out) != NULL)
    {
        printf("%s", str);
        fputs(str, in);
    }
    fclose(in);
    fclose(out);
    return 0;
}