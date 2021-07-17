#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include "person.h"

int main(int argc,char *argv[]){
    
    struct person stu;
    printf("begin read file...\n");
    FILE *pfile = fopen("fprintf.txt","r");
    fscanf(pfile,"%d %s %f",&stu.num,&stu.name,&stu.score);
    fclose(pfile);
    printf("you score is: %d %s %.2f\n",stu.num,stu.name,stu.score);
    printf("read file end...\n");
    return 0;
}
