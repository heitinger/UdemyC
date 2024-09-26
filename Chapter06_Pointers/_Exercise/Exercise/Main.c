#include <stdio.h>

int binom1 (int a, int b) //Call by Value
{
    int c = (a+b) * (a+b);
    return c;
}

void binom2 (int a, int b, int* c) // Call by Reference
{
    *c = (a+b) * (a+b);
}

int main()
{
    int a = 4;
    int b = 3;
    int c = 0;

    printf("a=%d, b=%d\n", a, b);

    printf("Call binom function 1!\n");
    c = binom1(a, b);
    printf("c=%d\n", c);

    printf("Call binom function 2!\n");
    binom2(a, b, &c);
    printf("c=%d\n", c);

    return 0;
}
