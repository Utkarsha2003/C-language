#include <stdio.h>
void arrayrev(int arr[])
{
    int temp;
    for (int i = 0; i < 3; i++)
    {
        temp = arr[i];
        arr[i] = arr[5 - i];
        arr[5 - i] = temp;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    arrayrev(arr);
    for (int i = 0; i < 6; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}