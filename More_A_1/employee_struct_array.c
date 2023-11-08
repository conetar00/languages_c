#include <stdio.h>
#include <string.h>

struct employee
{
    char name[10];
    char id[20];
    int money;
};

int main(void)
{
    struct employee arr[10];

    int option = 0;
    int size = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Create Option (Break : 1) : ");
        scanf("%d", &option);
        fflush(stdin);

        if (option != 1)
        {
            printf("Employee's Name : ");
            fgets(arr[i].name, sizeof(arr[i].name), stdin);
            if (arr[i].name[9] != '\n')
            {
                arr[i].name[9] = '\n';
            }
            fflush(stdin);

            printf("Employee's ID : ");
            fgets(arr[i].id, sizeof(arr[i].id), stdin);
            if (arr[i].id[19] != '\n')
            {
                arr[i].id[19] = '\n';
            }
            fflush(stdin);

            printf("Employee's Money : ");
            scanf("%d", &arr[i].money);

            size++;
        }
        else
        {
            break;
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("-------- Employee Information -------- \n");
        printf("(P%d) Name : %s", i + 1, arr[i].name);
        printf("(P%d) ID : %s", i + 1, arr[i].id);
        printf("(P%d) Money : %d \n", i + 1, arr[i].money);
    }

    return 0;
}