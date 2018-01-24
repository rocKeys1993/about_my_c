#include <stdio.h>

int main()
{
    char date[] = __DATE__;
    printf("date : %s",date);
    printf("\n");
    char time[] = __TIME__;
    printf("time : %s",time);
    printf("\n");
    
}
