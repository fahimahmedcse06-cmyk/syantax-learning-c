#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number to check. \n");
    scanf("%d", &num);

    if(num<0)
    {
        printf("Number = %d\n", num);
    }

    printf("The if statement in c programming is easy.");
    return 0;
}
