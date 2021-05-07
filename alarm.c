#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

int main(int argc,char *argv[]){

    alarm(5);
    int i = 0;
    for (; i < 2; i++)
    {
        sleep(1);
        printf("begin the first is %d second\n",i);
    }
    int end = alarm(10);
    printf("pre second is %d\n",end);
    i = 0;
    for (; i < 15; i++)
    {
        sleep(1);
        printf("begin the second is  %d second\n",i);
    }   
    


    return 0;
}