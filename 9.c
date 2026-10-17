#include<stdio.h>
int main()
{
    int num;
    printf("Enter positive number: ");
    scanf("%d", &num);
    if (num > 0) {
        printf("positive\n");
    } else
    {
        if (num < 0)
        printf("Negative\n");
    }

    return 0;
}
