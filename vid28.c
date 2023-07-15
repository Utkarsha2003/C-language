#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 67};
    int *arrayptr = arr;
    printf("value of arr[3] is %d\n", arr[3]);
    printf("adress of 1st array element %d\n", &arr[0]);
    printf("adress of 1st array element %d\n", arr);
    printf("adress of 2nd array element %d\n", &arr[1]);
    printf("adress of 2nd array element %d\n", arr + 1);
    printf("adress of 2nd array element %d\n\n", ++arrayptr);
    printf("value at adress of 1st array element %d\n", *(&arr[0]));
    printf("value at adress of 1st array element %d\n", *(arr));
    printf("value at adress of 1st array element %d\n", arr[0]);
    printf("value at adress of 2nd array element %d\n", *(&arr[1]));
    printf("value at adress of 2nd array element %d\n", *(arr + 1));
    printf("value at adress of 2nd array element %d\n", arr[1]);

    return 0;
}