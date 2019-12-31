#include <stdio.h>

int main(void){
    #ifdef DBG
    printf("%s\n", "with Debug");
    #endif
    printf("%s\n", "Normal output");
    
    return 0;
}

