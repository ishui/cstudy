#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<signal.h>

void catch(int sig){
    printf("I'm catch a singnal %d\n",sig);
}
int main(int argc,char *argv[]){

    while (1)
    {
        signal(SIGINT,catch);
        pause();
    }
    


    return 0;
}