#include <stdio.h>
#include <stdlib.h>

char* itoa(int i, char *a,int d);

int main(int argc, char const *argv[]){

    int i;
    i=1117;
    int d =2;

    char str[200]={0};

    itoa(i, str,d);
    printf("%d 进制 = %s\n",d,str);

    printf("8进制 i=%o\n",i);
    printf("10进制i=%d\n",i);
    printf("16进制i=%0X\n",i);

}

char* itoa(int i, char *a,int d){
    //printf("i=%d, a=%s, d=%d\n", i,a,d);
    int idx =100;
    int x ;
    while(1){
        if(i < d){
            if(x >=10){
                a[idx] = i -10 + 'A';
            }else
            {
                a[idx] = i + '0';
            }
            
            break;
            //printf("a[%d] = %c\n",idx, a[idx]);
        }
        
        x = i%d;
        i = i/d;
        
        if(x >=10){
            a[idx] = x -10 + 'A';
        }else
        {
            a[idx] = x + '0';
        }

        //printf("a[%d] = %c\n",idx, a[idx]);
        idx++;
 
    }

    //revert str
    int j;
    for( j=0;idx >99;idx--){
        a[j++] = a[idx];
        
    }
    for(;j<200;j++){
        a[j] =0;
    }
    return a;
}
