#include <stdio.h>
int func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("Value at %d is %d\n", i, ptr[i]);
        printf("Value at %d is %d\n", i, *(ptr+i));
    }
    *(ptr+2)=6543;
}
int main()
{
    int arr[] = {23, 13, 3, 4};
    func2(arr);
    func2(arr);

    return 0;
}