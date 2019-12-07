#include <stdio.h>

typedef struct
{
    int year;
    int month;
    int day;
} sDate;

sDate yuandan(sDate d){
    d.year += 1;
    d.month = 1;
    d.day = 1;
    return d;
}

sDate* guonian(sDate *d){
    
    d->month = 12;
    d->day = 31;
    return d;
}

void printdate(const sDate* p);

int main(int argc, const char* argv[]){
    sDate a ;
    a.year = 2019;
    a.month = 12;
    a.day = 23;

    sDate b = {2020,1,3};
    sDate c = {.year = 2011, .day = 9};
   
    

    typedef struct
    {
        int x;
        char* y;
    } pop;
    pop s = {202,"pop"},x;
    x = (pop){22, "joker"};
    printf("%d-%s\n", x.x, x.y);
   // s.x = 101;
    s.y = "name";
    s.y = "xxx";
    //s.y[2] = 90;
    s = x;
    x.x = 777;
    
    const char *ss, *xxx;
    ss = "eee";
    printf("%p\n", ss);
    ss = "x,y";
    printf("%p\n", ss);
    ss = 0;
    printf("%p\n", ss);
    ss = xxx;
    // *ss = 'a';
    printf("%p\n", xxx);
    printf("%p\n", ss);
   
    sDate u = yuandan(a);
    printdate(&u);
    
    printdate(guonian(&a));
    
    printdate(&c);

    printf("%d-%s\n", s.x, s.y);
    printf("%d-%s\n", x.x, x.y);
    printf("%d\n", a.day);
    
    return 0;
}

void printdate(const sDate* p){
    static int usecnt = 0;
    usecnt++;
    if (usecnt == 1)
    {
        /* code */
        printf("------------------\n");
    }
    
    
    printf("%d年%d月%d日\n", p->year,p->month,p->day);
    printf("------------------\n");
}