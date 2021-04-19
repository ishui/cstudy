#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

int main(int argc,char *argv[]){

    char cst[5];
    char *ch = cst;
    printf("请输入一行文字：");
    // gets(ch);
    fgets(ch,5,stdin);
    fflush(stdin);
    printf("你所输入的文字是：%s\n",ch);
    ch = "";
    printf("请再输入一行文字：");
    // gets(ch);
    fgets(ch,5,stdin);
    fflush(stdin);
    printf("你所输入的文字是：%s\n",ch);
    printf("end...\n");
    return 0;
}