#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

int main(int argc,char *argv[]){

    int i = 0;
    alarm(1);
    for (;;)
    {
        i = i + 1;
        printf("%d\n",i);
    }  

    return 0;
}