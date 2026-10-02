#include<stdio.h>
int main()
{
    int age;
    float height;
    char grade;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter yopur height: ");
    scanf("%d", &height);

    printf("\nYou entered:\n");
    printf("Age: %d, Height: %.2f, Grade: %c\n", age, height, grade);
    return 0;
}