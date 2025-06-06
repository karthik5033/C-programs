#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];
    int age;

    // Open file in append mode
    fp = fopen("data.txt", "a");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Take input from user
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    // Append data to file
    fprintf(fp, "Name: %s, Age: %d\n", name, age);

    // Close the file
    fclose(fp);

    printf("Data appended successfully!\n");
    printf("Name: %s, Age: %d\n", name, age);
    return 0;
}
