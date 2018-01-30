#include <stdio.h>

/*
 * for 的第三个参数，是for循环最后执行的语句
 */
int main()
{

    //for(int i = 0 ; i < 10 ; i++){
    int i = 0 ;

    for(int i = 0 ; i < 10 ; ++i){ // for 有三个参数，第三个是等到执行完for的代码之后才之行的。

        printf("i = %d",i);
        printf("\n");

    }

    //i++;
    //++i;
    int a = i ++ ;
    int b = ++ i;
    int c = i;
    printf("a = %d",a);
    printf("\n");
    printf("b = %d",b);
    printf("\n");
    printf("c = %d",c);
    printf("\n");

}
