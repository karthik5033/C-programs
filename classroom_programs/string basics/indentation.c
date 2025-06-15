#include<stdio.h>
#include<string.h>
int main(){
char str[]="hello world";
printf("\n [%s]",str);
printf("\n [%20s]",str);
printf("\n [%3.4s]",str);
// 3 → Minimum width (at least 3 characters total).

// .4 → Maximum number of characters to print from the string.

// So:

// It prints at most 4 characters of the string.

// If the printed result is less than 3 characters, it pads with spaces (but here it's not needed since 4 > 3).
printf("\n [%-20s]",str);
printf("\n [%.4s]",str);
return 0;
}