#include <stdio.h>
int main(){
    int num, onesdigit, tensdigit;
printf("enter a number-");
scanf("%d",&num);
onesdigit=num%10;
printf("number at ones place is %d",onesdigit);
//tensdigit=(num%100-num%10)%10;
//printf("number at ones place is %d",tensdigit);
    return 0;
}