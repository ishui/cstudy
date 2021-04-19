#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

int main(int argc,char *argv[]){

    FILE *fp = fopen("../data/hello.txt","r+");
    char s = 'd';
    fseek(fp,0,SEEK_END);
    fputc(s,fp);
    fseek(fp,0,SEEK_END);
    int end = ftell(fp);
    fseek(fp,0,SEEK_SET);
    printf("file posision is %d\n",ftell(fp));
    printf("fgetc char is %c\n",fgetc(fp));
    ;
    printf("file posision is %d\n",ftell(fp));

    printf("file size is %d\n",end);
    fclose(fp);


    return 0;
}