#include <stdio.h>

/*
 * 发现scanf 并非根据 第一个参数的输入格式化输入规则，不用空格符作为输入单元分割也依旧可以完成对abcd的赋值，scanf 输入识别能力别我想象的要高级很多。
 */
int a,b,c,d;

int main()
{
    printf("scanf test:");
    printf("\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("\n");
    printf("get result :");
    printf("\n");
    printf("a = %d , b = %d , c = %d , d = %d",a,b,c,d);
    printf("\n");
}
