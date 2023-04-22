#include <stdio.h>
int main(){
    int a;
    printf("Your future predictor!\nEnter your birthday date -");
    scanf("%d",&a);
    if(a<=10){
        printf("You will be a politician.");
    }
    else if(a<=20){
        printf("You will be a singer.");
    }
    else if(a>31){
        printf("That is not a valid birthdate.");
    }
    else {
        printf("You will be a dancer.");
    }
    return 0;
}