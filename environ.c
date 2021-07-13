#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

extern char **environ;

int main(int argc,char *argv[]){

    int i = 0;
    for (; environ[i] ; i++)
    {
        printf("%s\n",environ[i]);
    }
        


    return 0;
}