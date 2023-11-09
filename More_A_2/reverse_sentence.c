#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char sentence[40];
    int len = 0;

    char *r;

    printf("(INPUT) Sentence : ");
    fgets(sentence, sizeof(sentence), stdin);
    fflush(stdin);
    len = strlen(sentence);

    // printf("%s", sentence);
    // printf("%d", len);

    r = calloc((len - 1), sizeof(char));
    for (int i = 0; i < (len - 1); i++)
    {
        *(r + i) = sentence[(len - 1) - 1 - i];
    }

    printf("(OUTPUT) R-Sentence : ");
    for (int i = 0; i < (len - 1); i++)
    {
        printf("%c", *(r + i));
    }

    return 0;
}