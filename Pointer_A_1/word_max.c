#include <stdio.h>

int main(void)
{
    char word[50];
    int len = 0;
    int max = 0;

    printf("Enter a Word : ");
    scanf("%s", word);

    while (word[len] != '\0')
    {
        len++;
    }

    printf("Length : %d \n", len);

    for (int i = 0; i < len; i++)
    {
        if (max < word[i])
        {
            max = word[i];
        }
    }

    printf("Max (ASCII) : %c \n", max);
    printf("Max (ASCII) : %d \n", max);

    return 0;
}