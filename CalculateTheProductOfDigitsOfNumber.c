/* Write a C Program to calculate the product of digits of a number ? */

#include<stdio.h>
void main()
{
    int n,sum=1,dig;
    printf("Enter the Number : \n");
    scanf("%d",&n);
    if(n<10)
    printf("Therefore it is a SingleDigit i.e WRONG INPUT \n");
    else
    {
        while(n!=0)
        {
            dig=n%10;
            sum=sum*dig;
            n=n/10;
        }
        printf("Therefore the product of digits is %d",sum);
    }
}
