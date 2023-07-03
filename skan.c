#include <stdio.h>
int main()
{int num;
float flt;
char chr;
char msg[10];
double dbl;
long int lng_int;
printf("\nEnter the value of num ");
scanf("%d", &num);
printf("\nEnter the value of flt ");
scanf("%f", &flt);
printf("\nEnter the value of chr ");
scanf("%c", chr);
printf("\nEnter the value of msg ");
scanf("%s", msg);
printf("\nEnter the value of dbl ");
scanf("%e", &dbl);
printf("\nEnter the value of lng_int ");
scanf("%ld", &lng_int);
printf("%d\n%f\n%c\n%s\n%e\n%ld",num,flt,chr,msg,dbl,lng_int);


//scanf("%d", &num);
//printf("\nEnter the value of int ");
//scanf("%d", &num);
    return 0;
}