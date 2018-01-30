#include <stdio.h>

/*
 *  该程序输出了4*5的矩阵数据
 */

int main()
{
    for(int i = 1 ; i < 5 ; i++ )
    {
        for(int j = 1 ; j < 6 ; j++)
        {
            printf("%d\t",j*i);
        }
        printf("\n");
    }

}
