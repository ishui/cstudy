#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

int main(int argc,char *argv[]){
    if(argc > 0){
        printf("argc = %d\n",argc);
    }
    int i = 0;
    for (; i < argc; i++)
    {
        printf(" %d.this is test %s\n",i,argv[0]);
    }
    


    return 0;
}