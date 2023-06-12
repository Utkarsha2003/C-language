#include <stdio.h>
int main()
{
    int i, j;
    int marks[4];
    for (i = 0; i < 4; i++)
    {
        printf("enter value of %dth element of array\n", i);
        scanf("%d", &marks[i]);
        printf("marks[%d] = %d\n", i, marks[i]);
    }
    printf("two dimensional array\n");
    int pair[2][4] = {{45, 234, 2, 3}, {3, 2, 8, 9}};
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {

            printf("pair[%d][%d] = %d   ", i, j ,pair[i][j]);
            
        }
        printf("\n");
    }

    return 0;
}
