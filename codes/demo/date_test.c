#include <stdio.h>

/*
 *
 * 代码中的 __DATE__ 、__TIME__ 都是宏定义的。
 * 
 */

int main()
{
    char date[] = __DATE__;
    printf("date : %s",date);
    printf("\n");
    char time[] = __TIME__;
    printf("time : %s",time);
    printf("\n");
    
}
