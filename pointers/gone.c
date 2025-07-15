#include<stdio.h>
int main(){
    int arr[5],i,*parr;
    parr=arr;
        for(i=0;i<5;i++){
            parr=0;
            *parr++;
        }
        for ( i = 0; i < 5; i++)
        {
            printf("%d \n",*(arr+i));
        }
        
}