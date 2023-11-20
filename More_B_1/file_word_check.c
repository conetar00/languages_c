#include <stdio.h>
#include <string.h>

void word_check(char arr[]);

int file_write(FILE *f)
{
    int write_size = 0;
    char in[] = "aaabbbccc dddeeefff aabbcc ddeeff abc def ";

    write_size = fputs(in, f);
    if (write_size < 0)
    {
        printf("(ERROR) Fail to Write \n");
        return -1;
    }
};

int file_read(FILE *f)
{
    char *f_r;
    char out[50] = {0};

    while (1)
    {
        f_r = fgets(out, sizeof(out), f);
        if (f_r < 0)
        {
            printf("(ERROR) Fail to Read \n");
            return -1;
        }
        if (f_r == 0)
        {
            break;
        }

        // fputs(out, stdout);
    }

    word_check(out);
};

void word_check(char arr[])
{
    int space = 0;
    int counter_a = 0;
    int counter_d = 0;

    if (arr[0] == 'a')
    {
        counter_a++;
    }
    if (arr[0] == 'd')
    {
        counter_d++;
    }

    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] == ' ')
        {
            space = i;

            if (arr[space + 1] == 'a')
            {
                counter_a++;
            }
            if (arr[space + 1] == 'd')
            {
                counter_d++;
            }
        }
    }

    printf("Word (Start with a) : (%d) \n", counter_a);
    printf("Word (Start with d) : (%d) \n", counter_d);
};

int main(void)
{
    FILE *f;

    f = fopen("test.txt", "wt");
    if (f == NULL)
    {
        printf("(ERROR) Fail to Open \n");
        return -1;
    }
    file_write(f);
    fclose(f);

    f = fopen("test.txt", "rt");
    if (f == NULL)
    {
        printf("(ERROR) Fail to Open \n");
        return -1;
    }
    file_read(f);
    fclose(f);

    return 0;
}