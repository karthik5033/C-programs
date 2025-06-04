#include<stdio.h>

struct student {
    int USN;
    char NAME[20];
    int M1;
};


void display(struct student S1);

int main() {
    struct student S1 = {10, "abc", 80};
    display(S1);  
    return 0;
}

void display(struct student S1) {
    printf("%d %s %d\n", S1.USN, S1.NAME, S1.M1);
}