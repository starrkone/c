#include <stdio.h>


#define CNT 13

void showarr(int*, int);

int main(int argc, char const *argv[]){

    const int x = 10;
    int arr2[x] ={2,[4]=8,6,7};
    int arr3[x];
    int *p2;
    p2 = arr2;
    
    showarr(arr2,x);
    p2[7]=99;
    showarr(p2,x);
    showarr(arr2,x);

    int arr[CNT] = {0};

    printf("length of arr is %lu\n", sizeof(arr));
    printf("length of arr[0] is %lu\n", sizeof(arr[0]));

    // arr[3] = 10;
    // printf("arr[2] is %d\n", arr[2]);
    // printf("arr[1] is %d\n", arr[1]);
    int i = 9;
    int j= 18;
    int k = 20;

    int *p = &i;
    p[0] = 13;
    p[1] =22;
    p[2] = 33;
    p[3] = 29;
    p[4] = 98;

    printf("%d,%d,%d\n", p[0],p[1],p[12]);
    printf("%d,%d,%d\n", i,j,k);
    printf("length of p is %lu\n", sizeof(p));



    return 0;
}

void showarr(int arr[], int cnt){
   for (int i = 0; i < cnt; i++)
    {       
        /* code */
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
