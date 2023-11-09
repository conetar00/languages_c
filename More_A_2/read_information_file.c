#include <stdio.h>

int main(void)
{
    char buffer[10];
    char *result;

    printf("---- (Read) \"information.txt\" ---- \n");

    FILE *fd = fopen("information.txt", "rt");
    if (fd == NULL)
    {
        printf("(ERROR) Fail to Read \n");

        return -1;
    }

    while (1)
    {
        result = fgets(buffer, sizeof(buffer), fd);
        printf("(%d)%s", buffer);

        if (result == NULL)
        {
            break;
        }
    }

    printf("---- (Read) End ---- \n");

    return 0;
}