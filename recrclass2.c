#include <stdio.h>
int odd(int num)
{
    if(num==1)
    return 1;
    else
    return 2*num-1+odd(num-1);
}
int main(){
    int i;
    printf("enter no.");
    scanf("%d",&i);
    printf("%d",odd(i));
    return 0;
}