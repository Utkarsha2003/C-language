#include <stdio.h>
int main()
{
    int d = 17;
    printf("%5d\n", d);
    printf("%-5d\n", d);
    printf("%+5d\n", d);
    int i = -5;
    printf("%d\n", i);
    printf("%+d\n", i);
    printf("%o\n", i);
    printf("%#o\n", i);
    printf("%x\n", i);
    printf("%#x\n", i);
    char str[] = "Good morning";
    printf("\n %s", str);
    printf("\n %20s", str);
    printf("\n %20.10s", str);
    printf("\n %.7s", str);
    printf("\n %-20.10s", str);
    printf("\n %7s", str);
    return 0;
}