#include <stdio.h>
int main(){
        printf("Code only for kids under 5\n");
        int i, age;
        for ( i = 0; i < 10; i++)
        {
           printf("What is your age?\n");
           scanf("%d",&age);
           if (age > 5)
           {
            break;
           }
           else
           printf("Your Welcome.");
        }
        return 0;
    }


