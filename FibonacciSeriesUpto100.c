#include<stdio.h>
void main()
{
    int n,a=0,b=1,i,c;
    printf("Enter the Limit \n");
    scanf("%d",&n);

    printf("%d %d ",a,b);

    for(i=2;i<n;i++)
    {
        c=a+b;
        if(c<n)
        {
            printf("%d ",c);
            if((b+c)>n)
            break;
        }
        a=b,b=c;
    }
}
