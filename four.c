#include<stdio.h>
void main(){
    FILE *fp;
    fp = fopen("or.cc","r");
    if (NULL == fp){
        printf("open file is failed\n");
    }else{
        printf("file open is ok\n");
    }
    
    
}