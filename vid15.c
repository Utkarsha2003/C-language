#include <stdio.h>
int main(){
    int i, j;
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 6; j++)
        {
            if (j==2)
            break;
            if (i==3)
            goto end;
            else printf("j\n");
        }printf("t\n");
        
    }
    end: printf("bye\n");
    return 0;
}