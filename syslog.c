#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<syslog.h>

int main(int argc,char *argv[]){

    openlog("ishuisyslog",LOG_DEBUG,LOG_INFO);
    syslog(LOG_INFO,"i try 12");
    syslog(LOG_INFO,"i try 22");
    syslog(LOG_INFO,"i try 32");
    syslog(LOG_INFO,"i try 42");
    closelog();


    return 0;
}