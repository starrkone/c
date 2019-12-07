#include <stdio.h>


void swap(int *i, int *j);

int main(int argc, char const *argv[]){

    int i,j;
    i = 15;
    j =6;
    printf("i=%d, j=%d\n",i,j);
    swap(&i,&j);
    printf("i=%d, j=%d\n",i,j);

}

void swap(int *i, int *j){
    printf("*i=%p, *j=%p\n", i,j);
    int tmp = *i;
    *i = *j;
    *j = tmp;
}
