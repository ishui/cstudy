#include <stdio.h>
#include <stdlib.h>
// #include <conio.h>
main()
{
    int x=0,y=0,i;
    char key; // 接受输入
    putchar('O'); // 一个小点
    while(1)
    {
    key=getch(); // 不带回显的接受输入
    if(key=='q') break; // 输入wasd，输入q退出
    switch(key)
    {
        //设置任意热键 
//    case 'w': (x>0?--x:x);break;
//    case 's': x++;break;
//    case 'a': (y>0 ? --y:y);break;
//    case 'd': ++y;break;
//    default:break;
//设置任意热键 
    case -32:
         key=getch();
            switch(key)
            {
            case 72:
            (x>0?--x:x);break;
            case 80:
            x++;break;
            case 75:
            (y>0 ? --y:y);break;
            case 77:
             ++y;break;
            default:break;
            }
            default:break;
    }
    system("cls"); // 清屏
    for(i=0;i<x;i++) printf("\n");
    for(i=0;i<y;i++) printf(" ");
    putchar('O'); // 输出
}
}