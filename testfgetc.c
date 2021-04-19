#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp = NULL;
    printf("i'm begin\n");
    fp = fopen("aa.txt","w");
    int ch ='a';
    // while ((ch = fgetc(fp)) != EOF )
    // {
    //     printf("%c\n",ch);
    // }
    fputc('a',fp);
    fputc('b',fp);
    fputc('c',fp);

    fclose(fp);
       
}