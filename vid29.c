#include <stdio.h>
int func1(int array[])
{ for (int i = 0; i < 4; i++)
{
    printf("value at %d is %d\n",i,array[i]);
}
array[0] = 324;
    return 0;
}
int main()
{
   int arr[] = {3,4,5,77}; 
   printf("value at 0 is %d\n",arr[0]);
   func1(arr);
   printf("value at 0 is %d\n",arr[0]);
    return 0;
}