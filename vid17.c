#include <stdio.h>
int sum(int a, int b);
int main()
{   int a, b, c;
    a=8;
    b=87;
    c=sum(a,b);
    printf("%d",c);
    return 0;}
int sum(int a, int b)
{
    return a + b;
}