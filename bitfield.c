#include <stdio.h>
#include <stdlib.h>

void prtbin(int num);

struct U0{
    unsigned int leading :3;
    unsigned int FLAG1 :2;
    unsigned int FLAG2 :2;
    int trailing :25;
};

int main(int argc, char* argv[]){
    struct U0 u;
    u.leading = 5;
    u.FLAG1 = 2;
    u.FLAG2 = 2;
    printf("size of u is %d\n", (int)sizeof(u));
    prtbin(*(int*)&u);

    return 0;
}


void prtbin(int num){
    unsigned mask = 1u;
    mask = mask<<31;

    int n = num;

    for (int i = 0; i < 32; i++)
    {
        if (mask&n)
        {       
            /* code */
            printf("1");
        }else{
             printf("0");
        }
        mask=mask>>1;
    }
    printf("\n");
    
}