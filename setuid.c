#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

int main(int argc,char *argv[]){

    int suc = NULL;
    FILE *fp;
    char cs[] = "this is a test"; 
    char *c = cs;
    unsigned int originid = getuid();


    suc = setuid(1005);
    setgid(976);
    if(suc < 0){
        printf("setuid is error!\n");
        exit(1);
    }
    fp = fopen("/tmp/setid.txt","w");

    fputs(c,fp);
    fclose(fp); 
    
    setuid(983);
    fp = fopen("/tmp/setid2.txt","w");
    fputs(c,fp);
    fclose(fp); 

    return 0;
}