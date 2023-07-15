#include <stdio.h>
int main()
{
    int a =76;
    int *ptr =&a;
    printf("a ka address %p\n",&a);
    printf("ptr ki memory %p\n",ptr);
    printf("ptr ka address %p\n",&ptr);
    printf("a ki memory %d\n",a);
    printf("ptr ki memory adress ki memory %d\n",*ptr);
    return 0;
}