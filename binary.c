#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

int main(int argc,char *argv[]){

    unsigned int a = 2;
    unsigned int b = ~a;
    printf("b = %d\n",b);
    b = ~b;
    printf("b = %d\n",b);

    int c = 1;
    int d = 2;
    int e = c|d;
    int f = c&d;
    printf("c|d = %d\n",e);
    printf("c&d = %d\n",f);
    

    return 0;
}