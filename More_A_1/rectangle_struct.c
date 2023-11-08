#include <stdio.h>

typedef struct
{
    int xpos;
    int ypos;
} Point;

typedef struct
{
    Point lt;
    Point rb;
} Rectangle;

void showRecPoint(Rectangle a)
{
    printf("Left-Top : (%d, %d) \n", a.lt.xpos, a.lt.ypos);
    printf("Right-Top : (%d, %d) \n", a.rb.xpos, a.lt.ypos);
    printf("Left-Bottom : (%d, %d) \n", a.lt.xpos, a.rb.ypos);
    printf("Right-Bottom : (%d, %d) \n", a.rb.xpos, a.rb.ypos);
};

void showRecArea(Rectangle a)
{
    int area = 0;

    area = (a.rb.xpos - a.lt.xpos) * (a.rb.ypos - a.lt.ypos);

    printf("(AREA) : %d \n", area);
};

int main(void)
{
    Rectangle rec1 = {{1, 1}, {11, 22}};
    Rectangle rec2 = {{3, 3}, {33, 4444}};

    showRecPoint(rec1);
    showRecArea(rec1);

    showRecPoint(rec2);
    showRecArea(rec2);

    return 0;
}