#define S(a,b) a*b
#include <stdio.h>


/*
 * 这个程序用来理解#define 的意义
 * define 可以定义一个全局规则，结合全局变量的概念。也可以叫做，全局函数。
 * 这个程序，最开始，定义了一个函数名为S的函数，也是一种逻辑的命名，S逻辑。这个逻辑有两个参数，a&b,这两个参数遵循a*b的规则。
 * 函数和函数体，也就是逻辑和逻辑体使用空格分割。
 * define用来定义全局函数，使用上和普通函数一样。
 * define 定义逻辑所需要的token 比源代码中的逻辑定义要少，define不需要 数据类型token以及函数体token
*/
int define_test()
{
    int a = 0;
    int b = 1;
    int result = S(a,b);
    return result;
}

int main()
{
    printf(" define define_test number is : %d \n" , define_test());
    return 0;// 注意，这里可以不用return ，编译不会报错。
}
