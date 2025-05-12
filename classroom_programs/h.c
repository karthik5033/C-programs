// write a program to find addition,subtraction and transpose of two matrices
#include<stdio.h>
int main(){
    int i,j,rows,cols,mat1[100][100],mat2[100][100],trans1[100][100],trans2[100][100],sum[100][100],dif[100][100];

    // input of matrix 1
    printf("Enter rows and columns for first matrix >");
    scanf("%d%d",&rows,&cols);

    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("Enter the %d row %d element",i,j);
            scanf("%d",&mat1[i][j]);
        }
        
    }
    // input of matrix 2
    printf("Enter rows and columns for second matrix >");
    scanf("%d%d",&rows,&cols);

    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("Enter the %d row %d element",i,j);
            scanf("%d",&mat2[i][j]);
        }
        
    }
    // sum of two matrices
    // difference of two matrices
    // transpose of first matrix
    // transpose of second matrix

}