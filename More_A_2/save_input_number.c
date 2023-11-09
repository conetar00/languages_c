#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int key = 0;
    int count = 0;

    int *space = calloc(4, sizeof(int));

    while (1)
    {
        printf("Key (Number) : ");
        scanf("%d", &key);
        if (key == -1)
        {
            break;
        }

        if (count > 4)
        {
            space = realloc(space, sizeof(int) * count);
        }

        *(space + count) = key;

        count++;
    }

    printf("---- RESULT ---- \n");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", *(space + i));
    }

    return 0;
}