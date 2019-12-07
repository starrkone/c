#include <stdio.h>

enum color{red,blue,gray, sizeofall};

int main(int argc, const char* argv[]){
    enum color a = blue;

    printf("%d\n", a);
    
    return 0;
}