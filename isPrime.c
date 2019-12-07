#include <stdio.h>
#include <time.h>
#include <math.h>

int isprime(int a){
    if (a == 2) return 1;
    if (a%2 ==0) return 0;
    
    double x = sqrt(a);

    for (int i = 2; i <= x; i+=1)
    {
        if (a%i == 0)
        {
            return 0;
        }
        
    }
    return 1;
}

int main(int argvc, const char *argvs[]){
    clock_t start = clock();

    for (int i = 2; i < 1000000; i++)
    {
        if(isprime(i)){
            printf("%d\t", i);
        }
        
    }
    
    clock_t finish = clock();

    double totaltime = (double)(finish - start) / CLOCKS_PER_SEC;
    printf("\n 用时%f秒\n", totaltime);
    return 0;
}