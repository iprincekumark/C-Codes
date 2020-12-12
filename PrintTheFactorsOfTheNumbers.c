/* Write a C Program to input a number and find all the factors of a number ? */

#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter the value : \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        printf("%d ",i);
    }
}
