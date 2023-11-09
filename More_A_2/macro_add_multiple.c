#include <stdio.h>
#define ADD(a, b, c) ((a) + (b) + (c))
#define MUL(a, b, c) ((a) * (b)*c)

int main(void)
{
    int a, b, c;

    printf("a : ");
    scanf("%d", &a);
    printf("b : ");
    scanf("%d", &b);
    printf("c : ");
    scanf("%d", &c);

    printf("---- RESULT ---- \n");
    printf("(Add) : %d + %d + %d = %d \n", a, b, c, ADD(a, b, c));
    printf("(Multiple) : %d * %d * %d = %d \n", a, b, c, MUL(a, b, c));

    return 0;
}