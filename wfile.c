#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

int main(int argc,char *argv[]){

    char *s = "this is a lines words\n";
    FILE *fp = fopen("x.txt","a");
    fputs(s,fp);
    fflush(fp);
    fclose(fp);


    return 0;
}