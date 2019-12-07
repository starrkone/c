#include <stdio.h>
#include <stdlib.h>

#define LINE "---------------%s-----------------\n"
#define PRTLINE(X) printf(LINE,(X))
#define BLOCK 20

typedef struct {
    int * arr;
    int size;
} Array;

Array createarr(int n){
    Array a;
    a.arr = malloc(n*sizeof(int));
    printf("size bf assign is %p\n", &a.size);
    printf("p by malloc is %p\n", a.arr);
    a.size = n;
    printf("size af assign is %p\n", &a.size);
    PRTLINE(__func__);
    return a;
}

 void freearr(Array * a){
    free(a->arr);
    a->size = 0;
    a->arr = NULL;
 }

int sizeofarr(Array * a){
    return a->size;
 }

void inflatearr(Array * arr, int moresize){
    int *p = malloc(sizeof(int)*(arr->size+moresize));

    for (int i = 0; i < arr->size; i++)
    {
        p[i] = arr->arr[i];
    }
    
    free(arr->arr);
    arr->arr = p;
    arr->size += moresize;
}

int* arrat(Array * a, int n){

    // if (n > a->size*0.85)
    // {
    //     inflatearr(a, a->size/2);
    // }

    if (n >= a->size)
    {
        inflatearr(a, ((a->size/BLOCK)+1)*BLOCK - a->size);
    }
    
    return &(a->arr[n]);
 }

int main(int argc, char const *argv[]){
    Array a;
    int n = 8;
    a = createarr(n);
    printf("p in main is %p\n", a.arr);
    printf("size in main is %p\n", &a.size);
    //freearr(&a);
    printf("p after free is %p\n", a.arr);
    PRTLINE(__func__);
    printf("size of arr is %d\n", sizeofarr(&a));
    // *arrat(&a,1) = 231;
    // printf("%d--%d\n",*arrat(&a,0),*arrat(&a,1));

    PRTLINE(__func__);
    int num = 0;
    int cnt = 0;
    while (1)
    {
       scanf("%d", &num);
       if(num == 99){
           break;
       }
       *arrat(&a,cnt++) = num;
    }
    
    printf("size of arr is %d\n", sizeofarr(&a));

    for (int i = 0; i < a.size; i++)
    {
        printf("%d\t", a.arr[i]);
        
    }

    printf("\n");

    freearr(&a);
    return 0;
}