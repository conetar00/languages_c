#include <stdio.h>

void odd(int arr[], int len)
{
    int odds[10];
    int count_o = 0;

    for (int i = 0; i < len; i++)
    {
        if (arr[i] % 2 == 1)
        {
            odds[count_o] = arr[i];

            count_o++;
        }
        else
        {
            odds[i] = -1;
        }
    }

    printf("(ODD) Number of Array : ");

    for (int i = 0; i < len; i++)
    {
        if (odds[i] != -1)
        {
            printf("%d, ", odds[i]);
        }
        else
        {
            break;
        }
    }

    printf("\n");
};

void even(int arr[], int len)
{
    int evens[10];
    int count_e = 0;

    for (int i = 0; i < len; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evens[count_e] = arr[i];

            count_e++;
        }
        else
        {
            evens[i] = -1;
        }
    }

    printf("(EVEN) Number of Array : ");

    for (int i = 0; i < len; i++)
    {
        if (evens[i] != -1)
        {
            printf("%d, ", evens[i]);
        }
        else
        {
            break;
        }
    }

    printf("\n");
};

int main(void)
{
    int nums[10];
    int len = 10;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter a Number of (%d) : ", i);
        scanf("%d", &nums[i]);
    }

    odd(nums, len);
    even(nums, len);

    return 0;
}