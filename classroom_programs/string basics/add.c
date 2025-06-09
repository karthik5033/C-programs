#include<stdio.h>
int main(){
    char ch,str[20],i=0;
    scanf("%s",&str);
    printf("%s\n",str);
    ch=getchar();
    while(ch!='\n'){
        str[i++]=ch;
        ch=getchar();
    }
    str[i]='\0';
    printf("%s\n",str);
    puts(str);
    i=0;
    while(ch!='\0'){
        ch=str[i++];
        putchar(ch);
    }
    
}