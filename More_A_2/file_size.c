#include <stdio.h>

long file_size(FILE *fd)
{
    long temp = 0;
    long where = 0;
    int s_result = 0;

    where = ftell(fd);
    if (where < 0)
    {
        printf("(ERROR) First : ftell \n");

        return -1;
    }

    temp = where;
    printf("(BEFORE) %ld \n", where);

    s_result = fseek(fd, 0, SEEK_END);
    if (s_result != 0)
    {
        printf("(ERROR) Second : fseek (1/2) \n");

        return -1;
    }

    where = ftell(fd);
    printf("(NOW) %ld \n", where);

    s_result = fseek(fd, temp, SEEK_SET);
    if (s_result != 0)
    {
        printf("(ERROR) Third : fseek (2/2) \n");

        return -1;
    }

    temp = ftell(fd);
    printf("(AFTER) %ld \n", temp);

    return where;
};

int main(void)
{
    long size = 0;

    FILE *fd = fopen("information.txt", "rt");
    if (fd == NULL)
    {
        printf("(ERROR) Fail to Open \n");

        return -1;
    }

    size = file_size(fd);
    if (size == -1)
    {
        return -1;
    }

    printf("File Size : %ld \n", size);

    fclose(fd);

    return 0;
}