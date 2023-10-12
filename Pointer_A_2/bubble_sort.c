#include <stdio.h>

void asc_sort(int *ptr, int len)
{
    int *temp;

    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < (len); j++)
        {
            if (*(ptr + i) > *(ptr + j))
            {
                *temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = *temp;
            }
        }
    }
};

void des_sort(int *ptr, int len)
{
    int *temp;

    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (*(ptr + i) < *(ptr + j))
            {
                *temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = *temp;
            }
        }
    }
};

void print_arr(int *ptr, int len)
{
    printf("---------- Start Print ---------- \n");

    for (int i = 0; i < len; i++)
    {
        printf("(Sorted) Number of Array : %d \n", *(ptr + i));
    }

    printf("---------- End Print ---------- \n");
};

int main(void)
{
    int arr[10];
    int len = sizeof(arr) / sizeof(int);

    for (int i = 0; i < 10; i++)
    {
        printf("Enter a Number (%d) : ", i);
        scanf("%d", &arr[i]);
    }

    asc_sort(arr, len);

    print_arr(arr, len);

    des_sort(arr, len);

    print_arr(arr, len);

    return 0;
}