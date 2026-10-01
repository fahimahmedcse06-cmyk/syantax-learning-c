#include <stdio.h>

int sumArray(int arr[], int size)
{
    int total = 0;
    int i;

    for (i = 0; i < size; i = i + 1)
    {
        total = total + arr[i];
    }

    return total;
}

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};
    int result;

    result = sumArray(numbers, 5);

    printf("Sum of array elements: %d\n", result);

    return 0;
}