#include<stdio.h>
void main(){
    printf("this is a test\n");
    int a = 10;
    int b = 20;

    const int *p = &a;
    p = &b;
    b = 40;
    // *p = 30;
    printf("p = %d\n",*p);
    printf("%p = %d\n",p,*p);
    
    printf("---------end------------");
    
}