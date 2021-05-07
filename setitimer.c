// setitimer.c

#include <stdio.h>
#include <unistd.h>
#include <sys/time.h>
#include <signal.h>
#include <string.h>

// 注册信号处理函数, 打印当前时间戳,信号编号及对应的说明
void sigHandler(int sig) {
    static int k = 0;
    k = k + 1;
    printf("[%d] %d.caught signal: #%d: %s\n", time(NULL),k, sig, strsignal(sig));
}

int main(int argc, const char *argv[]) {
    // 打印开始时间戳
    printf("[%d] start\n", time(NULL));

    // 注册SIGALRM信号处理函数, setitimer函数会不停地发SIGALRM信号
    signal(SIGALRM, sigHandler);
    struct itimerval it, oldit;

    // 第3秒时发一次SIGALRM信号
    it.it_value.tv_sec = 3;
    it.it_value.tv_usec = 0;
    // 以后每隔1秒发一次SIGALRM信号
    it.it_interval.tv_sec = 1;
    it.it_interval.tv_usec = 0;
 
    setitimer(ITIMER_REAL, &it, NULL);

    int inter = 0;
    while(inter<10){
        sleep(1);
        inter = inter + 1;
    };
    return 0;
}

