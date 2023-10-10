#include <stdio.h>

int main(void)
{
    int arr[6] = {1, 2, 3, 4, 5, 6};

    int len = sizeof(arr) / sizeof(int);

    int *ptr_h = arr;
    int *ptr_t = arr + (len - 1);

    int temp;

    for (int i = 0; i < len; i++)
    {
        printf("(Before) ARRAY : %d \n", arr[i]);
    }

    for (int i = 0; i < (len / 2); i++)
    {
        temp = *(ptr_h + i);
        *(ptr_h + i) = *(ptr_t - i);
        *(ptr_t - i) = temp;
    }

    for (int i = 0; i < len; i++)
    {
        printf("(After) ARRAY : %d \n", arr[i]);
    }

    return 0;
}