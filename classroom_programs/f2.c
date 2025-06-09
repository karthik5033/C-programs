#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    FILE *in, *out;
    char c;
    int USN = 10, Marks = 75;
    char Name[10] = "Samsuddin", Course[] = "BE";

    // Enter the contents in file
    out = fopen("outfile.txt", "w");
    fprintf(out, "USN: %d\nName: %s\nCourse: %s\nMarks: %d", USN, Name, Course, Marks);
    USN = 20;
    Marks = 85;
    strcpy(Name, "Shyam");
    strcpy(Course, "ME");
    fprintf(out, "USN: %d\nName: %s\nCourse: %s\nMarks: %d", USN, Name, Course, Marks);
    fclose(out);

    // Read the contents from file
    in = fopen("outfile.txt", "r");
    fscanf(in, "USN: %d\nName: %s\nCourse: %s\nMarks: %d", &USN, Name, Course, &Marks);
    printf("Printing using printf statement");
    printf("USN: %d\nName: %s\nCourse: %s\nMarks: %d", USN, Name, Course, Marks);
    fscanf(in, "USN: %d\nName: %s\nCourse: %s\nMarks: %d", &USN, Name, Course, &Marks);
    printf("USN: %d\nName: %s\nCourse: %s\nMarks: %d", USN, Name, Course, Marks);
    fclose(in);
    return 0;
}