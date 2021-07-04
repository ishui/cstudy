#include "head.h"
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

int main(int argc,char *argv[]){

    int result = add(10,20);
    printf("a + b = %d\n",result);
    return 0;
}