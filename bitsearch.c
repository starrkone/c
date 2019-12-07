#include <stdio.h>
#include <stdlib.h>

int bitsearch(int *arr, int len, int k)
{
    int left = 0;
    int right = len - 1;
    int mid = (left + right) / 2;
    int ret = -1;

    while (1)
    {
        if (arr[mid] == k)
        {
            ret = mid;
            break;
        }

        if (arr[mid] > k)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }

        if (right < left)
        {
            break;
        }

        mid = (left + right) / 2;
    }

    return ret;
}

int main(int argc, char *argv[])
{

    int a[] = {1, 3, 4, 6, 9, 10, 13, 15, 16, 19, 22, 24, 30};
    //printf("%lu\n", sizeof(a) / sizeof(a[0]));
    printf("%d\n", bitsearch(a, sizeof(a) / sizeof(a[0]), 1));
    printf("%d\n", bitsearch(a, sizeof(a) / sizeof(a[0]), 22));
    printf("%d\n", bitsearch(a, sizeof(a) / sizeof(a[0]), 15));
    printf("%d\n", bitsearch(a, sizeof(a) / sizeof(a[0]), 2));
    printf("%d\n", bitsearch(a, sizeof(a) / sizeof(a[0]), 16));

    return 0;
}