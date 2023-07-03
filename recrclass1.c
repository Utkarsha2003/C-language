#include <stdio.h>
int even(int num)
{
    if(num==1)
    return 2;
    else
    return (2*num+even(num-1));
}
int main(){
    int i;
    printf("enter no.");
    scanf("%d",&i);
    printf("%d",even(i));
    return 0;
}