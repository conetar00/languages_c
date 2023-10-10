#include <stdio.h>

int main(void)
{
    char word[50];
    int len = 0;

    printf("Enter a Word : ");
    scanf("%s", word);

    while (word[len] != '\0')
    {
        len++;
    }

    printf("Length : %d \n", len);

    return 0;
}