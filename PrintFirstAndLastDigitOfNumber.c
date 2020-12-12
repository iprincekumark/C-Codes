/* Write a C Program to input a number and print the first and the last digit of a number ? */

#include<stdio.h>
void main()
{
    int n,fDig,lDig,i,dig,D=1,count=0,x;
    printf("Enter the number : \n");
    scanf("%d",&n);
    x=n;
    if(n<0)
    n=n*(-1);
    if(n>=0&&n<10)
    printf("Therefore it is a Single Digit i.e. WRONG INPUT ! \n");
    else
    {
        while(n>0)
        {
            dig=n%10;
            count++;
            n=n/10;
        }
        for(i=1;i<count;i++)
        D=D*10;
        fDig=x/D;
        lDig=x%10;
        printf("Therefore the First Digit is %d and the Last Digit is %d \n",fDig,lDig);
    }
}
