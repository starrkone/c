#include <stdio.h>

int main(int argc, char *argv[]){

    FILE *fp = fopen("22.in", "r");

    if(fp){
        // char str[10];
        int i,j;
        fscanf(fp,"%d %d",&i ,&j);
        printf("%d %d\n", i,j);
    }else{
        printf("can not open 22.in\n");
    }

    return 0;
}