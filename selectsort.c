#include <stdio.h>
#include <stdlib.h>

int findmax(int *a, int len)
{
    int max_idx = 0;
    for (int i = 0; i < len; i++)
    {
        if (a[max_idx] < a[i])
        {
            max_idx = i;
        }
    }

    return max_idx;
}

int main(int argc, char const *argv[])
{
    // int a[] = {101, 33, 204, 16, 19, 120, 103, 15, 2, 1, 35, 204, 10};
    int a[] = {1, 33, 204, 16, 1119, 120, 103, 15, 2, 1, 35, 204, 10, 1, 1, 1, 0};
    // int a[] = {};
    int len = sizeof(a) / sizeof(a[0]);
    int max;

    while (len > 0)
    {
        max = findmax(a, len);
        int t = a[len - 1];
        a[len - 1] = a[max];
        a[max] = t;
        len--;
    }

    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}