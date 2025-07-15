#include<stdio.h>
int main(){
    int x;
    int *p=&x;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x);
    printf("Pointer p holds: %p\n", p);
    printf("Value pointed by p: %d\n", *p);
}