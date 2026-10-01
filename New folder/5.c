#include <stdio.h>

int findMax(int arr[], int size)
{
    int max;
    int i;

    max = arr[0];

    for (i = 1; i < size; i = i + 1)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int main()
{
    int numbers[5] = {12, 45, 7, 89, 23};
    int result;

    result = findMax(numbers, 5);

    printf("Maximum value: %d\n", result);

    return 0;
}