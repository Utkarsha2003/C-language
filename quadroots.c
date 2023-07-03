#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    float D, deno, root1, root2;
    printf("\nEnter the values of a, b and c :");
    scanf("%d %d %d", &a, &b, &c);
    D = (b * b) - (4 * a * c);
    deno = 2 * a;
    if (D > 0)
    {
        printf("\nenter no.-");
        root1 = (-b + sqrt(D)) / deno;
        root2 = (-b - sqrt(D)) / deno;
        printf("\nROOT 1 = %f \n ROOT2 = %f", root1, root2);
    }
    else if (D == 0)
    {
        printf("\nenter no.-");
        root1 = (-b) / deno;
        printf("\nROOT 1 = %f \n ROOT2 = %f", root1, root1);
    }
    else{
        printf("\nImaginary roots");
    }
    return 0;
}