#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void game(int computer[], int user[])
{
    int counter = 0;

    while (1)
    {
        int strike = 0;
        int ball = 0;

        for (int i = 0; i < 3; i++)
        {
            printf("User (Index : %d) : ", i);
            scanf("%d", &user[i]);
        }

        counter++;

        for (int i = 0; i < 3; i++)
        {
            printf("(TRY : %d) User (Index : %d) : %d \n", counter, i, user[i]);
        }

        for (int i = 0; i < 3; i++)
        {
            if (computer[i] == user[i])
            {
                strike++;
            }

            for (int j = 0; j < 3; j++)
            {
                if (computer[i] != user[i])
                {
                    if (computer[i] == user[j])
                    {
                        ball++;
                    }
                }
            }
        }

        printf("(Result) %d (Strike) / %d (Ball) \n", strike, ball);

        if (strike == 3)
        {
            printf("---- WIN ---- \n");

            break;
        }
    }
}

int main(void)
{
    int r_seed;
    int computer[3];
    int user[3] = {0};

    r_seed = (int)time(NULL);
    srand(r_seed);

    for (int i = 0; i < 3; i++)
    {
        computer[i] = rand() % 10;
    }

    // for (int i = 0; i < 3; i++)
    // {
    //     printf("Computer (Index : %d) : %d \n", i, computer[i]);
    // }

    game(computer, user);

    return 0;
}