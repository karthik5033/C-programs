// write a program to take string input and reverse the order.
#include<stdio.h>
#include<string.h>
int main(){
    int str[100],dum[100],i,j;
    printf("Enter the string to compare : ");
    gets(str);
    while(str[i]!='\0'){
    j=0;
    while(1){
        if(str[i]==' '||str[i]=='\0')
        i++;
        else
        break;
    }
    while(str[i]!=' '&&str[i]!='\0'){
        dum[j++]=str[i++];
    }
    dum[j]='\0';
    strrev(dum);
    printf("%s ",dum);

    }
}

}