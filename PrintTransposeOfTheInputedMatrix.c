/* Write a C Program to input a matrix and print the transpose of the matrix ? */

#include<stdio.h>
void main()
{
    int A[10][10],i,j,n,m;
    printf("Enter the Order of the matrix : \n");
    scanf("%d %d",&n,&m);
    printf("Enter the Elements Of the Matrix \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Therefore the transpose of the matrix is : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",A[j][i]);
        }
        printf("\n");
    }
}
