#include <stdio.h>
#include <string.h>

/*
 * char array[] ; 定义数组的时候，需要指定数组的长度，ex:char array[10],如果不指定长度，编译可以通过，但是会report warning
 * C 的null值 是常量NULL。
 */
//char b ;

char a[10] ;
char b[10] ;

int main()
{
    //char a[] = NULL;// 如果是数组没有初始化，will got a warning when compile code
    scanf("%s",a); // 以回车作为输入完成标示。
    printf("%s",a);
    printf("\n");
    printf("scanf words length = %d",strlen(a));
    printf("scanf words first element  = %s",a[0]);
    printf("scanf words second element  = %s",a[1]);
    printf("scanf words third element  = %s",a[2]);
    printf("%d",strlen(b));
    printf("\n");
    //printf("--------------------------------------------------------------------");
    /*
    scanf("%c",b); 
    printf("%c",b);
    printf("\n");
    */
}
