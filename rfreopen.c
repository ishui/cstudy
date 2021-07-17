#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

int main(int argc,char *argv[]){

    freopen("freopen.txt","r", stdin);
    char s[1024];
    fgets(s,6,stdin);
    printf("%s\n",s);

    fgets(s,2,stdin);
    fflush(stdin);

    fgets(s,7,stdin);
    printf("%s\n",s);

    // fgets(s,1023,stdin);
    // printf("%s\n",s);

    // fgets(s,1023,stdin);
    // printf("%s\n",s);


    return 0;
}