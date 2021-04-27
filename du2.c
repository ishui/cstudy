
#include <stdio.h>
#include <stdlib.h>   /*exit函数*/
#include <fcntl.h>    /*open函数*/
#include <unistd.h>   /*dup2函数*/
 
/*
*STDIN_FILENO  0      标准输入
*STDOUT_FILENO 1      标准输出
*STDERR_FILENO 2      标准错误
*
*当再次打开fd 返回当前未使用的最小的fd  即为3
* */
 
int main()
{
    int fd1 = open("x.txt", O_CREAT|O_RDWR, 0777);   //fd1 == 3
    if(fd1 < 0)
    {
        perror("open fd");
        exit(0);
    }
 
    
    int fd2 = open("y.txt", O_CREAT|O_RDWR, 0777);   //fd2 == 4
    if(fd2 < 0)
    {
        perror("open fd");
        exit(0);
    }
 
    int returnfd = dup2(fd1, fd2); 
    printf("returnfd = %d\n", returnfd);   //4
    printf("fd1 = %d\n", fd1);             //3
    printf("fd2 = %d\n", fd2);             //4
 
    //以下3个句话全部写入 x.txt中
    //  returnfd = dup2(oldfd, newfd)  
    //  On success, these system calls return the new descriptor.  On error, -1 is returned, and errno is set appropriately.
    //  函数失败returnfd == -1 (比如指向一个不存在的oldfd)
    //  函数成功返回的returnfd代表的意义有两个
    //  1. 返回的值returnfd是newfd所设置的值,
    //  2. 返回的returnfd的功能则是oldfd的功能
    //  该函数同时将newfd指向oldfd所指向的文件描述符表
    //  (即让newfd和oldfd功能一样,或者说让newfd指向的文件为oldfd所指向的文件)
    //  dup2()此函数结束,returenfd 和 newfd的功能及数值一模一样
    //  所以man手册也说 return the new descriptor
    write(fd1, "fd1\n", 4);
    write(fd2, "fd2\n", 4);
    write(returnfd, "returnfd\n", 9);        
 
    close(fd1);
    close(fd2);
    return 0;
}
