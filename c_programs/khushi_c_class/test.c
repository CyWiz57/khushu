#include <stdio.h>
int main(void)
{
    int n1, n2, n3, n4;
    double d1, d2, d3, d4;
    n1 = 15 / 2;
    n2 = 15.0 / 2.0;
    n3 = 15.0 / 2;
    n4 = 15 / 2.0;

    d1 = 15 / 2;

    d2 = 15.0 / 2.0;
    d3 = 15.0 / 2;
    d4 = 15 / 2.0;

    printf("n1=%d\n", n1);
    printf("n2=%d\n", n1);
    printf("n3=%d\n", n1);
    printf("n4=%d\n", n1);

    printf("%lu", sizeof(n1)); // Check the type of variable.\\

    return 0;
}