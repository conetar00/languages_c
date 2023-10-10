#include <stdio.h>

int square_v(int n)
{
    int result = n * n;

    return result;
};

void square_r(int *ptr)
{
    int temp = *(ptr);
    *(ptr) = temp * temp;
};

int main(void)
{
    int num1 = 10;
    int num2 = 10;
    int result1 = 0;
    int result2 = 0;

    result1 = square_v(num1);
    printf("Before Address : %p \n", num1);
    printf("(By Value) RESULT : %d \n", result1);
    printf("After Address : %p \n", result1);

    square_r(&num2);
    printf("Before Address : %p \n", num2);
    printf("(By Reference) RESULT : %d \n", num2);
    printf("After Address : %p \n", num2);

    return 0;
}