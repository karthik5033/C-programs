#include<stdio.h>
#include<string.h>
int main(){
    struct student{
        int age;
        char name[20];
        int marks;
    };
struct student s1={10,"abc",90};
struct student s2=s1;

printf("%d %s %d\n",s1.age,s1.name,s1.marks);
printf("%d %s %d\n",s2.age,s2.name,s2.marks);

s1.age=20;
printf("%d %s %d\n",s1.age,s1.name,s1.marks);
printf("%d %s %d\n",s2.age,s2.name,s2.marks);
return 0;

}

// updating one of them does not reflect on other 


