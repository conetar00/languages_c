#include <stdio.h>

int main(void)
{
    char name[20];
    char id[20];
    char number[20];

    printf("---- (Create) \"information.txt\" ---- \n");

    FILE *fd = fopen("information.txt", "wt");
    if (fd == NULL)
    {
        printf("(ERROR) Fail to Create \n");

        return -1;
    }

    printf("Name : ");
    fgets(name, sizeof(name), stdin);
    fflush(stdin);
    fputs("(NAME) \n", fd);
    fputs(name, fd);
    fputc('\n', fd);

    printf("ID : ");
    fgets(id, sizeof(id), stdin);
    fflush(stdin);
    fputs("(ID) \n", fd);
    fputs(id, fd);
    fputc('\n', fd);

    printf("Number : ");
    fgets(number, sizeof(number), stdin);
    fflush(stdin);
    fputs("(NUMBER) \n", fd);
    fputs(number, fd);
    fputc('\n', fd);

    fclose(fd);

    return 0;
}