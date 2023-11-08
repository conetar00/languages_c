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
    struct employee p1;

    printf("Employee's Name : ");
    fgets(p1.name, sizeof(p1.name), stdin);
    fflush(stdin);

    printf("Employee's ID : ");
    fgets(p1.id, sizeof(p1.id), stdin);
    fflush(stdin);

    printf("Employee's Money : ");
    scanf("%d", &p1.money);

    printf("-------- Employee Information -------- \n");
    printf("(P1) Name : %s \n", p1.name);
    printf("(P1) ID : %s \n", p1.id);
    printf("(P1) Money : %d \n", p1.money);

    return 0;
}