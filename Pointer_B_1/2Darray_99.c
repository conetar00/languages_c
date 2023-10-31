#include <stdio.h>

int main(void)
{
    int arr99[10][10] = {0};

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr99[i][j] = i * j;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", arr99[i][j]);
        }

        printf("\n");
    }

    return 0;
}