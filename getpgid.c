#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>


int main(int argc,char *argv[]){

    int pgrp = getpgrp();
    char *login = getlogin();
    char *env = getenv("PATH");
    // int gpid = getgpid();
    umake(0);
    printf("group id is %d\n",pgrp);
    // printf("getgpid is %d\n",gpid);
    printf("login is %s\n",login);
    printf("path is : %s\n",env);

    return 0;
}