#include <stdio.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
    int a, b;

    printf("a : ");
    scanf("%d", &a);
    printf("b : ");
    scanf("%d", &b);

    printf("---- RESULT ---- \n");
    printf("Max : %d (a : %d / b : %d) \n", MAX(a, b), a, b);

    return 0;
}