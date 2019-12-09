#include <stdio.h>
#include <stdlib.h>
#include <student.h>

void getlist(student arr[], int n);
int save(student arr[], int n);

int main(int argc, char* argv[]){
    int n = 0;
    printf("请输入学生的数量：");
    scanf("%d", &n);
    student arr[n];

    getlist(arr,n);

    int ret = save(arr,n);
    printf("SAVE学生的数量：%d\n", ret);

    return 0;
}

void getlist(student arr[], int n){
    char format[LEN];

    sprintf(format, "%%%ds", LEN-1);
    
    for(int i = 0;i<n;i++){
        printf("第%d个学生\n", i+1);
        printf("\t姓名：\n");
        scanf(format, arr[i].name);
        printf("\t年龄：\n");
        scanf("%d", &arr[i].age);
        printf("\t性别 0男  1女：\n");
        scanf("%d", &arr[i].gender);

    }

}

int save(student arr[], int n){
    int ret = -1;
    FILE *fp = fopen("student.data", "w");
    if(fp){
        ret = fwrite(arr,sizeof(student),n,fp);
        fclose(fp);
    }
    return ret;
}
