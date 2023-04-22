#include <stdio.h>
int main(){
    int m;
    printf("enter the no. of subjects you have passed-");
    scanf("%d",&m);
    if(m==1){
        printf("You will get 15 rupees.");
    }
    else if(m==2){
        printf("You will get 45 rupees.");
    }
    else{
        printf("Your answer does not match the no. of exams taken.");
    }
    return 0;
}