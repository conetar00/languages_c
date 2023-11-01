#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int max;
    int r_seed;
    int r_num;

    printf("MAX : ");
    scanf("%d", &max);

    r_seed = (int)time(NULL);
    srand(r_seed);

    for (int i = 0; i < 10; i++)
    {
        r_num = rand() % max;

        printf("Random Number (Index : %d) : %d \n", i, r_num);
    }

    return 0;
}