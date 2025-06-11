#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("file.txt", "r");

    printf("Before fseek %d\n", ftell(fp));
    fseek(fp, -5, SEEK_END);

    printf("After fseek %d\n", ftell(fp));
    fseek(fp, 10, SEEK_SET);

    printf("After fseek %d\n", ftell(fp));
    fseek(fp, -20, SEEK_CUR);

    printf("After fseek %d\n", ftell(fp));

    return 0;
}
// write a program to count no of lines spaces,characgters and others....in file
// write a program to append two files