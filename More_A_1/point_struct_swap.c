#include <stdio.h>

typedef struct point
{
    int xpos;
    int ypos;
} Point;

void swap(Point *ptr1, Point *ptr2)
{
    int xtemp;
    int ytemp;

    xtemp = ptr1->xpos;
    ytemp = ptr1->ypos;

    ptr1->xpos = ptr2->xpos;
    ptr1->ypos = ptr2->ypos;
    ptr2->xpos = xtemp;
    ptr2->ypos = ytemp;
};

int main(void)
{
    Point pos1 = {2, 4};
    Point pos2 = {3, 6};

    printf("(BEFORE) \n");
    printf("POS1 : (%d, %d) \n", pos1.xpos, pos1.ypos);
    printf("POS2 : (%d, %d) \n", pos2.xpos, pos2.ypos);

    swap(&pos1, &pos2);

    printf("(AFTER) \n");
    printf("POS1 : (%d, %d) \n", pos1.xpos, pos1.ypos);
    printf("POS2 : (%d, %d) \n", pos2.xpos, pos2.ypos);

    return 0;
}