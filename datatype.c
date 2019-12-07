#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]){

    typedef int * I;

    int i,j;
    i = 105;
    j =6;
    char *str="ABC";
    char stra[] = {'h','i','0'};

    I ii = &i;

    printf("%d\n", *ii);
    *ii +=1;
    printf("%d\n", *ii);

    printf("sizeof i=%lu\n",sizeof(i));
    printf("sizeof int=%lu\n",sizeof(int));
    printf("sizeof long=%lu\n",sizeof(long));
    printf("sizeof double=%lu\n",sizeof(double));
    printf("p of str=%p\n",str);
    printf("sizeof str=%lu\n",sizeof(str));
    printf("strlen str=%lu\n",strlen(str));
    printf("idx 4 in str=%c\n",str[9]);
    printf("idx 4 in str=%c\n",str[10]);
    printf("idx 4 in str=%c\n",str[11]);
    printf("idx 4 in str=%c\n",str[12]);
    printf("idx 4 in str=%c\n",str[13]);
    printf("sizeof stra=%lu\n",sizeof(stra));
    printf("sizeof *str=%lu\n",sizeof(*str));
    
    printf("sizeof *str=%f\n",2.0/0);
    printf("sizeof *str=%f\n",-2.0/0);
    printf("sizeof *str=%f\n",0.0/0);
    
    double a = 1.345;
    double b = 1.123;

    //if (a+b == 2.468)
    if(13==13.000000)
    {
        printf("==!\n");
    }else
    {
        printf("a+b=%.10f\n", a+b);
    }
    
    

    return -110;
}


