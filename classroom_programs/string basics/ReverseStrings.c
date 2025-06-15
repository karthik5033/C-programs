#include<stdio.h>
#include<string.h>
int main(){ 
    char str[100],new[100];
    int i, j=0;
    printf("Enter the string : ");
    gets(str);
while(str[i]!='\0'){
for(j=strlen(str);j>=0;j--){
    new[j]=str[i];
}
i++;
}
printf("the reversed string is : %s",new);

   
}