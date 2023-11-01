#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int user;
    int r_seed;
    int computer;

    while (1)
    {
        printf("---- Rock : 1 ---- Paper : 2 ---- Scissors : 3 ---- \n");
        printf("User : ");
        scanf("%d", &user);

        if (user == 1 || user == 2 || user == 3)
        {
            break;
        }
        else
        {
            printf("(ERROR) \n");
        }
    }

    r_seed = (int)time(NULL);
    srand(r_seed);
    computer = rand() % 2 + 1;

    printf("Computer : %d \n", computer);

    switch (computer)
    {
    case 1:
        switch (user)
        {
        case 1:
            printf("(Result) DRAW \n");
            break;

        case 2:
            printf("(Result) WIN : Usesr\n");

            break;

        case 3:
            printf("(Result) WIN : Computer \n");

            break;
        }
        break;

    case 2:
        switch (user)
        {
        case 1:
            printf("(Result) WIN : Computer \n");

            break;

        case 2:
            printf("(Result) DRAW \n");

            break;

        case 3:
            printf("(Result) WIN : User \n");

            break;
        }
        break;

    case 3:
        switch (user)
        {
        case 1:
            printf("(Result) WIN : User \n");

            break;

        case 2:
            printf("(Result) WIN : Computer \n");

            break;

        case 3:
            printf("(Result) DRAW \n");

            break;
        }
        break;
    }

    return 0;
}