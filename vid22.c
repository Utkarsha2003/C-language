#include <stdio.h>
void main()
{
    float num;
    char r;
    printf("For conversion of no. from\nkms to miles-enter m\ninches to foot-enter f\ncms to inches-enter i\npound to kgs-enter k\ninches to meters-enter M\nTo exit the program type E\n");
    printf("Enter a number : ");
    scanf("%f", &num);
repea:
    printf("\nReqiured outcome?:");
    scanf("%c", &r);
    if (r == 'm')
        printf("%f", num * 0.621371);
    if (r == 'f')
        printf("%f", num * 0.0833);
    if (r == 'i')
        printf("%f", num * 0.3937);
    if (r == 'k')
        printf("%f", num * 0.453592);
    if (r == 'M')
        printf("%f", num * 0.0254);
    if (r == 'E')
        goto last;
    else
        goto repea;
last:
    getchar();

    return;
}