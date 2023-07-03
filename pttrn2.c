#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        printf("\n");
        for (j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
    }
    printf("\n\npattern 2\n");
    int num = 0;
    for (i = 1; i <= 4; i++)
    {
        printf("\n");
        for (j = 1; j <= i; j++)
        {
            printf("%d", num++);
        }
    }
    printf("\n\npattern 3\n");
    char a, b;
    for (a = 65; a <= 70; a++)
    {
        printf("\n");
        for (b = 65; b <= a; b++)
        {
            printf("%c", b);
        }
    }
    printf("\n\npattern 4\n");
    int k;
    for (i = 1; i <= 5; i++)
    {
        for (k = 5; k >= i; k--)
            printf(" ");

        for (j = 1; j <= i; j++)

            printf("%d", j);

        printf("\n");
    }

    return 0;
}