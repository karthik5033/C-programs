#include <stdio.h>
int f1(void);
int f2(void);
int f3(void);
int x = 10;
int main()
{
    int x = 1;
    x += f1() + f2() + f3() + f2();
    printf("%d", x);
    return 0;
}
f1()
{
    int x = 25;
    x++;
    return x;
}
f2()
{
    int x = 50;
    x++;
    return x;
}
f3()
{
    int  x = x*10;
    return x;
}

// Qn: the value printed by the program is 
// Ans : 229