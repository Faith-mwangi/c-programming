// Working of assignment operators
#include <stdio.h>
int main()
{
    int a = 4, c;

    c = a;
    printf("c = %d\n", c);
    c += a;
    printf("c = %d\n", c);
    c -= a;
    printf("c = %d\n", c);
    c *= a;
    printf("c = %d\n", c);
    c /= a;
    printf("c = %d\n", c);
    c %= a;
    printf("c = %d\n", c);

    return 0;
}
