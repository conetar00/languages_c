#include <stdio.h>
#include <string.h>

void cmp_name(char *s1, char *s2, int l1, int l2)
{
    int len1 = 0;
    int len2 = 0;

    int result = 0;

    while (*(s1 + len1) != ' ')
    {
        len1++;
    }
    while (*(s2 + len2) != ' ')
    {
        len2++;
    }

    printf("LEN1 : (%d) / LEN2 : (%d) \n", len1, len2);

    if (len1 != len2)
    {
        printf("Name Compare : False \n");
    }
    else
    {
        result = strncmp(s1, s2, len1);

        if (result == 0)
        {
            printf("Name Compare : True \n");
        }
        else
        {
            printf("Name Compare : False \n");
        }
    }
};

void cmp_age(char *s1, char *s2, int l1, int l2)
{
    int len1 = 0;
    int len2 = 0;

    int result = 0;

    while (*(s1 + l1 - len1) != ' ')
    {
        // printf("TEST : %c \n", *(s1 + l1 - len1));
        len1++;
    }
    while (*(s2 + l2 - len2) != ' ')
    {
        // printf("TEST : %c \n", *(s2 + l2 - len2));
        len2++;
    }

    printf("LEN1 : (%d) / LEN2 : (%d) \n", len1, len2);

    if (len1 != len2)
    {
        printf("Age Compare : False \n");
    }
    else
    {
        for (int i = 0; i < len1; i++)
        {
            if (*(s1 + l1 - len1 + i) != *(s2 + l2 - len2 + i))
            {
                result++;
            }
        }

        if (result == 0)
        {
            printf("Age Compare : True \n");
        }
        else
        {
            printf("Age Compare : False \n");
        }
    }
};

int main(void)
{
    char str1[20];
    char str2[20];
    int len1 = 0;
    int len2 = 0;

    printf("Enter a String (First) \n");
    fgets(str1, sizeof(str1), stdin);
    len1 = strlen(str1);

    printf("(First String) \n");
    for (int i = 0; i < len1; i++)
    {
        printf("%c", str1[i]);
    }
    printf("\n");

    printf("Enter a String (Second) \n");
    fgets(str2, sizeof(str2), stdin);
    len2 = strlen(str2);

    printf("(Second String) \n");
    for (int i = 0; i < len2; i++)
    {
        printf("%c", str2[i]);
    }
    printf("\n");

    cmp_name(str1, str2, len1, len2);
    cmp_age(str1, str2, len1, len2);

    return 0;
}