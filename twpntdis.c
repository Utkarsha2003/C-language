#include <stdio.h>
//#include <conio.h>
#include <math.h>
int main(){
    int x1,y1,x2,y2;
    float distance;
    printf("\nEnter the x and y coordinates of the first point:");
    scanf("%d %d",&x1,&y1);
    printf("\nEnter the x and y coordinates of the second point:");
    scanf("%d %d",&x2, &y2);
    distance = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
    printf("\n Distance = %f", distance);
    return 0;
}