#include <stdio.h>
int main()
{
    int i, j, k, l, n;
    for (i = 1; i <= 5; i++)
    {
        for (k = 5; k >= i; k--)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("%d", j);
        for (l = j - 2; l > 0; l--)
            printf("%d", l);
        printf("\n");
    }
    printf("\n\npattern2\n");
    printf("enter n-");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 2 * n; j++)
        {
            if (n - i < j && j < n + i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}