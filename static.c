#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

void a(){
    static int c = 0;
    c = c + 1;
    printf("%d\n",c);    
}

int main(int argc,char *argv[]){
    int i;
    for(i = 0; i<10; i++){
        a();
    }
    return 0;
}