/* Write a C Program to print the sum of the following series :- 1-2+3-4+5-....+n ? */

#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("Enter the limit of the series to find the sum :\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        sum=sum-i;
        else
        sum=sum+i;
    }
    printf("Therefore the Sum of the Series is %d \n",sum);
}
