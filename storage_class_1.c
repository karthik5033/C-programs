#include <stdio.h>
int jumble(int x, int y)
{
    x = 2 * x + y;
    return x;
}

/**
 * @brief Entry point of the program
 *
 * This function calls the jumble function twice and prints the result.
 */
int main()
{
    int x=2 , y=5;
    y=jumble(y,x );
    x=jumble(y,x );
    printf("%d \n", x);
    return 0;
}

// Qn : the value printed by the program is 
// Ans : 