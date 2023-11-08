#include <stdio.h>

int change(int a)
{
    if ('A' <= a && a <= 'Z')
    {
        printf("(Target : Upper Case) Before : %c (%d) \n", a, a);

        printf("(Target : Upper Case) After : %c (%d) \n", a + 32, a + 32);

        return a + 32;
    }

    if ('a' <= a && a <= 'z')
    {
        printf("(Target : Lower Case) Before : %c (%d) \n", a, a);

        printf("(Target : Lower Case) After : %c (%d) \n", a - 32, a - 32);

        return a - 32;
    }
    else
    {
        return -1;
    }
}

int main(void)
{
    char a = getchar();

    a = change(a);

    if (a == -1)
    {
        printf("-- ERROR -- \n");
    }
    else
    {
        printf("RESULT : %c (%d) \n", a, a);
    }

    return 0;
}