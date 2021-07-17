#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

int main(int argc,char *argv[]){

    printf("this progress is beging\n");
    int pid = fork();

    if(pid > 0){
        printf("this is main \n");
        sleep(10);
    }else if (pid == 0)
    {
        printf("sub processid is : %d\n",getpid());
        execlp("ls","zzzzzzzz","-c","-a",NULL);
        sleep(10);
    }

    return 0;
}