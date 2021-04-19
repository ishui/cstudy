#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp = NULL;
    fp = fopen("aa.txt","r");
    char re[30];
    fgets(re,30,fp);
    printf("%s\n",re);
    printf("---end---\n");
}