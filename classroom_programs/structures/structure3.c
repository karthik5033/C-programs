// wap to read details of 10 employees and print the same

#include <stdio.h>
#include<string.h>
int main(){
    struct student{
        int age;
        int marks;
        char name[20];
    }
    stud1[10];
    for(int i=0;i<10;i++){
        printf("Enter the %d th students details (age marks name)",i);
        scanf("%d %d %s",&stud1[i].age,&stud1[i].marks,stud1[i].name);
    }
    for(int i=0;i<10;i++){
        printf("%d %d %s\n",stud1[i].age,stud1[i].marks,stud1[i].name);
    }
    return 0;
}

