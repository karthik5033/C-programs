// find the average marks from all the students details
#include<stdio.h>
#include<string.h>
int main(){
    float x;
    struct student{
      
        int marks;
        
    }
    stud1[10];
    for(int i=0;i<10;i++){
        printf("Enter the %d th student marks ",i);
        scanf("%d ",&stud1[i].marks);
    }
    for(int i=0;i<10;i++){
        int sum=0;
        sum+=stud1[i].marks;
        float x =sum/10;
    }
    printf("Average marks are %f",x);
    return 0;
}
// create a sturture for defining complex number and perform basic mathematical operations