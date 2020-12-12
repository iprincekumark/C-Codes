#include <stdio.h>
int main()
{
    int A[100], B[100], C[500], i, j, m, n, c = 0;
    printf("Enter the Length of Array A and Array B :-\n");
    scanf("%d %d", &m, &n);
    printf("Enter the Elements of Array A -\n");
    for (i = 0; i < m; i++)
        scanf("%d", &A[i]);
    printf("Enter the Elements of Array B -\n");
    for (i = 0; i < n; i++)
        scanf("%d", &B[i]);
    for (i = 0; i < (m + n); i++)
    {
        if (i >= m)
        {
            C[i] = B[c];
            c++;
        }
        else if (i >= n)
        {
            C[i] = A[c];
            c++;
        }
        else if (i < m && i < n)
        {
            C[i] = A[c] + B[c];
            c++;
        }
    }
    printf("Therefore the Solution is :-\n");
    for (i = 0; (i < m) || (i < n); i++)
        printf("%d ", C[i]);
    return 0;
}