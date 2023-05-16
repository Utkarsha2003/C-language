#include <stdio.h>

int main() {
    int i=2,s=0;
    do
    {
        printf("%d\n",i);
        i=i+3;
    }while(i<150);

for(i = 2; i <=150; i+=3)
{
if(i%5==0)
s += i;
}

printf("The sum of numbers divisible by 5 is %d", s);
    return 0;
}