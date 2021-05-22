#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main(int argc,char *argv[]){

    pid_t  res = 0;
    pid_t ppid = 0;
    int i = 0;
    res = fork();
    if(res > 0){
        while (1)
        {          
            i++; 
            sleep(1);
            printf("===========================\n");
            printf("I'm a parent pid is %d\n",getpid());
            printf("my chile pid is %d\n",res);           
            if(i == 3){
                printf("I'm parent. I is dead\n");
                printf("===========================\n");
                exit(0);
            }
            printf("===========================\n");

            // printf("I sleep is end\n");        
        }
        
    }
    if(res == 0){
        while (1)
        {  
            ppid = getppid();
            i++;         
            sleep(1);
            printf("------------------------------------\n");
            printf("I'm a child pid is: %d\n",getpid());
            printf("my parent pid is %d\n",ppid); 
            if(ppid == 1){
                printf("my parent is dead my parent id is %d\n",getppid());
            }
            if(i == 9){
                exit(0);
            }
            printf("------------------------------------\n");

        }
        
    }
    


    return 0;
}