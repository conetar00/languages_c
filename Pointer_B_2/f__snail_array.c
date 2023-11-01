// FAIL (To Be Continued)

#include <stdio.h>

void snail_array(int n)
{
    int arr[n][n];
    int counter = 1;

    for (int i = 0; i < (n + 1) / 2; i++)
    {
        // 1st : (0, 0) >> (1, 1) >> (2, 2)
        for (int j = i; j < (n - 1 - i); j++)
        {
            arr[i][j] = counter;
            counter++;
        }
        // printf("1st : End \n");

        // 2nd : (0, n) >> (1, n-1) >> (2, n-2)
        for (int j = i; j < (n - 1 - i); j++)
        {
            arr[j][n - 1 - i] = counter;
            counter++;
        }
        // printf("2nd : End \n");

        // 3rd : (n, n) >> (n-1, n-1) >> (n-2, n-2)
        for (int j = i; j < (n - 1 - i); j++)
        {
            arr[n - 1 - i][n - 1 - i - j] = counter;
            counter++;
        }
        // printf("3rd : End \n");

        // 4th : (n, 0) >> (n-1, 1) >> (n-2, 2)
        for (int j = i; j < (n - 1 - i); j++)
        {
            arr[n - 1 - i - j][i] = counter;
            counter++;
        }
        // printf("4th : End \n");
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }
};

int main(void)
{
    int arr_size = 0;

    printf("Size of Array (N X N) : ");
    scanf("%d", &arr_size);

    snail_array(arr_size);

    return 0;
}