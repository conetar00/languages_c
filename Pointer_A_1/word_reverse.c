#include <stdio.h>

int main(void)
{
    char word[50];
    int len = 0;
    char r_word[50];

    printf("Enter a Word : ");
    scanf("%s", word);

    while (word[len] != '\0')
    {
        len++;
    }

    printf("Length : %d \n", len);

    for (int i = 0; i < len; i++)
    {
        r_word[(len - 1) - i] = word[i];
    }
    r_word[len] = '\0';

    printf("(Entered) Word : %s \n", word);
    printf("(Reversed) Word : %s \n", r_word);

    return 0;
}