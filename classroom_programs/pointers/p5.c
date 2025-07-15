// write a program to take input of an array and initialize base address 
// using pointers and the print the value of array using pointers
#include<stdio.h>
int main(){
    int arr[5];
    printf("Enter the array elements : ");
    for(int i=0;i<5;i++){
        scanf("%d   ",&arr[i]);
    }
    int *p1=&arr;
    printf("The array elements are : ");
    for (int i = 0; i < 5; i++){
        printf("%d \n", p1[i]);
    }
    return 0;
}

