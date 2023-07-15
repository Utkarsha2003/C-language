#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "Uttu";
    char s2[] = "puttup";
    char s3[100];

    printf("length- %d\n", strlen(s1));
    printf("reverse-%s\n", strrev(s1));
    printf("combine- %s\n", strcat(s1, s2));
    strcpy(s3, strcat(s1, s2));
    printf("copy- %s\n", s3);

    return 0;
}