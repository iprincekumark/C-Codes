/* Write a C Program to input a number and print number of digits in a number and also print the sum of
   the digits ? */

#include<stdio.h>
void main()
{
    int n,count=0,dig,sum=0;
    printf("Enter the digit : \n");
    scanf("%d",&n);
    if(n<0)
    n=n*(-1);
    if(n>=0&&n<10)
    printf("Therefore the number of digit is 1 and the sum of the digit is %d \n",n);
    else
    {
        while(n>0)
        {
            dig=n%10;
            count++;
            sum=sum+dig;
            n=n/10;
        }
        printf("Therefore the number of digit is %d and the sum of the digit is %d \n",count,sum);
    }
}
