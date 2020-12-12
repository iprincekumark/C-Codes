/* Write a C Program to find frequency of an inputted digit in a given integer ? */

#include<stdio.h>
void main()
{
    int n,x,y,i,dig,count=0;
    printf("Enter the value of the integer :\n");
    scanf("%d",&n);
    y=n;
    printf("Enter the Digit to find the frequency \n");
    scanf("%d",&x);
    while(n!=0)
    {
        dig=n%10;
        if(dig==x)
        count++;
        n=n/10;
    }
    printf("Therefore the Digit %d frequency is %d ",x,count);
}
