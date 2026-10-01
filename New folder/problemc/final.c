#include <stdio.h>

int countVowels(char *str)
{
    int count = 0;
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count = count + 1;
        }
        i = i + 1;
    }

    return count;
}

int main()
{
    char word[] = "programming";
    int result;

    result = countVowels(word);

    printf("Number of vowels: %d\n", result);

    return 0;
}