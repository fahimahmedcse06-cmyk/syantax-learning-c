#include <stdio.h>

void findMin(int a, int b, int *result)
{
    if (a < b)
    {
        *result = a;
    }
    else
    {
        *result = b;
    }
}

int main()
{
    int x = 15, y = 8;
    int minValue;

    findMin(x, y, &minValue);

    printf("Minimum value: %d\n", minValue);

    return 0;
}