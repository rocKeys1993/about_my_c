#include <stdio.h>

/*
 * a 的默认初始化是随机数
 */

int main()
{
    int a ;// 局部变量，正好测试编译器默认初始化 
    int b ;
    int c ;
    printf("%d",a);
    printf("\n");
    printf("%d",b);
    printf("\n");
    printf("%d",c);
    printf("\n");
    printf("&a = %n",&a);
    printf("\n");
    printf("&b = %n",&b);
    printf("\n");

    scanf("10%d",&a);// %d前面有字符，则必须按照10_的规则输入，并且只有_会被输入a,而前面的10是格式。
    printf("\n");
    printf("after scanf : ");
    printf(" a = %d",a);
    printf("\n");

}
