#include <stdio.h>

/*
 * &号是取址符
 * *variablename 定义一个地址变量，用来存放变量的地址。
 * 似乎就是左值，右值。*addressvariable 就是内存地址中存放的值 &变量名 就是内存地址的地址值。*addressvariable = &variablename 意义是，把variablename变量的地址指向addressvariable的地址中。
 */

int a = 1;
int *a_address = &a;

int main()
{
    printf("address of a is : %p",a_address);
    printf("\n");
    printf("value of a is : %d",a);
    printf("\n");
    printf("value of a is : %d",*a_address);
    printf("\n");
}
