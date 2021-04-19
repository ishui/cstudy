#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(){
    printf("[%d]开始了程序的运行!\n",getpid());
    int i=0;
    int j=0;
    int pid = fork();
    if(pid<0){
        perror("fork() Fail!!\n");
    }
    if(pid == 0){
        printf("[%d]: 我是fork()子进程\n",getpid());
        
        for(i; i<10; i++){
            printf("[%d]: 子进程循环[%d]\n",getpid(),i);
        }
    }
    if(pid > 0){
        printf("[%d]：我是主进程!\n",getpid());
        for(j; j<10; j++){
            printf("[%d]: 父进程循环[%d]\n",getpid(),j);
        }
    }
}