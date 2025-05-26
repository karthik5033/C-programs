#include <stdio.h>

int main() {
  char str[]="This is RVCE";
  char str1[]="bullshit college";
  char str2[50];
  printf("%d\n,strlen(str));", strlen(str));
  strcat(str,str1);
  printf("concatenated string=%s",str);
  strcpy(str2,str);
  printf("copied string=%s",str2);
  strncpy(str2,str1,2);
  
 
}
