#include<stdio.h>
int main(){
    int i;
    for(i=1;i<=10;i++)
    {
        printf("name \n");
        if(i==4) 
        break;
    }
    printf("outside break");
    return 0;

}