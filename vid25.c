#include <stdio.h>
int fibonacci(int number){
    if(number==0 || number==1)
    return number;
    else
    return fibonacci(number-1)+fibonacci(number-2);
}
int main(){
    int number;
    printf("Enter the fibonacci series nth term:  ");
    scanf("%d",&number);
    printf("Value of fibonacci series nth term is %d",fibonacci(number));
    return 0;
}