#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[20];
    char str2[20];
    char str3[40];

    int len = 0;

    printf("Enter a String (First) : ");
    fgets(str1, sizeof(str1), stdin);
    str1[strlen(str1) - 1] = 0;

    printf("Enter a String (Second) : ");
    fgets(str2, sizeof(str2), stdin);
    str2[strlen(str2) - 1] = 0;

    strcpy(str3, str1);
    strcat(str3, str2);

    len = strlen(str3);

    for (int i = 0; i < len; i++)
    {
        printf("%c", str3[i]);
    }

    printf("\n");

    return 0;
}