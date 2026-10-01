#include <stdio.h>

int countUnique(int arr[], int size)
{
    int count = 0;
    int i, j;
    int isDuplicate;

    for (i = 0; i < size; i = i + 1)
    {
        isDuplicate = 0;

        for (j = 0; j < i; j = j + 1)
        {
            if (arr[i] == arr[j])
            {
                isDuplicate = 1;
            }
        }

        if (isDuplicate == 0)
        {
            count = count + 1;
        }
    }

    return count;
}

int main()
{
    int numbers[6] = {10, 20, 10, 30, 20, 40};
    int result;

    result = countUnique(numbers, 6);

    printf("Number of unique values: %d\n", result);

    return 0;
}