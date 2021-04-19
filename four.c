#include<stdio.h>
#include<stdlib.h>

void main(){
    FILE *fp;
    fp = fopen("or.c","r");
    if (NULL == fp){
        printf("open file is failed\n");
    }else{
        printf("file open is ok\n");
    }
    
}
