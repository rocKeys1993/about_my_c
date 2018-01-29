#include <stdio.h>

/*
 * switch 是遍历case的语句，如果，switch括号中的语句等于case后面的语句,则执行case冒号后面的语句。如果不相等则跳过冒号后面的语句。
 * switch 是遍历来进行判断的，所以case条件越多，所需要的资源应该越多。
 * 如果case 后面的语句值==于switch括号中的语句值，则该case后面的case的执行语句都会被执行，直到遇到break令牌。
 * 例如输入A字符，会print 70-80
 */
int main()
{
    char garde;// 局部char变量默认初始化值为空,不是null也不是空格符，就是没有值的空。
    char *garde_x = &garde;// 局部char变量默认初始化值为空,不是null也不是空格符，就是没有值的空。
    printf("garde_init = -%c-",garde);
    printf("\n");
    //printf("garde_init_address = -%s-",&garde);
    printf("garde_init_address = -%s-",garde_x);
    printf("\n");
    scanf("%c",&garde);
    printf("please input your garde:");
    printf("\n");
    printf("garde_scanf = -%c-",garde);
    printf("\n");
    printf("garde_init_address = -%c-",*garde_x);
    //printf("garde_scanf_address = -%s-",&garde);
    printf("\n");
    switch(garde)
    {
        case 'A':printf("80-100\n");
        case 'B':printf("70-80\n");break;
        case 'C':printf("60-70\n");printf("all code run");printf("if not break");
        case 'D':printf("59\n");
        default:printf("input date is invalid");
    }
}
