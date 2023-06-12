#include <stdio.h>

int main(){
    int age, marks;
    printf("Enter your age-");
    scanf("%d",&age);
    switch(age)
    {
        case 3:
       {{printf("the age is 3"); 
        printf("\nEnter your marks-");
        scanf("%d",&marks);}
        switch(marks)
        {
            case 12:
            printf("\nneeds improvement");    
            break;
            default :
            printf("keep it up");
        }}
        break;
        case 5:
        printf("Your test is tommorow");
        break;
        default :
        printf("you are not allowed to give test");
    }
    return 0;
}