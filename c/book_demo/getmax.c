#include <stdio.h> 
/*
 *  max 定义在main方法后面，但是编译和执行都没有报错，关键在于11行，int max(int x,int y); 在main函数中，似乎又声明了一遍max 函数。
 *  在14 行调用了， max 函数。
 *  由此猜想：声明在于被调用，可能就是获取物理地址。
 *  定义：在于制定运算规则，定义的是逻辑，声明的是地址。
 */

int main()
{
    int max(int x,int y); // 这里只有函数声明，看来，声明是建立数据调用关系的，定义是建立数据运算逻辑的。
    int a , b , c ;
    scanf("%d,%d",&a,&b);
    c = max(a,b);
    printf("max = %d",c);
    printf("\n");
    return 0;
}

int max(int x,int y) // max 定义在main函数之后，main之所以可以调用，是因为其函数体中，声明了max函数，如果说main中的是函数的声明，那么函数的定义，应该就是在这里了。
{
    // step1 code :
    /*
    int z ;
    if(x > y)
    {
        z = x;
    }else{
        z = y;
    }
    return z;
    */
    // step1 code有冗余.

    // step2 code : 
    /*
    if(x > y)
    {
        return x;
    }else{
        return y;
    }
    */
    // step2 相对step1 冗余少。

    // step3 code :
    return x>y?x:y;
    // 使用三目冗余最少。
}
