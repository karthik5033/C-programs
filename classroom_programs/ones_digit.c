// // write a program to print digit at ones place of a number
// #include <stdio.h>
// int main()
// {
//     int n;
//     int p, c;
//     printf("enter the number : ");
//     scanf("%d", &n);
//     for(p=1;p<10;p++){
//         c=n%(10*p);
//         if(c<10){
//             break;
//         }
//     }
//     printf("the ones digit is %d", c);
// }

// code is too complicated , therefore easier method is :
#include<stdio.h>
int main(){
    int n,one;
    printf("enter the number : ");
        scanf("%d", &n);
        one=n%10;
        printf("the ones digit is %d", one);
}