/* Write a C Program to input a number and print the factorial of the number if it is Even else print the
   sum of the Digits ? */

#include<stdio.h>
void main()
{
    int n,i,fact=1,sum=0;
    printf("Enter the number : \n");
    scanf("%d",&n);
    if(n%2==0)
    {
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        printf("Therefore the number %d is Even and the Factorial is %d \n",n,fact);
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            sum=sum+i;
        }
        printf("Therefore the number %d is Odd and the Sum is %d \n",n,sum);
    }
}
