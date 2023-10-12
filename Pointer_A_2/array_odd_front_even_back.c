#include <stdio.h>

void arr_print(int arr[], int a, int b)
{
    printf("(ODD) Number of Array : ");

    for (int i = 0; i < a; i++)
    {
        printf("%d, ", arr[i]);
    }

    printf("\n");

    printf("(EVEN) Number of Array : ");

    for (int i = 0; i < b; i++)
    {
        printf("%d, ", arr[a + i]);
    }

    printf("\n");
};

int main(void)
{
    int arr[10];
    int n;
    int count_o = 0;
    int count_e = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter a Number of (%d) : ", i);
        scanf("%d", &n);

        if (n % 2 == 1)
        {
            arr[count_o] = n;
            count_o++;
        }
        else
        {
            arr[(10 - 1) - count_e] = n;
            count_e++;
        }
    }

    arr_print(arr, count_o, count_e);

    return 0;
}