// Write a program to swap two variables using pointers
#include<stdio.h>
int swap(int *x , int *y){
    int c=*x;
    *x=*y;
    *y=c;
}
int main(){
    int x,y;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    printf("Enter the value of y : ");
    scanf("%d", &y);
    swap(&x,&y);
    printf("The value of x after swapping is :%d \n",x);
    printf("The value of x after swapping is :%d ",y);
}