#include <stdio.h>

void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int temp;

    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start = start + 1;
        end = end - 1;
    }
}

int main()
{
    int numbers[5] = {1, 2, 3, 4, 5};
    int i;

    reverseArray(numbers, 5);

    printf("Reversed array: ");
    for (i = 0; i < 5; i = i + 1)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}