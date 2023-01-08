#include <stdio.h>
int y =5;
int array[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
int her = 2;

int arraysum(int *array_num, int i)
{
    if (array_num[i] == '\0')
    {
        return 0;
    }
    else
    {
        return array_num[i] + arraysum(array_num, i+1);
    }
}

int main()
{
    int i = 0;
    int result = arraysum(array, i);
    printf("the sum is %d", result);
    return 0;
}