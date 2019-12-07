#include <stdio.h>
#include <stdlib.h>
#include "student.h"

void read(FILE * fp, int n);

int main(int argc, char* argv[]){
    int n = 0;

    FILE *fp = fopen("student.data","r");

    if (fp)
    {
        fseek(fp,0l,SEEK_END);
        long size = ftell(fp);
        n = size/sizeof(student);

        int idx = 0;
         printf("有%d个学生，你要看第几个：", n);
         scanf("%d",&idx);
         if (idx>n)
         {
             printf("没有第%d个学生", idx);
             exit(1);
         }
         
         read(fp, idx-1);
         fclose(fp);
    }
    
    return 0;
}

void read(FILE * fp, int n){
    fseek(fp, n*sizeof(student),SEEK_SET);
    student stu;
    if(fread(&stu,sizeof(student),1,fp) == 1){
        printf("第%d个学生：\n", n+1);
        printf("\t 姓名：%s", stu.name);
        printf("\t 年龄：%d", stu.age);
        if (stu.gender == 0)    
        {
            printf("\t 性别：男");
        }else{
            printf("\t 性别：女");
        }
        
    }else{
        printf("read file ERROR!");
    }
}