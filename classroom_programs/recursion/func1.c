#include<stdio.h>
#include<string.h>
int add(int n){
    
    n+=10;
    return n;
}
int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("the value of n before : %d",n);
    
    printf("the value of n after : %d", add(n));
    return 0;
}