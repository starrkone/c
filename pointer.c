#include <stdio.h>
#include <stdlib.h>

void swap(int *i, int *j);

int main(int argc, char const *argv[]){
    printf("argc=%d\n", argc);
    
    char *a[]={"bc","dd","xj"};

    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    printf("------------------------\n");

    if (argc<3)
    {
        perror("use this need two args.");
        return 1;
    }
    
    int i,j;
    i = strtol(argv[1],NULL,10);
    j = atoi(argv[2]);

    char** p=a;
    int* q =0;

    
    p[0] = "'2'";
    p = p+1;
    printf("%s\n",*p);
    //j = q[0];
    //printf("%d", j );
    
    //printf("p=%p\nq=%p\n", p, q);
    //swap(&i,&j);
    printf("i=%d, j=%d\n",i,j);

    return 0;
}

void swap(int *i, int *j){
    printf("*i=%p, *j=%p\n", i,j);
    int tmp = *i;
    *i = *j;
    *j = tmp;
}
