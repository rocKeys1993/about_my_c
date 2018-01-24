#include <stdio.h>

/*
 * scanf 函数有两个参数，第一个参数是键盘输入的格式化（输入规则），后续参数，根据输入规则（定义了输入单元）将输入单元逐个存放在后续参数中。
 */
int a,b,c,d;

int main()
{
    printf("scanf test:");
    printf("\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);// 格式化输入,两个%d 之间使用什么符号间隔，输入就使用什么符号间隔。
    printf("\n");
    printf("get result :");
    printf("\n");
    printf("a = %d , b = %d , c = %d , d = %d",a,b,c,d);
    printf("\n");
}
