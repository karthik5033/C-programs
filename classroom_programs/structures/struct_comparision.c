#include <stdio.h>

struct student
{
    int USN;
    char NAME[20];
    int M1;
};

void display(struct student s);

int main()
{
    struct student S1 = {10, "abc", 80};
    struct student S2;

    S2 = S1;

    printf("Before modification:\n");
    printf("S1: ");
    display(S1);
    printf("S2: ");
    display(S2);

    S2.USN = 20;
    strcpy(S2.NAME, "xyz");

    S2.M1 = 90;

    printf("\nAfter modification:\n");
    printf("S1: ");
    display(S1);

    printf("S2: ");
    display(S2);

    return 0;
}

void display(struct student s)
{
    printf("%d %s %d\n", s.USN, s.NAME, s.M1);
}