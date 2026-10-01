#include<stdio.h>
int main()
{
    int num1, num2, choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Enter your choice: \n1, Addition\n2, Subtraction\n3, multiplication\n4, Division\n");
    scanf("%d", &choice);

    return 0;
}