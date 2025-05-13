// write a program to find addition,subtraction and transpose of two matrices
#include <stdio.h>
int main()
{
    int i, j, rows1, cols1, rows2, cols2, mat1[100][100], mat2[100][100], trans1[100][100], trans2[100][100], sum[100][100], diff[100][100],prod[100][100];

    // input of matrix 1
    printf("Enter rows and columns for first matrix >");
    scanf("%d%d", &rows1, &cols1);

    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols1; j++)
        {
            printf("Enter the %d row %d element", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }
    // input of matrix 2
    printf("Enter rows and columns for second matrix >");
    scanf("%d%d", &rows2, &cols2);

    for (i = 0; i < rows2; i++)
    {
        for (j = 0; j < cols2; j++)
        {
            printf("Enter the %d row %d element", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
        }
    }
    // sum of two matrices
    if (rows1 == rows2 && cols1 == cols2)
    {
        for (i = 0; i < rows1; i++)
        {
            for (j = 0; j < cols1; j++)
            {
                sum[i][j] = mat1[i][j] + mat2[i][j];
                diff[i][j] = mat1[i][j] - mat2[i][j];
            }
        }

        printf(" sum of matrix= \n");
        for (i = 0; i < rows1; i++)
        {
            for (j = 0; j < cols1; j++)
            {
                printf("  %d      ", sum[i][j]);
            }
            printf("\n");
        }

        printf(" difference of matrix= \n");
        for (i = 0; i < rows1; i++)
        {
            for (j = 0; j < cols1; j++)
            {
                printf("  %d      ", diff[i][j]);
            }
            printf("\n");
        }
    }

    // transpose of matrices1
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols1; j++)
        {
            trans1[j][i] = mat1[i][j];
        }
    }
    // transpose of matrices2
    for (i = 0; i < rows2; i++)
    {
        for (j = 0; j < cols2; j++)
        {

            trans2[j][i] = mat2[i][j];
        }
    }

    printf(" transpose of matrix 1 = \n");
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols1; j++)
        {
            printf("  %d      ", trans1[i][j]);
        }
        printf("\n");
    }

    printf(" transpose of matrix 2 = \n");
    for (i = 0; i < rows2; i++)
    {
        for (j = 0; j < cols2; j++)
        {
            printf("  %d      ", trans2[i][j]);
        }
        printf("\n");
    }

    // multiplication of two matrix
    if(cols1==rows2){
        for (i = 0; i < rows2; i++)
    {
        for (j = 0; j < cols2; j++)
        {
           
            
        }
    }

    }
    return 0;
}