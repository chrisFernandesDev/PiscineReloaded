#include <stdio.h>
#include "ft_abs.h"

int main(void)
{
    int a;
    int b;
    int c;

    a = -5;
    b = 10;
    c = 0;
    printf("ABS(%d) = %d\n", a, ABS(a));
    printf("ABS(%d) = %d\n", b, ABS(b));
    printf("ABS(%d) = %d\n", c, ABS(c));
    return 0;
}
