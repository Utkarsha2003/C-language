#include <stdio.h>

int main(){
    int a;
    int b = 1;
    int c; 
    printf("These are ASSIGNMENT OPERATORS");
    printf("\na = %d, b = %d, c = %d",a=1, b, c);
    printf("\na = %d, b = %d, c = %d",a+=1, b+=1, c+=1);
    printf("\na = %d, b = %d, c = %d",a-=1, b-=1, c-=1);
    printf("\na = %d, b = %d, c = %d",a*=1, b*=1, c*=1);
    printf("\na = %d, b = %d, c = %d",a/=1, b/=1, c/=1);
    return 0;
}