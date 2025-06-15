// write a program to demonstrate the use of sprintf()
#include<stdio.h>
#include<string.h>
int main(){
char str[100];int age=20;
sprintf(str,"My age is %d in 2025",age);
printf("%s",str);
}