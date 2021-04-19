#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

int main(int argc,char *argv[]){

    FILE *fp;
    fp = fopen("hello.txt","r");
    if(fp == NULL){
        printf("读取文件错误\n");
        // perror(fp);
        exit(1);
    }

    fseek(fp,6,SEEK_SET);
    long pos = ftell(fp);
    printf("file position = %d\n",pos);
    char c = fgetc(fp);
    pos = ftell(fp);
    printf("file position = %d\n",pos);
    
    printf("c = %c\n",c);


    return 0;
}