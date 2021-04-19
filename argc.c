#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

int main(int argc,char *argv[]){

    printf("argc = %d\n",argc);
    size_t i = 0;
    for (; i < argc; i++)
    {
        printf("argv[%d] = %s\n",i,argv[i]);
    }
    


    return 0;
}