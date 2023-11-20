#include <stdio.h>

typedef struct book
{
    char title[40];
    char author[20];
    int pages;
} Book;

void clean_in(void)
{
    while (getchar() != '\n')
    {
    };
};

void create_info(Book arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        clean_in();
        printf("(Create) Book Information : (%d) \n", i);

        printf("Title : ");
        fgets(arr[i].title, sizeof(arr[i].title), stdin);
        clean_in();

        printf("Author : ");
        fgets(arr[i].author, sizeof(arr[i].author), stdin);
        clean_in();

        printf("Pages : ");
        scanf("%d", &arr[i].pages);
    }
};

void show_info(Book arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("(Show) Book Information : (%d) \n", i);

        printf("Title : %s \n", arr[i].title);

        printf("Author : %s \n", arr[i].author);

        printf("Pages : %d \n", arr[i].pages);
    }
};

int main(void)
{
    int n = 0;
    Book library[40];

    printf("Create Book Information : ");
    scanf("%d", &n);

    create_info(library, n);

    show_info(library, n);

    return 0;
}