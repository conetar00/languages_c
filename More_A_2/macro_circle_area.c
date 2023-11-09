#include <stdio.h>
#define PI 3.141592
#define C_AREA(r) ((r) * (r) * (PI))

int main(void)
{
    int r;

    printf("r : ");
    scanf("%d", &r);

    printf("---- RESULT ---- \n");
    printf("C Area : %d^2 * %lf = %lf \n", r, PI, C_AREA(r));

    return 0;
}