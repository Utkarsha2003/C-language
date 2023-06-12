#include <stdio.h>
int main(){
    int i,age;
    printf("all are cute except age 6 kid\n");
    for ( i = 0; i < 10; i++)
    {
        printf("Enter your age-");
        scanf("%d",&age);
        if (age == 6)
        {
            continue;
        }
        
        if (age > 10)
        {
            printf("This code is not for you.");
            break;
        }
        else
        printf("you are cute!\n");
    }
    
    return 0;
}