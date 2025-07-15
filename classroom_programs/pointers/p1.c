// write a program to print the value of x and its address
#include<stdio.h>
int main(){
    int x;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    printf(" the address of x in memory is : %llu \n",x);
    printf(" the address of x in memory in hexadecimal form is : %p", x);
}