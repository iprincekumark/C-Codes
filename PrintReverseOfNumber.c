/* Write a C Program to input a number and print the reverse of a number ? */
#include<stdio.h>
void main()
{
    int n,rev=0,dig;
    printf("Enter the digit to be reversed : \n");
    scanf("%d",&n);
    if(n<0)
    n=n*(-1);
    if(n>-1&&n<10)
    printf("It is a SingleDigit Number \n");
    else
    {
        while(n>0)
        {
            dig=n%10;
            rev=(rev*10)+dig;
            n=n/10;
        }
        printf("Revered Digit is %d \n",rev);
    }
}
