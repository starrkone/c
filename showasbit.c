#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[]){
    unsigned mask = 1u;
    mask = mask<<31;

    int n = 0xFFFFFFFF;

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