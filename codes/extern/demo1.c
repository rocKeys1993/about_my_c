#include <stdio.h>

/*
 * 局部变量默认的初始化值，是随机数。似乎就是栈寄存器单位的地址。
 * extern 声明全局变量，如果声明全局变量同时初始化，编译的时候会report warning。
 */

int a;// 全局变量


int b = 1;
int c = 2;

void t()
{
    printf("\n");
    printf("b = %d",b);
    printf("c = %d",c);
    printf("\n");
}

void t1()
{
    int b ;
    int c ;
    int b1 ;
    //int c1 ;// 会发现c1 、c2 、c3 、c4 都是随机数。
    //int c2 ;
    //int c3 ;
    //int c4 ;
    int c1,c2,c3,c4;

    printf("\n");
    printf("b = %d",b);
    printf("b1 = %d",b1);
    printf("c = %d",c);
    printf("c1 = %d",c1);
    printf("c2 = %d",c2);
    printf("c3 = %d",c3);
    printf("c4 = %d",c4);

    printf("\n");

}

void t2()
{
    b = 3;// 全局变量值被改变
    printf("\n");
    printf("b = %d",b);
    printf("c = %d",c);
    printf("\n");

}

void t3()
{
    printf("\n");
    printf("b = %d",b);// printf的值是被改变后的值，说明函数改变了全局变量的值
    printf("c = %d",c);
    printf("\n");
}

int main()
{
    printf("a = %d",a);// 这里调用了 全局变量
    printf("\n");
    t();
    t1();
    t2();
    t3();
    //tt(); 测试验证，C编译器是安装行号序列加载源代码的，变量和函数的声明都必须在调用之前被声明以及定义。
}


/* 如果tt调用失败，则说明C是按照行数次序编译源代码的。
void tt()
{
    printf("b = %d",b);
    printf("c = %d",c);
    printf("if b = 1,c = 2 ;则说明 函数中，直接使用变量名即可调用全局变量。");
}
*/

/*
 * int a 声明一个变量，compiler默认初始化值为0
 */
