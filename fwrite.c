#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include "person.h"

int main(int argc,char *argv[]){

    printf("begin writer file...\n");
    struct person stu = {100,"zhangsang",45.6};
    FILE *pfile = fopen("fwrite.dat","wb");
    if(pfile){
        fwrite(&stu, sizeof(stu), 1, pfile);
        fclose(pfile);
    }
    printf("writer file end...\n");
    return 0;
}