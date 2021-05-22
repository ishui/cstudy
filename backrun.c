#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<signal.h>

void acceptsig(int sig){
    int i= 0;
    while (i<3)
    {
        i++;
        sleep(2);
        printf("accept sigle %d\n",sig);
        
    }
    

}

int main(int argc,char *argv[]){

    if(fork()>0) exit(0);
    signal(SIGINT,acceptsig);
    signal(SIGTERM,acceptsig);

    int i = 0;
    while (1)
    {
        if(i == 0) printf("\n");
        i++;
        sleep(2);
        printf("%d.I'm is runnig...\n",i);
    }
    


    return 0;
}