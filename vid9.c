#include <stdio.h>
int main(){
int a = 6;
float b = 7.93386;
    printf("The value of a is %d and the value of b is %f", a, b);
    printf("\nThe value of b upto 2 decimal no. is %0.2f", b);
    printf("\nThe value of b upto 2 decimal no. and 10 digit space is %10.2f", b);
    printf("\nThe value of b upto 2 decimal no. and 10 digit space is %-10.2f leaves space in behind", b);
  return 0;
}