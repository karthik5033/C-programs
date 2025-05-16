// Bubble sort
#include <stdio.h>
int main()
{
    int rows, i, j, mat[100], temp[100];
    printf("Enter size for first matrix >");
    scanf("%d%d", &rows);

    for (i = 0; i < rows; i++)
    {

        printf("Enter the  %dnd element", i);
        scanf("%d", &mat[i]);
    }

    // sorting
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < i - 1; j++)
        {
            if (mat[j] > mat[j + 1])
            {
                temp[j]=mat[j];
                mat[j]=mat[j+1];
                mat[j+1]=temp[j];
               
            }
        }
    }
}