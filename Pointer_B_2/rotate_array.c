#include <stdio.h>

void rotate_arr(int arr[][4])
{
    int(*arr_ptr)[4] = arr;
    int temp[4][4] = {0};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            temp[i][j] = arr[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            *(*(arr_ptr + i) + j) = temp[3 - j][i];
        }
    }
};

int main(void)
{
    int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

    printf("<< BEFORE >> \n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }

    rotate_arr(arr);

    printf("<< AFTER X 1 >> \n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }

    rotate_arr(arr);

    printf("<< AFTER X 2 >> \n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }

    rotate_arr(arr);

    printf("<< AFTER X 3 >> \n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }

    rotate_arr(arr);

    printf("<< AFTER X 4 >> \n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }

    return 0;
}