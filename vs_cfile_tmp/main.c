#include "stdio.h"
char buf[16];

typedef struct Point_{
    int x;
    int y;
} Point;

int main(int argc, char **argv)
{
    int a,b;
    Point point;

    a = 17;
    b = 5;
    b += a;
    strcpy(buf, "Test");
    strcat(buf, "123");
    point.x = 10;
    point.y = 25;
    printf("a = %d b = %d\n", a, b);

    return 0;
}