// #include<stdio.h>
// #include<stdlib.h>
// #include<unistd.h>

// int main(){

// }
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

int main(){

    // execl("/bin/ls", "ls", "-al", "/etc/passwd", (char *)0);
    // execl("/bin/ls","ls","/",NULL);
    execlp("ls","ls","/",NULL);

    return 0;
}