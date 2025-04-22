// write a program to accept the number from 1 to 10 and print whether the number is even or odd using switch
#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n : ");
    scanf("%d", &n);

    if(n>0&&n<=10){
        switch (n)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
        printf("the  number is odd");
        break;
        case 2:
        case 4:
        case 6:
        case 8:
        case 10:
        printf("the  number is even");
            break;
        
        default:
        printf("invalid input");
            break;
        }
    }
}