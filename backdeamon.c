#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <sys/param.h>
#include <sys/types.h>
#include <sys/stat.h>

void init_daemon(void)
{
    int pid;
    int i;
    if (pid = fork())
        exit(0); //是父进程，结束父进程
    else if (pid < 0)
        exit(1); //fork失败，退出
    //是第一子进程，后台继续执行
    setsid(); //第一子进程成为新的会话组长和进程组长
    //并与控制终端分离
    if (pid = fork())
        exit(0); //是第一子进程，结束第一子进程
    else if (pid < 0)
        exit(1); //fork失败，退出
    //是第二子进程，继续
    //第二子进程不再是会话组长
    for (i = 0; i < NOFILE; ++i) //关闭打开的文件描述符
        close(i);
    chdir("/tmp"); //改变工作目录到/tmp
    umask(0);      //重设文件创建掩模
    return;
}

main()
{
    FILE *fp;
    time_t t;
    init_daemon(); //初始化为Daemon
    fp = fopen("test.log", "a");
    int i = 0 ;
    for ( ; ; i++) //每隔一秒钟向test.log报告运行状态
    {
        sleep(1); //睡眠一秒钟
        
        if(fp == NULL){
            perror("文件出错\n");
            exit(1);
        }
        fprintf(fp,"%d\n",i);
        fflush(fp);
        // if ((fp = fopen("test.log", "a")) >= 0)
        // {
        //     t = time(0);
        //     fprintf(fp, "I'm here at %sn", asctime(localtime(&t)));
        //     fclose(fp);
        // }
    }
}