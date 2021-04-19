#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

int main(int argc,char *argv[]){

    // if(argc<2){
    //     printf("Please enter filename...\n");
    //     exit(1);
    // }

    FILE *fp = fopen("hello.txt","r");
    FILE *fp2 = fopen("hello2.txt","w");
    char re;
    int i = 0;
    while ( (re = getc(fp)) != EOF )
    {
        printf("printf %c\n",re);
        putc(re,fp2);
        if(re>='a' && re <='z')
            i = i + 1;
    }
    fclose(fp);
    fclose(fp2);
    printf("Total lines is %d Count word = %d\n" , __LINE__,i);
    printf("Time is %s\n",__TIME__);
    printf("file name is %s\n",__FILE__);
    return 0;
}