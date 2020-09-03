#include<stdio.h>
#include<string.h>

int main(){
    printf("begin。。。\n");
    FILE *file = fopen("one.c","r");
    if(file == NULL){
        printf("文件打开失败\n");
    } else{
        printf("打开了文件\n");
    }
    char buf[1024]={0};
    while(fgets(buf,1024,file) != NULL){
        printf("%s",buf);
    }

    fclose(file);
}