#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<signal.h>

// int pubnum(){
//     static int pnum = 0;
//     return pnum++;
// }
int pubnum(){
    static int c = 0;
    c = c + 1;
    return c;  
}
// static int pubnum = 0;
void parentsig(int sig){
    // pubnum++;
    printf("I'm parent read num is %d\n",pubnum());
}
void chilensig(int sig){
    // pubnum++;
    printf("I'm chilen read num is %d\n",pubnum());
}
int main(int argc,char *argv[]){
    
    int returnid = 0;
    returnid = fork();
    printf("%d.process is begin...\n",returnid);
    if(returnid > 0 ){
        printf("parent fork is begin...\n");
        signal(SIGUSR1,parentsig);
        
        sleep(1);
        kill(returnid,SIGUSR2);
        pause();        
        // while (1)
        // {
        //     kill(returnid,SIGUSR2);
        //     pause();
        // }
        
    }else if(returnid == 0){
        printf("chilen fork is begin...\n");

        signal(SIGUSR2,chilensig);

        sleep(1);
        kill(getppid(),SIGUSR1);
        pause();
        // while (1)
        // {
        //     kill(getppid(),SIGUSR1);
        //     pause();
        // }
        

    }

    return 0;
}