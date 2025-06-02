#include <stdio.h>
#include <string.h>

struct student {
    int USN;
    char NAME[20];
    int M1;
    int M2;
} stud1 = {2, "Karthik", 4, 6};  // Correct placement

struct student si1;
struct student stud2 = {3, "abc", 5, 6};

typedef struct student1 {
    int USN;
    char NAME[20];
    int Marks;
} student2;

student2 student3 = {4, "xyz", 8}, s2 = {2, "abc", 9};  // Use typedef name and fix type

int main() {
    struct students {
        int USN;
        char NAME[20];
        int Marks1;
    } st1 = {1, "mf", 45};

    printf("%d %s %d\n", stud1.USN, stud1.NAME, stud1.M1);
    printf("%d %s %d\n", st1.USN, st1.NAME, st1.Marks1);
    printf("%d %s %d\n", stud2.USN, stud2.NAME, stud2.M1);
    printf("%d %s %d\n", student3.USN, student3.NAME, student3.Marks);

    return 0;
}
