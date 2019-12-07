#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
    return a + b;
}

int p100(int a)
{
    return a + 100;
}

void p2(int a)
{
    printf("a in p2 = %d OK!\n", a);
}

void p3(int a)
{
    printf("a in p3 = %d hahaha!\n", a);
}

#define N 10

void (*pa[N])(int);
int idx = 0;

void registerp(void (*p)(int))
{
    pa[idx++] = p;
}

int checkp()
{
    return pa[0] != NULL;
}

void callbackp()
{
    for (int i = 0; i < N; i++)
    {
        if (pa[i])
        {
            pa[i](i);
        }
        else
        {
            printf("%d, %d\n", i, pa[i] == NULL);
        }
    }
}

int main(int argc, const char *argv[])
{
    int (*plus)(int, int);
    int (*pp)(int);

    plus = add;
    pp = p100;

    printf("%d\n", plus(3, 5));
    printf("%d\n", p100(3));

    // registerp(p3);
    registerp(p2);
    registerp(p3);

    if (checkp())
    {
        callbackp();
    }

    return 0;
}
