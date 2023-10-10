#include <stdio.h>

int arr_max(int *ptr, int len)
{
    int max = *ptr;

    for (int i = 0; i < len; i++)
    {
        if (max < *(ptr + i))
        {
            max = *(ptr + i);
        }
    }

    printf("MAX (In Function) : %d \n", max);

    return max;
};

int arr_min(int *ptr, int len)
{
    int min = *ptr;

    for (int i = 0; i < len; i++)
    {
        if (min > *(ptr + i))
        {
            min = *(ptr + i);
        }
    }

    printf("MIN (In Function) : %d \n", min);

    return min;
};

int main(void)
{
    int arr[5];
    int num1, num2, num3, num4, num5;
    int max = 0;
    int min = 0;
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter a Number : ");
        scanf("%d", &arr[i]);
    }

    max = arr_max(arr, 5);
    printf("Max : \n", max);

    min = arr_min(arr, 5);
    printf("Min : \n", min);

    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    printf("Sum : \n", sum);

    return 0;
}