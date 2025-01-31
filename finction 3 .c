#include <stdio.h>
void a();
void b();
void c();
int main(){
    a();
    b();
   
    return 0;
}
void a(){printf("a");b();}
void b(){printf("b");c();}
void c(){printf("c");}