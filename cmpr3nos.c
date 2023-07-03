#include <stdio.h>
#include <conio.h>
int main()
{
    int num1, num2, num3, large, small;
    printf("\nEnter the first number:");
    scanf("%d", &num1);
    printf("\nEnter the second number:");
    scanf("%d", &num2);
    printf("\nEnter the third number:");
    scanf("%d", &num3);
    large = num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
    printf("\nThe Largest no. is %d ", large);
    if (num1 > num2 && num1 > num3)
        printf("\nThe largest no. is %d ", num1);
    if (num2 > num1 && num2 > num3)
        printf("\nThe largest no. is %d ", num2);
    if (num3 > num1 && num3 > num2)
        printf("\nThe largest no. is %d ", num3);
    small = num1 > num2 ? (num3 > num2 ? num2 : num3) : (num3 > num1 ? num1 : num3);
    printf("\nThe Smallest no. is %d ", small);
    // printf("\nEnter the first number:");
    // scanf("%d",&num1);
    return 0;
}