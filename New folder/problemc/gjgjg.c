#include <stdio.h>

void addArrays(int arr1[], int arr2[], int result[], int size)
{
    int i;

    for (i = 0; i < size; i = i + 1)
    {
        result[i] = arr1[i] + arr2[i];
    }
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {10, 20, 30, 40, 50};
    int sum[5];
    int i;

    addArrays(a, b, sum, 5);

    printf("Resultant array: ");
    for (i = 0; i < 5; i = i + 1)
    {
        printf("%d ", sum[i]);
    }
    printf("\n");

    return 0;
}