// FAIL (To Be Continued)
// Input : Decimal Number
// Output : Binary Number

#include <stdio.h>
#include <math.h>

int change_n(int n, int index, int len)
{
    int result = 0;

    int temp = 1;

    for (int j = 0; j <= index; j++)
    {
        if (j == 0)
        {
            continue;
        }
        else
        {
            temp *= 2;
        }
    }

    result = n % temp;

    // if (result > 0)
    // {
    //     return result;
    // }
    // else
    // {
    //     return -1;
    // }

    return result;
};

void print_n(int n, int *ptr)
{
    int len = 0;

    for (int i = 0; i < n; i++)
    {
        if (n < pow(2, i))
        {
            break;
        }
        else
        {
            len++;
        }
    }

    printf("Length of Array_(2) : %d \n", len);

    printf("Number of Array_(2) : ");

    for (int index = 0; index < len; index++)
    {
        *(ptr + ((len - 1) - index)) = change_n(n, index, len);

        if (index == 0)
        {
            printf("1 ");
        }

        else
        {
            if (*(ptr + ((len - 1) - index)) != -1)
            {
                printf("%d ", *(ptr + index));
            }
            else
            {
                break;
            }
        }
    }

    printf("\n");
};

int main(void)
{
    int n_10;
    int n_2[100];

    printf("Enter a Number_(10) : ");
    scanf("%d", &n_10);

    print_n(n_10, n_2);

    return 0;
}