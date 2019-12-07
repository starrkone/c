#include <stdio.h>
#include <stdlib.h>

int MaxMalloc(){

    int cnt = 0;
    void *q;

    while ((q=malloc(100*1024*1024)))
    {
        cnt++;
    }
    
    printf("%d 100M mem is allocted", cnt);
    return 0;
}

int main(){
    
    //MaxMalloc()
    int number = 5;
    int* p;

    printf("Input size fo Array:");
    scanf("%d",&number);

    p = malloc(number* sizeof(int));
    
    for (int i = 0; i < number; i++)
    {
        scanf("%d", &p[i]);
    }
    for (int i = 0; i < number; i++)
    {
        printf("%d\t", p[i]);
    }
    p=p+1;
    free(p);
    
    return 0;
}