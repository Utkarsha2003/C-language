#include <stdio.h>

int main(){
    int a;
    printf("Enter your age -");
    scanf("%d",&a);
    printf("You have entered %d as your age.",a);
    if (a>18){
        printf("\nYou can vote!");
    }

    
    return 0;
}