#include <stdio.h>

int main(void)
{
    char str[] = "Good Time";
    int len = 0;

    len = sizeof(str) / sizeof(char);
    printf("SIZE : %d \n", len);

    printf("1st. ");
    printf("%s \n", str);

    printf("2nd. ");
    for (int i = 0; i < len; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}