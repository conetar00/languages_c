#include <stdio.h>

int main(void)
{
    char job[20];
    char money[20];

    int result = 0;
    int where = 0;

    printf("---- (Edit) \"information.txt\" ---- \n");

    FILE *fd = fopen("information.txt", "wt");
    if (fd == NULL)
    {
        printf("(ERROR) Fail to Open \n");

        return -1;
    }

    printf("(Edit) Start Point : ");
    scanf("%d", &where);
    fflush(stdin);

    result = fseek(fd, where, SEEK_SET);
    if (result != 0)
    {
        printf("(ERROR) Fail to Edit \n");

        return -1;
    }

    printf("Job : ");
    fgets(job, sizeof(job), stdin);
    fflush(stdin);
    fputs("(JOB) \n", fd);
    fputs(job, fd);
    fputc('\n', fd);

    printf("Money : ");
    fgets(money, sizeof(money), stdin);
    fflush(stdin);
    fputs("(MONEY) \n", fd);
    fputs(money, fd);
    fputc('\n', fd);

    return 0;
}