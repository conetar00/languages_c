#include <stdio.h>

int main(void)
{
    int table[5][5] = {
        // table[4][] : Total Score of Course
        {50, 40, 60, 50, 0},
        {30, 60, 90, 30, 0},
        {40, 80, 20, 70, 0},
        {30, 80, 90, 70, 0},
        {0}
        // table[][4] : Total Score of Student
    };

    for (int i = 0; i < 5; i++)
    {
        int sum1 = 0;
        int sum2 = 0;

        for (int j = 0; j < 5; j++)
        {
            sum1 += table[i][j];
        }

        table[i][4] = sum1;

        for (int j = 0; j < 5; j++)
        {
            sum2 += table[j][i];
        }

        table[4][i] = sum2;
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", table[i][j]);
        }

        printf("\n");
    }

    return 0;
}