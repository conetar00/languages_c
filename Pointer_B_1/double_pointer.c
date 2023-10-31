#include <stdio.h>

void MaxAndMin(int *arr, int size, int **max_ptr, int **min_ptr)
{
    int *max = &arr[0];
    int *min = &arr[0];

    printf("(before) max : %d \n", *max);
    printf("(before) min : %d \n", *min);

    for (int i = 0; i < size; i++)
    {
        if (*max < arr[i])
        {
            max = &arr[i];
        }
        if (*min > arr[i])
        {
            min = &arr[i];
        }
    }

    printf("(after) max : %d \n", *max);
    printf("(after) min : %d \n", *min);

    *max_ptr = max;
    *min_ptr = min;
};

int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *maxPtr;
    int *minPtr;

    MaxAndMin(arr, sizeof(arr) / sizeof(int), &maxPtr, &minPtr);

    printf("MAX : (Address) %d / (Value) %d \n", maxPtr, *maxPtr);
    printf("MIN : (Address) %d / (Value) %d \n", minPtr, *minPtr);

    return 0;
}