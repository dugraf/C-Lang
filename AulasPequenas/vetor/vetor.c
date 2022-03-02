#include <stdio.h>

int
main()

{
    float x, y;
    int *p;

    p = &x;
    y = *p;

    printf("%d", x);

}