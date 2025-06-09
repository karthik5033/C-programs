#include<stdio.h>
void strrev(char str[]){
    int i=0,j=strlen(str)-1;
    while(i<j){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
}