#include <stdio.h>
int main()
{
    int A[50],n,i,sum=0;
    printf("Enter the Limit Of the Array: \n");
    scanf("%d", &n);
    printf("Enter the Elements :-\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &A[i]);
    }
    for(i=0;i<n;i=i+2)
    {
        sum = sum + A[i];
    }
    printf("Therefore the Sum of Elements at Odd Places : %d",sum);
}