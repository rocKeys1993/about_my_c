#include <stdio.h>

const int flag = 0 ;
int main()
{
    void notdo();
    int var = 1 ;
    do
    {
        var = 2;
    }while(flag);

    if(flag)
    {
        printf("test ==> ");
    }
    printf("var = %d",var);// if var = 2 说明do while是先do 一次再判断。
    printf("\n");
    notdo();
}

void notdo()
{
    int notdo = 1;
    while(flag)
    {
        notdo  = 2;
    }
    printf("not do = %d",notdo);// if notdo = 1 说明，while 是先判断，后执行。
    printf("\n");
}
