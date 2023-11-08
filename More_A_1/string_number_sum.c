#include <stdio.h>
#include <string.h>

int number_sum(char *ptr, int len)
{
    int sum = 0;

    for (int i = 0; i < len; i++)
    {
        if ('0' <= *(ptr + i) && *(ptr + i) <= '9')
        {
            printf("TARGET : %c (%d) \n", *(ptr + i), *(ptr + i));

            sum += (*(ptr + i) - 48);
        }
    }

    return sum;
}

int main(void)
{
    int result = 0;

    char target[100];
    int len = 0;

    printf("Enter a String (0 ~ 99) \n");

    fgets(target, sizeof(target), stdin);
    len = strlen(target);

    for (int i = 0; i < len; i++)
    {
        printf("%c", target[i]);
    }

    result = number_sum(target, len);

    printf("(SUM) %d \n", result);

    return 0;
}