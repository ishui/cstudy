#include<stdio.h>
#include<stdlib.h>
void main(){
    FILE *fp ;
    if( (fp = fopen("onee.c","r")) == NULL){
        printf("file open is fail\n");
        exit(0);
    };

    fclose(fp);


}
