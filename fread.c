#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include "person.h"

int main(int argc,char *argv[]){

    printf("begin read file...\n");
    struct person stu;
    FILE *pfile = fopen("fwrite.dat","rb");
    if(pfile){
        fread(&stu, sizeof(stu), 1, pfile);
        fclose(pfile);
        printf("you score is: %d %s %.2f\n",stu.num,stu.name,stu.score);
    }
    printf("read file end...\n");


    return 0;
}