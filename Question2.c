/* Write a C Program to input two numbers x and y.Calculate and print the value of (x)^y ? */

#include<stdio.h>
void main()
{
    int x,y,i,sum=1;
    printf("Enter the values of x and y to calculate (x)^y : \n");
    scanf("%d %d",&x,&y);
    for(i=0;i<y;i++)
    {
        sum=sum*x;
    }
    printf("Therefore the value of (x)^y is %d \n",sum);
}
