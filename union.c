#include <stdio.h>

#define NUM1 1000
#define NUM NUM1 + 234
#define FORMAT "%02x\t%d "
#define END "\n" //CR lF
#define prt(x,y) printf(FORMAT END,(x),(y))
#define CAT(n) "XYZ"#n
#define DGT(a,b) a##b 
#define STR(a,b) a b
#define PLINE printf("-----------------------"END)

//#define STR(a,b) a##b
void dn_com_jni_read(int x){
    printf("read\t%d\n", x);
}

void dn_com_jni_write(){
    printf("write\n");
}

#define TST(name,x) dn_com_jni_##name(x)

#define FMT "%s%d"
#define ERR "ERROR: "
#define INFO "INFO: "

//升级版 日志 (替换两次)
#define LOG(LVL, FF,...) printf(LVL ); printf(FF END,__VA_ARGS__)
//#define LOG_I(FORMAT,...) LOG("INFO:",FORMAT,__VA_ARGS__)
// #define LOG_E(...) LOG(__VA_ARGS__)  //##代表参数 (有时候不加也可以)
#define LOG_E(FF,...) LOG(ERR, FF,__VA_ARGS__)
#define LOG_I(FF,...) LOG(INFO, FF,__VA_ARGS__)
//#define LOG_W(FORMAT,...) LOG("WARN:",FORMAT,__VA_ARGS__)



int main(int argc, const char* argv[]){
    //LOG("%s%d", "大小：", 89);  
    LOG_E(FMT, "size: ", 90);
    LOG_I(FMT, "THIS AGE: ", 22);

    TST(read,345);

    typedef union
    {
        int i;
        unsigned char ch[sizeof(int)];
    } CH;
    
    PLINE;

    #define OPT 2
    #if OPT == 3
    printf("opt3"END);
    #elif OPT ==2
    printf("opt2"END);
    //#pragma message("Macro ISPC is defined") //编译输出：Macro ISPC is defined  
    #else
    //#error ILLEGAL OPTION!
    //#error ILLEGAL OPTION! //fatal error C1189: #error :  ILLEGAL OPTION!  
    #endif

    PLINE;

    printf("%s"END,CAT(23));
    printf("%d"END,DGT(2,5));
    char* s2 = STR("abc","def");
    char* s3 = "axb""xui";
    printf("%s"END, s2 );

    CH c;
    c.i = NUM;;

    for (int i = 0; i < sizeof(int); i++)
    {
        // printf(FORMAT END, c.ch[i],c.ch[i]);
        prt(c.ch[i],c.ch[i]);
    }
    
    printf("%s"END , __func__);
    printf("%d"END , __LINE__);
    printf("%s"END , __FILE__);
    printf("%s"END , __DATE__);
    printf("%s"END , __TIME__);
    return 0;
}