/* Write a C Program to check whether a number is SingleDigit or MultiDigit number ? */

#include<stdio.h>
void main()
{
    int n,c=0,dig;
    printf("Enter the Digit : \n");
    scanf("%d",&n);
    if(n<0)
    n=n*(-1);
    if(n==0)
    printf("It's a 0 Digit Number \n");
    else
    {
        while(n>0)
        {
            dig=n%10;
            c=c+1;
            n=n/10;
        }

    }
}
