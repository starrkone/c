#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test1(){
    char * s1 = "abcde";
    //s1[1] = 'B';
    char s2[] = "XYzZ";
    char * s3 = "xasuyt";
    int i,j;
    s2[1] = 'B';
    printf("%lu\n", sizeof(s3));
    printf("%lu\n", sizeof(s2));
    printf("----------\n");
    printf("%p\n", &i);
    printf("%p\n", &j);
    printf("----------\n");
    printf("%p\n", s1);
    printf("%p\n", s2);
    printf("%p\n", s3);

    int x = 0;
    while (*s3)
    {
        printf("%c", *s3);
        s3++;
    }
    printf("\n----------\n");

    printf("%c\n", *s1);
}

void test2(){
     char a[8];
    char b[7] = "";
    char *c;
    scanf("%7s", a);
    printf("%s##%p\n",a,c);
    //scanf("%s", c);
    printf("##%s##\n", b);
    for (int i = 0; i < 7; i++)
    {
        printf("%d-",b[i]);
    }
    
    char aa[][8] ={
        "aaa","eaaadaa"
    };
}

int mylen(const char* a){
    int i = 0;
    while (a[i]!=0)
    {
        i++;
    }
    return i;
}

void myecho(){
    int ch;
   while ((ch=getchar())!=EOF)    
   {
       putchar(35);
       putchar(ch);
       putchar(36);
   }
   
    printf("EOF\n");
    
}

int mycmp(const char* a, const char *b){
    int idx = 0;
    while (a[idx] != 0 && b[idx] != 0 && a[idx] == b[idx])
    {   
        idx++;
    }
    return a[idx] - b[idx];
}

char * mycpy(char *dst,const char* src){
    int idx = 0;
    while (src[idx] != 0)   
    {
        /* code */
        dst[idx] = src[idx];
        idx++;
    }
    dst[idx] = 0;

    return dst;
}

int main(int argc, char const *argv[]){

    char *a = "qwertyxz";
    char b[6] = "z";
    char x[10] = "x-";

    //printf("%d-%d-%d", mylen(a), mylen(b), mylen(x));
    //printf("%d\t%d\t%d\n", mycmp(a,b), mycmp(b,x), mycmp(x,a));
    
    //printf("%s\t%s\t%s\n", strncpy(b,a,4), strncpy(x,b,5), strncpy(x,a,10));
    printf("%s\t%s\t%s\n", strncat(b,a,3), strncat(x,b,2), strncat(x,a,3));
    return 0;
}