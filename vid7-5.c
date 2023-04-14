#include <stdio.h>
   int main(){
    int a, b;
    printf("The value of a is - ");
    scanf("%d",&a);
    printf("The value of b is - ");
    scanf("%d",&b);
    printf("These are BITWISE OPERATORS");
    printf("\nThe value of 2&3 is - %d",2&3);
    printf("\nThe value of a&b (AND) is - %d",a&b);
    printf("\nThe value of a|b (OR) is - %d",a|b);
    printf("\nThe value of a^b (EXCLUSIVE OR) is - %d",a^b);

    return 0;
}