#include<stdio.h>
int main(){
    int x,y,sum;
    int*p1,*p2;
    p1=&x;p2=&y;
   
    printf("Enter the first variable : ");
    scanf("%d",p1);
    printf("Enter the second variable : ");
    scanf("%d", p2);
    sum =*p1+*p2;
    printf("sum= %d ",sum);
}