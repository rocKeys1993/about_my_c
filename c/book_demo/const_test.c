#include <stdio.h>
/*
 *  const 应该相当于 java 的 final 令牌。
 *  如果 const int a = 3 则，a 的值不可以被改变。
 */
//const int a = 3;
int a = 3;
int main()
{
    a = 33;
    int b = 123;
    /* 强制类型转换 */
    double c = (double)b;
    printf(" a = %d " , a );
    printf(" b = %e " , c );// %e 用来格式化 double型数据
}
