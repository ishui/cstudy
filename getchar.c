#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

int main(int argc,char *argv[]){

    char c = NULL;
    c = getchar();
    while (c != '\n')
    {
        putchar(c);
        c = getchar();
    }
    
    


    return 0;
}