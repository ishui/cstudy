#include<stdio.h>

typedef void(*PFUN)();
void say();
void hh(PFUN);
int main(){
        
    printf("test cc\n");
    PFUN pFUN = &say;
    void(*pFun2)() = &say;
    pFUN();        
    pFun2();
    printf("++++++++++++++++++\n");
    hh(pFUN);
    return 0;
}

void say(){
    printf("say hello world\n");
}
void hh(PFUN f){
    f();
}
