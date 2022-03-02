#include <stdio.h>

int
main()

{

    int c = 2;
    int d = 6;

    if ((c < 3) && (d > 2) && (d > c))
    {
        int b = c - d;
        printf("%d", b);
    }
    
    else
    {
        int a = (c + d) / 2;

        printf("%d", a);
    }

}