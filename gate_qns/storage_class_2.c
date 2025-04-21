#include<stdio.h>
int g(int p){printf("%d",p);return p;}
int h(int q){printf("%d",q);return q;}
void f(int x , int y ){
    g(x);
    h(y);
}
int main(){
    f(g(10),h(20));
}

// the output of the program is . Assume the parameters are evaluated from right to left?
// Ans : 20101020