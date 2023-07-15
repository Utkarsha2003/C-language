#include <stdio.h>
void printstr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    char str[] = {'u', 't', 't', 'u', '\0'};
    printstr(str);
    char strn[] = "uttu";
    printstr(strn);
    return 0;
}