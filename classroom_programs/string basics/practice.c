// #include<stdio.h>
// int main(){
//     char str[100];
//     char ch;
//     int i=0;
//     printf("Enter the string : ");
//     ch=getchar();
//     while(ch!='\n'){
//         str[i]=ch;
//         i++;
//         ch = getchar();
//     }
//     str[i]='\0';
//     printf(" the entered string is : %s",str);
//     return 0;

// }
#include<stdio.h>
int main(){
    int a[5],i;
    for(i=0;i<5;i++){
        printf("%-3d",a[i]);
        return 0;
    }
}