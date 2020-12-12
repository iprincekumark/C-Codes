/* Write a C Program to input a matrix and print the sum of primary diagonal elements of a matrix ? */

#include<stdio.h>
void main()
{
    int n,m,A[10][10],i,j;
    printf("Enter the order of the matrix :\n");
    scanf("%d%d",&n,&m);
    if(n!=m)
    printf("INVALID INPUT : ORDER MUST BE EQUAL \n");
    else
    {
      for(i=0;i<n;i++)
      {
          for(j=0;j<m;j++)
          {
              scanf("%d",&A[i][j]);
          }
      }
      for(i=0;i<n;i++)
      {
          for(j=0;j<m;j++)
          {
              if(i>=j)
              printf("%d ",A[i][j]);
          }
          printf("\n");
      }
    }
}
