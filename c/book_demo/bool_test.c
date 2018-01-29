#include <stdio.h>
#include <stdbool.h> // include stdbool.h 文件，bool b = 0; 将不会报错，stdbool.h 中应该 #define _Bool = bool 了 
/*
 *  测试结果，没有include <stdbool.h>文件，使用bool令牌是会occur compile error的。
 *  并且true和false 不能作为值赋给变量。
 */
int main()
{
    // _Bool a = true;// 不引入stdbool.h文件的方式 , true不能作为值赋给a ，will occur compile error.
    _Bool a = 1;// 不引入stdbool.h文件的方式
    // bool b = 0;// 不引入stdbool.h文件的时候，vim依然会把bool高亮，所以测试一下，没有include <stdbool.h>的代码中，使用bool会不会报错
    bool b = 0;

    if(a) printf(" a = true ");
    else printf(" a = false ");
}
