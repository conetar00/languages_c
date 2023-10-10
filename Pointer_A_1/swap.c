#include <stdio.h>

void swap(int *ptr1, int *ptr2, int *ptr3)
{
    int temp;

    temp = *ptr1;
    *ptr1 = *ptr3;
    *ptr3 = *ptr2;
    *ptr2 = temp;
}

int main(void)
{
    int num1 = 10;
    int num2 = 20;
    int num3 = 30;

    printf("(Before) First : %d \n", num1);
    printf("(Before) Second : %d \n", num2);
    printf("(Before) Third : %d \n", num3);

    swap(&num1, &num2, &num3);

    printf("(After) First : %d \n", num1);
    printf("(After) Second : %d \n", num2);
    printf("(After) Third : %d \n", num3);

    return 0;
}