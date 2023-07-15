#include <stdio.h>
void changevalue(int *address);
int main()
{
    int a = 34;
    printf("The value of a is %d\n", a);
    changevalue(&a);
    printf("The value of a is %d\n", a);
    return 0;
}
void changevalue(int *address)
{
    *address = 6766;
}