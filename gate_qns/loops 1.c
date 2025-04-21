#include <stdio.h.>
int main()
{
    int i, j = 10, k = j = 10;
    for (i = 10; i <= 200; i++)
    {
        printf("\nline1");
    }

    do
    {
        printf("\n line 2");
        j = j + 2;
    }

    while (j <= 200);

    while (k <= 200)
    {
        printf("\nline 3");
        k = k + 3;
        return 0;
    }
}
// question :-
//  The number of times line 1 printed  is x , number of times line 2 is printed is  y and number of times line 3 is printed is z,what is the relation between x , y , z ?

//       x=line 1 will be printed 191 times
//       y= line 2 will be printed 86 times
//       z= line 3 will be printed 64 y times


//  so answer :- x>y>z
