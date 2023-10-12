#include <stdio.h>

void check(char *ptr, int len)
{
    int check_n = 0;

    for (int i = 0; i < (len / 2); i++)
    {
        if (*(ptr + i) != *(ptr + (len - 1) - i))
        {
            printf("It is not a Palindrome. \n");

            check_n++;

            break;
        }
        else
        {
            continue;
        }
    }

    if (check_n == 0)
    {
        printf("It is a Palindrome. \n");
    }
};

int main(void)
{
    char word[10];
    int len = 0;

    printf("Enter a Word : ");
    scanf("%s", word);

    for (int i = 0; i < 10; i++)
    {
        if (word[i] != '\0')
        {
            len++;
        }
        else
        {
            break;
        }
    }

    printf("Length of a Word : %d \n", len);

    check(word, len);

    return 0;
}