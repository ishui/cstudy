#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<signal.h>

void malarm(int arm){
    printf("alarm is click...\n");
}

int main(int argc,char *argv[]){
    int i = 0;
    
    signal(SIGALRM,malarm);
    alarm(5);
    sleep(2);
    int fire = alarm(10);
    printf("alarm is pass %d second\n",fire);
    while (i<12)
    {
        ++i;
        sleep(1);
        // if(i==5) alarm(3);
        printf("pass %d second\n",i);
    }

    return 0;
}