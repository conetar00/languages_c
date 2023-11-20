#include <stdio.h>
#include <string.h>

typedef struct phone
{
    char name[10];
    char number[20];
} Phone;

void book_insert(Phone arr[], int size);
void book_delete(Phone arr[], int size);
void book_search(Phone arr[], int size);
void book_all(Phone arr[], int size);

void menu(Phone arr[], int size)
{
    int menu_in = 0;

    while (1)
    {
        printf("---- MENU ---- \n");

        printf("0. [ EXIT ] \n");

        printf("1. Insert \n");
        printf("2. Delete \n");
        printf("3. Search \n");
        printf("4. All \n");

        printf("(MENU) Input : ");
        scanf("%d", &menu_in);

        switch (menu_in)
        {
        case 0:
            printf("---- EXIT ---- \n");
            return;

        case 1:
            printf("[ INSERT ] \n");
            book_insert(arr, size);
            break;
        case 2:
            printf("[ DELETE ] \n");
            book_delete(arr, size);
            break;
        case 3:
            printf("[ SEARCH ] \n");
            book_search(arr, size);
            break;
        case 4:
            printf("[ ALL ] \n");
            book_all(arr, size);
            break;
        }
    }
};

void book_insert(Phone arr[], int size)
{
    int n = 0;

    char in_name[10];
    char in_number[20];

    printf("(Insert) Index : ");
    scanf("%d", &n);

    printf("(Insert) Name : ");
    scanf("%s", &in_name);
    strcpy((arr + n)->name, in_name);

    printf("(Insert) Number : ");
    scanf("%s", &in_number);
    strcpy((arr + n)->number, in_number);
};

void book_delete(Phone arr[], int size)
{
    int n = 0;

    printf("(Delete) Index : ");
    scanf("%d", &n);

    strcpy((arr + n)->name, "");
    strcpy((arr + n)->number, "");
};

void book_search(Phone arr[], int size)
{
    char s_op;

    char in_name[10];
    char in_number[20];

    while (1)
    {
        printf("(Search) Option : (a) Name / (b) Number ");
        scanf("%c", &s_op);

        if (s_op == 'a' || s_op == 'b')
        {
            break;
        }
    }

    switch (s_op)
    {
    case 'a':
        int counter1 = -1;

        printf("Name : ");
        scanf("%s", &in_name);

        for (int i = 0; i < size; i++)
        {
            counter1 = strcmp(in_name, arr[i].name);
            if (counter1 == 0)
            {
                printf("(Search - Name) Name : %s / Number : %s \n", arr[i].name, arr[i].number);

                return;
            }
        }

        if (counter1 != 0)
        {
            printf("[ ERROR ] (Search - Name) Nothing \n");
        }

        break;

    case 'b':
        int counter2 = -1;

        printf("Number : ");
        scanf("%s", &in_number);

        for (int i = 0; i < size; i++)
        {
            counter2 = strcmp(in_number, arr[i].number);
            if (counter2 == 0)
            {
                printf("(Search - Number) Name : %s / Number : %s \n", arr[i].name, arr[i].number);

                return;
            }
        }

        if (counter2 != 0)
        {
            printf("[ ERROR ] (Search - Number) Nothing \n");
        }

        break;
    }
};

void book_all(Phone arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("(All - %d) Name : %s / Number : %s \n", i, arr[i].name, arr[i].number);
    }
};

int main(void)
{
    Phone book[10];
    int book_size = 10;

    for (int i = 0; i < book_size; i++)
    {
        strcpy(book[i].name, "");
        strcpy(book[i].number, "");
    }

    menu(book, book_size);

    return 0;
}