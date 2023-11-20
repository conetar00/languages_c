#include <stdio.h>
#include <string.h>

void word_compare(char arr1[], char arr2[]);

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

int file_read(FILE *f1, FILE *f2)
{
    char *f_r1;
    char *f_r2;
    char out1[50] = {0};
    char out2[50] = {0};

    while (1)
    {
        f_r1 = fgets(out1, sizeof(out1), f1);
        if (f_r1 < 0)
        {
            printf("(ERROR) Fail to Read \n");
            return -1;
        }
        if (f_r1 == 0)
        {
            break;
        }
    }

    while (1)
    {
        f_r2 = fgets(out2, sizeof(out2), f1);
        if (f_r2 < 0)
        {
            printf("(ERROR) Fail to Read \n");
            return -1;
        }
        if (f_r2 == 0)
        {
            break;
        }
    }

    word_compare(out1, out2);
};

void word_compare(char arr1[], char arr2[])
{
    int counter1 = 0;
    int counter2 = 0;

    for (int i = 0; i < strlen(arr1); i++)
    {
        if (arr1[i] != arr2[i])
        {
            counter1++;
        }
    }

    for (int i = 0; i < strlen(arr2); i++)
    {
        if (arr1[i] != arr2[i])
        {
            counter2++;
        }
    }

    if (counter1 == 0 && counter2 == 0)
    {
        printf("Compare Result : True \n");
    }
    else
    {
        printf("Compare Result : False \n");
    }
};

int main(void)
{
    FILE *f1;
    FILE *f2;

    f1 = fopen("t1.txt", "w+");
    if (f1 == NULL)
    {
        printf("(ERROR) Fail to Open \n");
        return -1;
    }
    file_write(f1);

    f2 = fopen("t2.txt", "w+");
    if (f2 == NULL)
    {
        printf("(ERROR) Fail to Open \n");
        return -1;
    }
    file_write(f2);

    file_read(f1, f2);

    fclose(f1);
    fclose(f2);

    return 0;
}