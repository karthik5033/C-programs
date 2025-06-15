#include<stdio.h>
#include<string.h>
int main(){
    char str[100],new[100];
    int n,m,i=0;
    printf("Enter the string : ");
    fgets(str,sizeof(str),stdin);
    printf("Enter the number of characters you want to extact from right :");
    scanf("%d",&n);
    m=strlen(str)-n;
    while (str[m]!='\0'&& m<strlen(str))
    {
        new[i]=str[m];
        i++;
        m++;
    }
    new[i]='\0';
    printf("the new substring is : %s",new);
    
}