#include <stdio.h>
#include <stdlib.h>

#define END "\n"

int main(int argc, char const *argv[]){

    int i,j;
    //i = atoi(argv[1]);
    //j = atoi(argv[2]);

    scanf("%d %d", &i, &j);

    printf("i=%07d--"END "j=%-7d--"END,i,j);
    printf("i=%07x--"END "j=%-7d--"END,(unsigned char)i,j);
    //swap(&i,&j);
    // printf("i=%d, j=%d\n",i,j);

}
