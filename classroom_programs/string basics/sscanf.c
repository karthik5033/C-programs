#include<stdio.h>

int main(){
    char str[]="123 45.678";
    int a;
    float b;
    sscanf(str,"%d%f",&a,&b);
    printf("integer=%d \n",a);
    printf("float=%.2f \n", b);
}