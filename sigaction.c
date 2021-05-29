#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<signal.h>

void sahandler(int sig){
    int i = 0;
    while (i<9)
    {
        i++;
        sleep(1);
        printf("%d.catch a sig %d\n",i,sig);

    }
    printf("catch end...\n");
    
}
int main(int argc,char *argv[]){
    struct sigaction newact,oldact;
    newact.sa_handler = sahandler;
    sigemptyset(&newact.sa_mask);
    sigaddset(&newact.sa_mask,3);
    newact.sa_flags = 0;
    sigaction(SIGINT,&newact,NULL);
    

    while (1);
    printf("end...\n");
    
    return 0;
}