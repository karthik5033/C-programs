#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *in, *out;
    char c;
    int USN = 10, Marks = 75;
    char Name[] = "Kishan reddy", Course[] = "BE";

    fscanf(stdin, "%d%s%d%s", &USN, Name, &Marks, Course);
    fprintf(stdout, "%d %s %d %s", USN, Name, Marks, Course);
    return 0;
}