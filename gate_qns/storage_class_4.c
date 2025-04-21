#include <stdio.h>
int f1(void);
int f2(void);
int f3(void);
int f4(int, int, int, int);
int x = 10;
int f1()
{
    int x = 25;
    x++;
    return x;
}
int f2()
{
    static int x = 50;
    x++;
    return x;
}
int f3()
{
    int x = x * 10;
    return x;
}
int f4(int a, int b, int c, int d)
{
    int x = a + b + c + d;
    return x;
}
int main()
{
    int x = 1;
    x += f4(f1(), f2(), f3(), f2());
    printf("%d", x);
    return 0;
}

// The value printed by the program is
// Ans :