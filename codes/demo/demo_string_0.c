#include <stdio.h>
#include <string.h>


/*
 * 定义的char 变量 a ，长度为2 ，定义初始化的值为 abc ，显然，长度大于所定义的2
 * 1. 如果初始化的值长度，大于定义的长度，compile warning 。
 * 2. 同时，大于定义长度的部分，不会被存储。
 * 3. printf 打印的是 字符的 ASCII 编码
 */


int main()
{
    //printf("array of a length is 2 ,init variable is 'abc'");
    //char a[2] = "abc";
    printf("\n");
    char a[2] = "ab";
    char a1[5] = "abcde";
    printf("%s",a);
    printf("\n");
    //printf("a[2] = %d",a[2]);
    printf("\n");
    printf("a[1] = %d",a[1]);
    printf(" , a[1]address = %s",&a[1]);
    printf("\n");
    printf("a[0] = %d",a[0]);
    printf(" , a[0]address = %s",&a[0]);
    printf("\n");
    printf(" , a1[0]address = %s",&a[0]);
    printf(" , a1[1]address = %s",&a1[1]);
    printf(" , a1[2]address = %s",&a1[2]);
    printf(" , a1[3]address = %s",&a1[3]);
    printf("\n");
}
