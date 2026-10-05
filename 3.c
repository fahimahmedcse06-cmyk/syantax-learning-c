#include <stdio.h>

int main()
{
    int marks[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter marks %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("\nYou entered:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Marks %d: %d\n", i + 1, marks[i]);
    }

    return 0;
}